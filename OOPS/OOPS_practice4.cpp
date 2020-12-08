#include<iostream>
using namespace std;

class Car{
    private:
    int a,b,c;
    public:
    void setData(int a, int b, int c);
    void getData();
       

};
 void Car::setData(int a, int b, int c){
    this->a= a;
    this->b= b;
    this->c= c;

 }

 void Car::getData(){
     cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;
 }

int main() 
{

     Car c;
     
     c.setData(1,2,3);
     c.getData();
    return 0;
}