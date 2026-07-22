#include <iostream>
 
using namespace std;
 
void bubbleSortAscWorst(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
 
void bubbleSortAscBest(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        if (!swapped)
            break;
    }
}
 
void printArray(int arr[], int n, string msg = "")
{
    cout << msg << endl;
 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main()
{
 
    int arr[] = {5, 16, 4, 71, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printArray(arr, n, "Original array:");
 
    bubbleSortAscWorst(arr, n);
    printArray(arr, n, "Sorted array(asc) worst case:");
 
    bubbleSortAscBest(arr, n);
    printArray(arr, n, "Sorted array(asc) best case:");
 
    return 0;
}  
