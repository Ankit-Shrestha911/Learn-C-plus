#include <iostream>
using namespace std;

int main()
{
    string txt = "i am the worl liiekj skjdksj asdjks j sakjdksjf sfjskf jks j ank ankit jsksj ksjdksjf";
    string sch;
    cin >> sch;
    int count = 0;
    int arr[sch.length()];

    int len = txt.length();

    for (int i = 0; i < len - 1; i++)
    {

        int k = i;
        count = 0;

        for (int j = 0; j < sch.length(); j++)
        {
            if (sch[j] == txt[k])
            {
                arr[j] = k + 1;

                count++;
                k++;
            }
            else
            {
                arr[j] = 0;
                break;
            }
        }

        if (count == sch.length())
            break;
    }
    if (count == sch.length())
    {
        for (int i = 0; i < count; i++)
        {
            cout << "Founding at index " << arr[i] << endl;
        }
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}