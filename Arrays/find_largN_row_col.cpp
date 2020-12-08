#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the rows: ";
    cin>>row;
       cout<<"Enter the column: ";
    cin>>col;
    int arr[row][col];
    int x=1;

    // Input area //
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = x;
            x++;
        }
        
    }

    // Output area //

       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    // row part //
int maxrow = 0;
int r;
       for (int i = 0; i < row; i++)
    {
        int rowsum=0;
        for (int j = 0; j < col; j++)
        {
            rowsum+=arr[i][j];
            if(rowsum>maxrow){
                maxrow = rowsum;
                r = i; // Storing the greater row index //
            }
          
          
        }
        
        
    }

    // column part //
    int maxcol = 0;
    
    int c;

          for (int i = 0; i < col; i++)
    {
        int colsum=0;
        for (int j = 0; j < row; j++)
        {
            colsum+=arr[j][i];
            if(colsum>maxcol){
                maxcol = colsum;
                c = i; // Storing the greater column index //
            }
          
          
        }
        
        
    }

    // Comparing row sum value and col sum value which one is greater //

    if(maxrow>maxcol){
        cout<<"Row : "<<r;
    }
    else
    cout<<"Col: "<<c;
    
    


    return 0;
}