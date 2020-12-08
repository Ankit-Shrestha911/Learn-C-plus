#include <iostream>
using namespace std;

void MergeArray(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int i = start, j = mid + 1,k = start;


    int tempArray[100]; //If this code is not submit or test case fail then increase the size of tempArray tempArray[1000000]; //

    while (i <= mid and j <= end)
    {

        if (arr[j] < arr[i])
        {
            tempArray[k] = arr[j];
            k++, j++;
        }
        else
        {
            tempArray[k] = arr[i];
            k++, i++;
        }
    }
    while (i <= mid)
    {
        tempArray[k] = arr[i];
        k++, i++;
    }
    while (j <= end)
    {
        tempArray[k] = arr[j];
        k++, j++;
    }

    for (i = start; i <= end; i++)
    {
        arr[i] = tempArray[i];
    }
}

void MergeSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);

        MergeArray(arr, start, end);
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int a[] = {5, 4, 2, 10, -1, -2, -100, 16, 18};
    int size = sizeof(a) / sizeof(int);


    printArray(a, size);

    MergeSort(a, 0, size - 1);

    printArray(a, size);

    return 0;
}