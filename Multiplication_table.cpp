#include <iostream>

using namespace std;

int main()
{
    int number, i;
    cout << "Enter the number you want for multiplication table: ";
    cin >> number;
    for (i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i<<"\n";
    }

    return 0;
}