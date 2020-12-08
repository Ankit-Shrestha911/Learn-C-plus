#include <iostream>

using namespace std;

int main()
{
    int n, t1 = -1, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
    
        nextTerm = t1 + t2;
        cout<<nextTerm<<" ";
        t1 = t2;
        t2 = nextTerm;

       
    }

    return 0;
}