#include<iostream>
using namespace std;

void print(int **arr, int N){
   for (int i = 0; i <N ; i++)  {
    for (int  j = 0; j < 5; j++)
    {
       cout<<arr[i][j]<<" ";
      
    }
    cout<<endl;
    

  }
}
 
int main() 
{
  int N;
  cin>>N; // Taking row from the user 
  int **p = new int*[N]; // Initializing the dynamic 2D array
  for (int i = 0; i < N; i++) //
  {
    p[i] = new int[5]; // There is taking column value inside the new int[column which is (5)]
  }
  
int x=1;
  for (int i = 0; i <N ; i++)  {
    for (int  j = 0; j < 5; j++)
    {
       p[i][j] = x;
       x++;
    }
    

  }
  print(p,N);

  
  
     
    return 0;
}