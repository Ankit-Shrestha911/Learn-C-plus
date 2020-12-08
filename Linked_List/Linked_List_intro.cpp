#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void InsertStartEnd(node* &head, node* &tail ,int d){
    if(head == NULL){
        node* n = new node(d);
        head = tail = n;
    }
    else
    {
        node* n = new node(d);
        tail->next = n;
        tail = n;
    }
    
}

void InsertStartLL(node* &head, node* &tail ,int d){
    if(head == NULL){
        node* n = new node(d);
        head = tail = n;
    }
    else
    {
        node* n = new node(d);
        n->next = head;
        head = n;
    }
    
}

void printLL(node* head){
    while(head){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    node* head = NULL,*tail = NULL;

    int n,data;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>data;
    //     InsertStartLL(head,tail,data);
    // }
   
    InsertStartEnd(head,tail,1);
   

    printLL(head);

   
  

    return 0;
}