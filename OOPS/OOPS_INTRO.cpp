#include<iostream>
using namespace std;

////////////////////////////////////////////////BLUEPRINT ////////////////////////////////////
class Car{
	public: // Access modifier // like: (public,private,default,)
	
	 string name;
	 string model;
       int price;

};
////////////////////////////////////////////////BLUEPRINT ////////////////////////////////////
 
int main() 
{
	Car A; // Creating car object name of A //
	A.name = "BMW"; // Assign the name //
	A.model = "X504";// the model //
	A.price = 1000; // the price //

	cout<<"Name: "<<A.name<<endl;
	cout<<"Model: "<<A.model<<endl;
	cout<<"Price: "<<A.price<<endl;
	 
	return 0;
}