#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	// insert(arr, n);
	// n++;

	int number;
	do
	{
		cout << "\n\n1.For Inserion\n2.For Deletion\n3.For Print the Array\n4.For clear screen\n";
		cin >> number;

		switch (number)
		{
		case 1:
			int pos, num;
			cout << "Enter the number you want to insert: " << endl;
			cin >> num;
			cout << "Enter the position" << endl;
			cin >> pos;
			for (int i = n - 1; i >= pos; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[pos] = num;
			n++;

			break;
		case 2:
			int pos1;
			cout << "Enter the position from which the number has to be deleted\n";
			cin >> pos1;
			for (int i = pos1; i < n - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			n--;
			break;

		case 3:
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		case 4:
			system("cls");
			break;

		default:
			break;
		}

	} while (number != 0);

	return 0;
}