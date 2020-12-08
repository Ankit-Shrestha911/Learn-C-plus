#include<iostream>
using namespace std;

int main(){

   int x=0,y=0;
   char ch = cin.get();
   while(ch!='\n'){
       if(ch=='N')
       y++;
       else if(ch=='S')
       y--;
       else if(ch=='W')
       x--;
       else
       x++;

       ch = cin.get();
   }

       if(x>=0 && y>=0){
           for(int i=1; i<=x; i++){
               cout<<"E";
           }
           
           for(int i=1; i<=y; i++){
               cout<<"N";
    
           }
       }
       else if(x<=0 && y>=0){
           x*=-1;
           for (int  i = 1; i <=y; i++)
           {
               cout<<"N";
           }
           for (int  i = 1; i <= x; i++)
           {
               cout<<"W";
               
           }
           
           

       }
       else if(x<=0 && y<=0){
           x*=-1;
           y*=-1;
             for(int i=1; i<=y; i++){
               cout<<"S";
           }
           
           for(int i=1; i<=x; i++){
               cout<<"W";
    
           }

       }
       else
       {
           y*=-1;
             for (int  i = 1; i <=x; i++)
           {
               cout<<"E";
           }
           for (int  i = 1; i <= y; i++)
           {
               cout<<"S";
               
           }
           
       }
       

   



    return 0;

}
