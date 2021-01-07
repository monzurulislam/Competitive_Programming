#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node*next;
};
struct node*head;

void create_list(int n)
{
    struct node*temp,*newNode;
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
        cout<<"Unable to allocate memory."<<endl;
    cout<<"Enter the data of 1st node: ";
    cin>>head->data;
    head->next=NULL;

    temp = head;

    for(i=2; i<=n; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode==NULL)
        {
            cout<<"Unable to allocate memory."<<endl;
            break;
        }
        else
        {
            cout<<"Enter the data of 1st node"<<i<<": ";
            cin>>newNode->data;
            newNode->next=NULL;

            temp ->next=newNode;
            temp = temp->next;
        }
    }
    printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");

}

void print()
{
    struct node*temp;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty."<<endl;
        return;
    }
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void Insert_END(int data)
{
    struct node*newNode,*temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    cin>>newNode->data;
    newNode->next=NULL;

    temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    printf("DATA INSERTED SUCCESSFULLY\n");
}

int main()
{
    int n,data;
    cout<<"Enter the number of nodes."<<endl;
    cin>>n;
    create_list(n);
    printf("\nEnter data to insert at the end of the list: ");
    Insert_END(data);
    cout<<"Data in the list: "<<endl;
    print();
    return 0;
}
