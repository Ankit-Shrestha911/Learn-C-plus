#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


// we shuffle the already sorted array because if we dont use randomize shuffle it take O(n2) instead of O(nlogn) //

// void shuffle(int *arr, int s, int e){    // It is use for optimize the quicksort array //
//     int i,j;
    
//         srand(time(NULL));
//     for ( i = e; i>0; i--)
//     {
//         j = rand()%(i+1);
//         swap(arr[i],arr[j]);
//     }
    
    
// }

int partition(int *arr, int s, int e)
{

    int pivot = arr[e];
    int i = s - 1; // Assume the low value //

    int j = s;  

    for (; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);  // swap if the value of arr[j] is less than and equal to  pivot value //
        }
    }

    swap(arr[e], arr[i + 1]); // After the loop swapping pivot value with i+1 // 

    return i + 1; // return the index
}

void quickSort(int *arr, int s, int e) // int s = starting point , int e = ending point //
{

    if (s <= e)
    {

        int p = partition(arr, s, e); // It give the next index after pivot //
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(int);

//     shuffle(arr,0,size-1);   // Calling the Shuffle function //
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

// cout<<endl;

    quickSort(arr, 0, size - 1); // calling quickSort function //

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}