#include<iostream>
#include<cstring>

using namespace std;

    // Difference btw deep and shallow copy is when the change the value in another obj its not reflect in original value.
	// In shallow copy if we change another obj value its reflect in orginal value. //bcz both obj variable assign to the same address.

class Car{

	private:
	char *name;
	public:
	Car(){
		name = NULL;
	}

	Car(char *s){

		name = new char[strlen(s)+1];
		strcpy(name,s);
	}

	// Car(Car &X){                             /// User defined copy contructot called a deep copy if we cut user defined copy -
	// 	name = new char[strlen(X.name)+1];   // contructor class is used default copy contructor which is called shallow copy //
	// 	strcpy(name,X.name); 
	// }

	void Change(char *n){
		if(name!=NULL){
			delete[] name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	void print(){
		cout<<name<<endl;
	}

};

// Default copy contructor called shallow copy //
 
int main() 
{
	Car A("Ankit");
	Car B = A;
	A.print(); // print ankit
	B.print(); // print ankit

	B.Change("Hello");
	A.print(); // print hello
	B.print(); // print hello

	 
	return 0;
}