#include<iostream>

using namespace std;


    if(i==size-1){
        return false;
    }

    int find = findIndex(arr+1,n,size-1);
    return true;
 
   
}







int main(){
    int arr[]  = {1,2,7,1,7,2,7};
    int size = sizeof(arr)/sizeof(int);
    int key = 7;


    if(findIndex(arr,key,size) == true){
        cout<<"exist";

    }
    else
    {
        cout<<"not";
    }
    




    return 0;
}