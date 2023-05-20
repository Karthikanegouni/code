#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    
    node()
    {
        data =0;
        next=NULL;
    }
    
    node(int val){
        data =val;
        next =NULL;
    }
};
typedef struct node node;
node *head =NULL;


void insertatend(int ele){
    node *temp = new node(ele);
    if(head==NULL){
        head=temp;
    }
    else{
        node *p = head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    }
    
} 
