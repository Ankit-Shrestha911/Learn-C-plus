// BubbleSorts
#include <iostream>
using namespace std;

int length(char s[])
{
    int i = 0;
    int count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}



int main(){
    int n;
    char ch[100],lar[100];
    cin>>n;
    cin.ignore();
  
    int max=0;
    
    for(int i=0; i<n; i++){
        cin.getline(ch,100);
        int len = length(ch);
              if(len>max){
              max = len;
              
              int l = length(ch);
              for(int j=0; j<=l; j++){
                  lar[j] = ch[j];
              }
 }
 

           
              
              
    }
    cout<<lar;

	 


	return 0;
}