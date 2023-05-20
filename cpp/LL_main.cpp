#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};


void insert(node* &head,int val){
    node* p = new node(val);
    if(head==NULL){
        head=p;
    }
    else{
    node* temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;
    }
}

void display(node* &head){
    node* t = head;
    
    while(t!=NULL){
        cout<<"<--"<<t->data<<"-->";
        t=t->next;
    }
}

int main(){
    node* head=NULL;
    
    int n;
    cout<<"Enter no.of ele to be inserted: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter "<<i<<" element: ";
        cin>>ele;
        insert(head,ele);
    }
    
    
    display(head);
    return 0;
    
}
