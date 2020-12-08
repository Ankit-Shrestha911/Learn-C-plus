#include<iostream>
#include<cmath>
using namespace std;

bool kyaSafeHai(int mat[][9], int i, int j, int n,int number){
    // check row and column
    for (int k = 0; k < n ; k++)
    {
        if(mat[i][k] == number || mat[k][j] == number){
        return false;
        }
    }

    // check blocks //
    n = sqrt(n);
    int starti = (i/n)*n;
    int startj = (j/n)*n;
    for (int k = starti; i < starti+n; i++)
    {
        for (int l = startj; l < startj+n; l++)
        {
            if(mat[k][l] == number)
            return false;
        }
        
    }
    return true;
    
    
}

bool soduko(int mat[][9], int i, int j, int n){
    //Base case//
    if(i==n){
        for (int i = 0; i < n; i++)
        {
            for (int j= 0; j < n; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;

    }
    //Recursive case //
    if(j==n){
        return soduko(mat,i+1,0,n);
    }
    if(mat[i][j]!=0){
        return soduko(mat,i,j+1,n);

    }
    //Work for each cell//
    for (int number = 1; number <= n; number++)
    {
        if(kyaSafeHai(mat,i,j,n,number)){
            mat[i][j] = number;
            bool alldone = soduko(mat,i,j+1,n);
           if(alldone){
           return true;
           }
             
        mat[i][j] = 0;
        }
        

    }
    
    return false;
}
 
int main() 
{
    int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

        soduko(mat,0,0,9);
		
     
    return 0;
}