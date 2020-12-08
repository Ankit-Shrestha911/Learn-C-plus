#include<iostream>
using namespace std;

void bubbleSort(int *arr,int i, int size){
    if(i==size-1){
        return;
    }
    for(int j=0; j<=size-2-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);

        }
        bubbleSort(arr,i+1,size);
    }

}
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main() 
{
    int a[] = {4,5,1,0,2};
    int n = sizeof(a)/sizeof(int);
    print(a,n);
    bubbleSort(a,0,n);
    print(a,n);

   
 
    return 0;
}