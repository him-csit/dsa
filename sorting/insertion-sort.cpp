#include <iostream>
 
using namespace std;
 
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
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
    int arr[] = {51, 14, 33, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, n, "Original array:");
    
    insertionSort(arr, n);
    printArray(arr, n, "Sorted array(asc):");
 
    return 0;
}
