#include <iostream>
#include <list>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next= NULL;
    }
};


void insertatend(node* &head,int val){
    node* n=new node(val);
    n->next=NULL;
    
    if(head==NULL){
        head=n;
    }
    else{
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    }
}

void rev_three()
int main()
{
    node* head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        insertatend(head,v);
    }

    return 0;
}
