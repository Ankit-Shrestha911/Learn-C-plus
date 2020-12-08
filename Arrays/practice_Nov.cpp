#include<iostream>
using namespace std;
 
int main() 
{
     int n;
     cin>>n;
     int arr[n];

     for(int i=0; i<n; i++){
         cin>>arr[i];

     }

     int brr[2] = {0};

     for (int i = 0; i < n; i++)
     {
         brr[arr[i]]++;
     }

     for(int i=0; i<2; i++){
        int x = brr[i];
        for(int j=0; j<x; j++){
            cout<<i<<" ";
        }
     }
     
    return 0;
}