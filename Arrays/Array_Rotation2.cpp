#include<iostream>
using namespace std;

void RotateOneByOne(int *arr, int size){
    int temp = arr[0],i;
    

    for(i=0; i<size-1; i++){
        arr[i] = arr[i+1];


    }
  arr[i] = temp;

}

void leftrotate(int *arr, int size, int rotate){
    for(int i=0; i<rotate; i++){
        RotateOneByOne(arr,size);
    }
}
 
int main() 
{
    int rotate;
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    cin>>rotate;

    leftrotate(arr,size,rotate);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
     
    return 0;
}