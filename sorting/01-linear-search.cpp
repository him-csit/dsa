#include <iostream>

using namespace std;

/*
? Linear Search:
----------------
* Linear Search is a simple searching algorithm that checks each element of the array one by one until it finds the target element.

? Time Complexity:
 * Best case: O(1)
 * Worst case: O(n)
 * Avg. case: O(n)
? Space Complexity: O(1)

*/

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
