#include<iostream>
using namespace std;
 
int main() 
{
	
	int row, col;
	cin>>row>>col;
	////////////////////////// Dynamic 2-D array memory allocation //////////////////////////////////
	 int **p = new int*[row]; // Initailize the 2-d array and assign the row //
	 for (int i = 0; i < row; i++)
	 {
		 p[i] = new int[col]; // Creating column 
	 }
////////////////////////// Dynamic 2-D array memory allocation //////////////////////////////////
int number =1;
	 for (int i = 0; i < row; i++)
	 {
		 for (int j = 0; j < col; j++)
		 {
			 p[i][j] = number++;
		 }
		 
	 }

	  for (int i = 0; i < row; i++)
	 {
		 for (int j = 0; j < col; j++)
		 {
			 cout<<p[i][j]<<" ";
		 }
		 cout<<endl;
	 }

	 ////////////////////// Deleting the 2-D array memory ////////////////////////////////////////////////////



	 for (int i = 0; i < row; i++)// After use of memory it is important to free the memory, if we not free the memory, it's a waste of memory //
	 {
		 delete[] p[i]; // Deleting the all column first //
	 }
// then //
	 delete[] p; // Deleting the row

	 p = NULL; // Then assign the pointer to the NULL, if its not done, the pointer point to the garbage value, that's wrong //

	 	 ////////////////////// Deleting the 2-D array memory ////////////////////////////////////////////////////


	 
	 
	 
	return 0;
}