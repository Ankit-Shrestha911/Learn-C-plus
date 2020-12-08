#include <iostream>
using namespace std;

int main()
{
	int row, col, i, j;
	cin >> row >> col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (i = 0; i < row; i++)
	{
		if (i % 2 != = 0)
		{

			for (j = col-1; j >=0; j--)
			{
				cout<<arr[i][j]<<", ";
			}
		}
		else
		{

			for (j = 0; j < col; j++)
			{
				cout<<arr[i][j]<<", ";
			}
		}
	}
	cout<<"END";
	return 0;
}