#include <iostream>
#include<cstring>
using namespace std;

void towerOfHonia(int n,char source,char helper,char destination){
    // Base case //
    if(n==0){
        return; // when n == 0 the process will be stop and it return nothing it just stop the process //
    }
    // Recursive case //
     towerOfHonia(n-1,source,destination,helper); //Manually put the n disk from source to destination // 
    cout<<"Taking disk "<<n<<" from "<<source<<" to "<<destination<<endl; // Print the result //
    towerOfHonia(n-1,helper,source,destination); // Remaining will be done by recursion //
}




int main()
{
int n; 
cin>>n; // Input the Disk you want  ///
towerOfHonia(n,'A','B','C'); // Calling the function // inside passing argument //

   

    return 0;
}