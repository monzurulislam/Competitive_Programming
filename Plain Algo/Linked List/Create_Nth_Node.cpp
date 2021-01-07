#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create_list(int n)
{
    struct node *newNode,*temp;
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"Unable to allocate memory."<<endl;
        return;
    }
    cout<<"Enter the data of 1st node: "<<endl;
    cin>>head -> data;
    head -> next = NULL;

    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            cout<<"Unable to allocate memory."<<endl;
            break;
        }
        cout<<"Enter the data of: "<<i<<endl;
        cin>>newNode -> data;
        newNode -> next = NULL;

        temp -> next = newNode;
        temp = temp -> next;
    }

}

void print()
{
    struct node *temp;
    if(head == NULL)
    {
        cout<<"List is empty."<<endl;
        return;
    }
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp -> next;
    }
}


int main()
{
    int n;
    cout<<"Enter the number of nodes."<<endl;
    cin>>n;
    create_list(n);
    cout<<"Data in the list: "<<endl;
    print();
    return 0;
}

