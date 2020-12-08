#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node* next;

    Node(){
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int key, int data){
        this->key = key;
        this->data = data;
    }
};

class SinglyLinkedList {
  public:
    Node * head;
 
  SinglyLinkedList() {
    head = NULL;
  }
  SinglyLinkedList(Node * n) {
    head = n;
  }


void appendNode(Node *n){
    if(head == NULL){
       head = n;
        
    }
    else{
        Node * ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

void print(){
    if(head == NULL){

    }
    else{
        Node * temp  = head;

        while(temp!=NULL){
            cout<<"("<<temp->key<<","<<temp->data<<") -->";
            temp = temp->next;
        }
    }
}
};
 
int main() 
{
    SinglyLinkedList s;
 
 Node* n1 = new Node();
 Node* n2 = new Node();
 n1->key = 1;
 n1->data = 10;
 s.appendNode(n1);
//  s.print();
  n1->key = 2;
 n1->data = 20;
 n1->next = NULL;
 s.appendNode(n1);
 s.print();

//    int option,key1,data1;
//    do
//    {
//        cout<<"1.appendNode()"<<endl;
//        cout<<"2.Print()"<<endl;
//        cout<<"3. Clear Screen"<<endl;

//        cin>>option;

//        Node* n1 = new Node();

//        switch (option)
//        {
//        case 0:
//            break;
//        case 1:
//           cout<<"Enter key and data\n";
//           cin>>key1;
//           cin>>data1;
//           n1->key = key1;
//           n1->data = data1;
//           s.appendNode(n1);
//           cout<<endl;
//           break;

//           case 2:
//           s.print();
//           cout<<endl;
//           break;

//           case 3:
//           system("cls");
//           break;
          

       
//        default:
//        cout<<"Plz enter valid number...";
          
//        }
       
//    } while (option!=0);
   
  
    

     
    return 0;
}