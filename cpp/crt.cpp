#include<iostream>
#include <stack>
using namespace std;


class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};


node* mergeLLandsort(node* &head1,node* &head2){        
        node* p = head1;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=head2;
    node* ptr =head1;
    
  node* cur =head1;
  node* index= NULL;
  int temp;
  while(cur!=NULL){
      index=cur->next;
      
      while(index!=NULL){
          if(cur->data>index->data){
              temp=cur->data;
              cur->data=index->data;
              index->data=temp;
          }
          index=index->next;
      }
      cur=cur->next;
  }
    return head1;
    
}

node* rem(node* &res){
    node* p = res;
    node* temp = res;
    while(p!=NULL && p->next!=NULL){
            temp = p->next;
        if(p->data==p->next->data){
            p->next=p->next->next;
            delete temp;
        }
        else{
            p=p->next;
            }
}
return res;
}
void insertatbeg(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
    
}
void insertatend(node* &head,int val){
    node* n=new node(val);
    n->next=NULL;
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* &head){
    node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL"<<endl;
}

int main(){
node* head1 =NULL;
node* head2 =NULL;
    insertatbeg(head1,1);
    insertatend(head1,2);
    insertatend(head1,10);
    insertatend(head1,12);
    
    insertatbeg(head2,1);
    insertatend(head2,5);
    insertatend(head2,9);
    insertatend(head2,10);
    
    cout<<"list 1: ";
    display(head1);
    
    cout<<"List 2: ";
    display(head2);

    node* res = mergeLLandsort(head1,head2);
    display(res);
    
    node* d = rem(res);
    display(d);
    return 0;


}
