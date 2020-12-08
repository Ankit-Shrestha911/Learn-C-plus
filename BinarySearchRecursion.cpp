#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int key){
    int mid = (s+e)/2;
    if(s>e){
        return -1;
    }
    
    if(arr[mid] == key){
        return mid;
    }
   else if(key < arr[mid]){
        return binarySearch(arr,s,mid-1,key);
    }
    else
    {
        return binarySearch(arr,mid+1,e,key);
    }
   
}
 
int main() 
{
    int a[] = {1,3,5,7,9,19,20,30,34,50,60};
    int n = sizeof(a)/sizeof(int);
    int key; 
    cin>>key;
    cout<<binarySearch(a,0,n,key);
  
 
    return 0;
}