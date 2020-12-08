#include<iostream>
using namespace std;
 
int main() 
{
    int a=2;
    int b=2;
    for ( a; b%a; a++)
    {
        cout<<a;
    }
    
    return 0;
}