#include<iostream>
using namespace std;

bool RateInMaze(char maze[][10], bool visited[][10], int sol[][10], int row, int col, int i, int j){
    //Base case //
    if(i==row-1 and j == col-1){
        sol[i][j] = 1;
        for (int k = 0; k < row; k++)
        {
            for (int l = 0; l < col; l++)
            {
                cout<<sol[k][l]<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return false;
        
        
    }

    sol[i][j] = 1;
    visited[i][j] = true;

    //Check right// 

    if(j+1<col and !visited[i][j+1] and maze[i][j+1]!='X'){
        bool CheckAllRight = RateInMaze(maze,visited,sol,row,col,i,j+1);
        if(CheckAllRight){
            return true;
        }
    }

    //Check down //

    if(i+1<row and !visited[i+1][j] and maze[i+1][j]!='X'){
        bool CheckAllDown = RateInMaze(maze,visited,sol,row,col,i+1,j);
        if(CheckAllDown){
            return true;
        }
    }

    //Check left //

    if(j-1>=0 and !visited[i][j-1] and maze[i][j-1]!='X'){
        bool CheckAllLeft = RateInMaze(maze,visited,sol,row,col,i,j-1);
        if(CheckAllLeft){
            return true;
        }
    }

    //Check top//

    if(i-1>=0 and !visited[i-1][j] and maze[i-1][j]!='X'){
        bool CheckallTop = RateInMaze(maze,visited,sol,row,col,i-1,j);
        if(CheckallTop){
            return true;
        }
    }

    sol[i][j] = 0;
    visited[i][j] = false;

    return false;


}
 
int main() 
{
    char maze[][10] = {
        "0000",
        "0XX0",
        "0X00",
        "X000"
    };

    bool visited[10][10] = {0};

    int sol[10][10] = {0};

    RateInMaze(maze,visited,sol,4,4,1,0);

     
    return 0;
}