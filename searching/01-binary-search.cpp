#include <iostream>
#include <vector>

// Function to perform Binary Search on a sorted vector.
// Returns the index of 'target' if found, or -1 if not found.
int binarySearch(const std::vector<int>& arr, int target) {
    // Step 1: Initialize the two search boundary pointers.
    // 'left' starts at the beginning of the array (index 0).
    int left = 0;
    
    // 'right' starts at the end of the array (last valid index).
    int right = arr.size() - 1;

    // Step 2: Continue searching as long as the search space is valid.
    while (left <= right) {
        
        // Calculate the middle index to avoid integer overflow 
        // (equivalent to (left + right) / 2, but safer for large values).
        int mid = left + (right - left) / 2;

        // Case 1: Target value is found at the middle index!
        if (arr[mid] == target) {
            return mid; // Return the position (index) of the target.
        }

        // Case 2: Target is GREATER than mid element.
        // This means target must lie in the RIGHT half of the search space.
        if (arr[mid] < target) {
            left = mid + 1; // Shift left boundary past mid.
        } 
        
        // Case 3: Target is SMALLER than mid element.
        // This means target must lie in the LEFT half of the search space.
        else {
            right = mid - 1; // Shift right boundary before mid.
        }
    }

    // Step 3: If 'left' exceeds 'right', the element is not in the array.
    return -1;
}

int main() {
    // IMPORTANT: Binary search strictly REQUIRES a sorted array/vector.
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    // Call the binary search function
    int result = binarySearch(numbers, target);

    // Print the search result
    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
