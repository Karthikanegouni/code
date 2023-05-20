#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data =val;
    }
};

void insert(node* &head,int val){
    node* p = new node(val);
    node* temp = head;
    p->prev=NULL;
    if(head==NULL){
        p->next=head;
        head=p;
        p->next=NULL;
        }
    else{
        p->next=head;
        head=p;
        }
}

void display(node* &head){
    node* t = head;
    cout<<"NULL";
    while(t!=NULL){
        cout<<"<--"<<t->data<<"-->";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insert(head,3);
    insert(head,45);
    insert(head,36);
    display(head);
    return 0;
}
