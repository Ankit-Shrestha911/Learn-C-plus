//MergeSort //
#include <iostream>
using namespace std;

void MergeArray(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;

    int c = s;

    int temp[e];

    while (i <= mid and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[c++] = arr[i++];
        }
        else
        {
            temp[c++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[c++] = arr[i++];
    }

    while (j <= e)
    {
        temp[c++] = arr[j++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int *arr, int s, int e)
{

// if(s>=e){
//     return;
// }
   
if(s<e){
    // Divide
    int mid = (s + e) / 2;
    // Sort //
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    // Merge

    MergeArray(arr, s, e);
}
}

int main()
{
    int arr[] = {4, 5, 1, 10, -1, 2, 18, 7};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}