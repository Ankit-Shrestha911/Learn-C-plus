#include<iostream>
using namespace std;

void multply(int n,int i){
   
    if(i>10){
        return;
    }
    cout<<n*i<<endl;
    multply(n,i+1);
}
 
int main() 
{
    int n;
    cin>>n;
    cout<<endl;
    cout<<"Table: \n";
    multply(n,1);
   
 
    return 0;
}