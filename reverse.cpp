#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int i=2;
   \
  

    while (i<=n)
    {
        int count=1;
        int j=2;
        while(j<=n)
        {
            if(i%j==0)
            count++;

            j++;
        }
        if(count==2)
        cout<<i<<" Prime\n";
        else
        cout<<i<<" Not Prime\n";
        i++;
        
    }
    

    return 0;
}