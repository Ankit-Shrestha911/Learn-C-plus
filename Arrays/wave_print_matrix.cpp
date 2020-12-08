#include <iostream>
using namespace std;
int main()
{

    int n, m;
    int arr[100][100]; // 2-d array declaration //

    cout << "Enter row and column ";
    cin >> n >> m; // n for row and m for column //


    int i, j;
    int x = 1;
    for (i = 0; i <= n - 1; i++) // taking input of matrix //
    {
        for (j = 0; j < m; j++)
        {
            arr[i][j] = x; // direct taking input from x
            x++;
        }
    }
     for (i = 0; i <= n - 1; i++) // output of matrix code //
    {
        for (j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Wave logic start from here //
    
    for (i = 0; i < m; i++) // outer loop //

    {
        // Upper to lower when column is even
        if (i % 2 == 0) // i for column //
        {
            for (j = 0; j < n; j++) // n for row // (Inner loop)
            {
                cout << arr[j][i] << ", ";
            }
        }
    
    else
    {
        // Lower to upper when column is odd
        for (j = n-1; j >= 0; j--) //(Inner loop)
        {
            cout << arr[j][i] << ", ";
        }
    }

   
}

return 0;
}
