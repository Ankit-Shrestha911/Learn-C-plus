#include<iostream>
using namespace std;

void rotateArray(int *arr , int size, int rotate){
    int temp[rotate-1];
   for(int i=0; i<rotate; i++){
       temp[i] = arr[i];
   }

   int j = rotate;
   for(int i = 0; i<size-rotate; i++){
       arr[i]  = arr[j];
       j++;
   }

   int index = 0 ;
  
  for(int i=size-rotate; i<size; i++ ){
      arr[i] = temp[index];
      index++;
  }

  

  


}
 
int main() 
{
    int rotate;
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
   cin>>rotate;

    rotateArray(arr,size,rotate);

    
  for (int i = 0; i < size; i++)
  {
      cout<<arr[i]<<" ";
  }
  
     
    return 0;
}