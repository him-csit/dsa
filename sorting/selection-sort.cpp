#include <iostream>
 
using namespace std;
 
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
 
        swap(arr[i], arr[idx]);
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
 
    selectionSort(arr, n);
    printArray(arr, n, "Sorted array(asc):");
 
    return 0;
}   
