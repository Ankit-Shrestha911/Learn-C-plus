#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{

    int ans = -1;
    int s = 0;
    int e = end - 1;

    if (s > e)
    {
        return ans;
    }

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 10, 13, 20, 22, 30, 35, 40, 70, 101};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    int ans = binarySearch(arr, 0, size, key);
    if (ans == -1)
    {
        cout << "Not exist";
    }
    else
    {
        cout << "Found at " << ans;
    }

    return 0;
}