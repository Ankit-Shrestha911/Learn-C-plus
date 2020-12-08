#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fac(n - 1));
    }
}

int length(char s[])
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
void permutchecker(int a, int b)
{
    if (a == b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()

{
    char s[100], s2[100];
    int compare1, compare2;

    cin.getline(s, 100);
    cin.getline(s2, 100);

    int result = fac(length(s));
    int result2 = fac(length(s2));

    permutchecker(result, result2);

    return 0;
}