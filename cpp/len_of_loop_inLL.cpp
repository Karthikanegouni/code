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

int countNodes(node* n)
{
    int res = 1;
    node* temp = n;
    while (temp->next != n) {
        res++;
        temp = temp->next;
    }
    return res;
}
 

int countNodesinLoop(node* head)
{
    node* slow = head;
    node* fast = head;
 
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return countNodes(slow);
    }

    return 0;
}

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
    
    node* p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head->next;
    cout<<"Len of the cycle-->"<<countNodesinLoop(head)<<endl;
    return 0;
}
