// SLL Notes by Rishabh Bafna

#include<iostream>
#include<climits>
#include<list>
#include<unordered_set>
using namespace std;

struct node
{
    int data;
    struct node *next;

    // Default Constructor
    node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterized Constructor
    node(int data_)
    {
        data = data_;
        next = NULL;
    }
};
typedef struct node node;
node *head = NULL;

void insertAtEnd(int element)
{
    node *temp = new node(element);
    if(head == NULL)
        head = temp;
    else
    {
        node *p = head;
        while(p -> next)
            p = p -> next;
        p -> next = temp;
        p = NULL;
    }
    temp = NULL;
}

void displaySLL()
{
    node *p = head;
    while(p)
    {
        cout<<p -> data<<" ";
        p = p -> next;
    }
    cout<<endl;
}

void insertAtBegin(int element)
{
    node *temp = new node(element);
    if(head == NULL)
        head = temp;
    else
    {
        temp -> next = head;
        head = temp;
    }
    temp = NULL;
}

int listLength()
{
    node *p = head;
    int count = 0;
    while(p)
    {
        count++;
        p = p -> next;
    }
    return count;
}

void insertAtPosition(int element, int position)
{
    int length = listLength();
    if(position < 0 || position > length)
    {
        cout<<"Invalid Position"<<endl;
        // exit(1); // Unsuccessful exit
    }
    else if(position == 0)
        insertAtBegin(element);
    else if(position == length)
        insertAtEnd(element);
    else
    {
        node *temp = new node(element);
        node *p = head;
        for(int i = 0 ;  i < (position - 1) ; i++)
            p = p -> next;
        temp -> next = p -> next;
        p -> next = temp;
        p = NULL;
    }
}

void deleteAtBeginSLL()
{
    if(head == NULL)
        cout<<"No node to delete \n";
    else
    {
        node *p = head;
        head = head -> next;
        free(p);
        p = NULL;
    }
}

void deleteAtEndSLL()
{
    if(head == NULL)
        cout<<"No node to delete \n";
    else if(head -> next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        node *p = head;
        while(p -> next -> next)
            p = p -> next;
        free(p -> next);
        p -> next = NULL;
    }
}

void deleteAtPositionSLL(int position)
{
    int length = listLength();
    if(position < 0 || position >= length)
    {
        cout<<"Invalid Position \n";
        return;
    }
    else if(position == 0)
        deleteAtBeginSLL();
    else if(position == length - 1)
        deleteAtEndSLL();
    else
    {
        node *p = head;
        for(int i = 0 ; i < (position - 1) ; i++)
            p = p -> next;
        node *q = p -> next;
        p -> next = q -> next;
        free(q);
        p = NULL;
        q = NULL;
    }
}

int sumSLL()
{
    node *p = head;
    int sum = 0;
    while(p)
    {
        sum = sum + (p -> data);
        p = p -> next;
    }
    return sum;
}

int maxElementSLL()
{
    if(head == NULL)
        return INT_MIN;
    else if(head -> next == NULL)
        return head -> data;
    else
    {
        node *p = head;
        int maximum = INT_MIN;
        while(p)
        {
            if(p -> data > maximum)
                maximum = p -> data;
            p = p -> next;
        }
        return maximum;
    }
}

int minElementSLL()
{
    if(head == NULL)
        return INT_MAX;
    else if(head -> next == NULL)
        return head -> data;
    else
    {
        node *p = head;
        int minimum = INT_MAX;
        while(p)
        {
            if(p -> data < minimum)
                minimum = p -> data;
            p = p -> next;
        }
        return minimum;
    }
}

void traverseSLLRecursive(node *head)
{
    if(head == NULL)
        return;
    else
    {
        cout<<head -> data<<" ";
        traverseSLLRecursive(head -> next);
    }
}

void reverseTraverseSLLRecursive(node *head)
{
    if(head == NULL)
        return;
    else
    {
        reverseTraverseSLLRecursive(head -> next);
        cout<<head -> data<<" ";   
    }
}

void alternativeNodesSLLRecursive(node *head)
{
    if(head == NULL)
        return;
    cout<<head -> data<<" ";
    if(head -> next == NULL)
        return;
    alternativeNodesSLLRecursive(head -> next -> next);
}

int middleElementUsingTwoPointers()
{
    if(head == NULL)
        return -1;
    else if(head -> next == NULL)
        return head -> data;
    else
    {
        node *slow = head, *fast = head;
        while(fast && fast -> next && fast -> next -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow -> data;
    }
}

int middleElementSLL()
{
    if(head == NULL)
        return -1;
    else if(head -> next == NULL)
        return head -> data;
    else
    {
        int length = listLength();
        int middle = length / 2;
        if(length % 2 == 0)
            middle--;
        node *p = head;
        for(int i = 0 ; i < middle ; i++)
            p = p -> next;
        return  p -> data;
    }
}

void reverseSLL()
{
    node *leftptr = NULL, *rightptr = NULL;
    while(head)
    {
        rightptr = head -> next;
        head -> next = leftptr;
        leftptr = head;
        head = rightptr;
    }
    head = leftptr;
}

    bool detectLoop(node* h)
{
    unordered_set<node*> s;
    while (h != NULL) {
        if (s.find(h) != s.end())
            return true;
        s.insert(h);
        h = h->next;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int element;
        cin>>element;
        insertAtEnd(element);
    }
    displaySLL();
    cout<<"Number of nodes in SLL = "<<listLength()<<endl;
    insertAtPosition(100, 2);
    displaySLL();
    insertAtPosition(200, 0);
    displaySLL();
    insertAtPosition(300, 7);
    displaySLL();
    insertAtPosition(400, -1);
    displaySLL();
    insertAtPosition(400, 50);
    displaySLL();
    deleteAtBeginSLL();
    displaySLL();
    deleteAtEndSLL();
    displaySLL();
    deleteAtPositionSLL(0);
    displaySLL();
    deleteAtPositionSLL(4);
    displaySLL();
    deleteAtPositionSLL(2);
    displaySLL();
    deleteAtPositionSLL(-50);
    displaySLL();
    deleteAtPositionSLL(50);
    displaySLL();
    cout<<"Sum of all elements of SLL = "<<sumSLL()<<endl;
    cout<<"Maximum element = "<<maxElementSLL()<<endl;
    cout<<"Minimum element = "<<minElementSLL()<<endl;
    traverseSLLRecursive(head);
    cout<<endl;
    reverseTraverseSLLRecursive(head);
    cout<<endl;
    alternativeNodesSLLRecursive(head);
    cout<<endl;
    cout<<"Middle element using 2 pointers approach = "<<middleElementUsingTwoPointers()<<endl;
    cout<<"Middle element = "<<middleElementSLL()<<endl;
    
    reverseSLL();
    displaySLL();
    
    node* p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head->next;

    cout<<detectLoop(head);
    return 0;
}


