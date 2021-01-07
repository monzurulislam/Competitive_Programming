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

void Node_Insertion(int n)
{
    int i,pos,data;
    struct node*newNode,*temp,*temp2;
    cout<<"Enter the position to insert a node"<<endl;
    cin>>pos;

    if(pos<1 || pos>n)
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    else if(pos>=1 && pos<=n)
    {
        if(pos==1)
        {
            newNode = (struct node*)malloc(sizeof(struct node));
            cout<<"Enter the data of new node"<<endl;
            cin>>newNode->data;
            newNode->next=head;
            head = newNode;

            cout<<"Data enter successfully."<<endl;
            return;
        }
        else
        {
            newNode = (struct node*)malloc(sizeof(struct node));
            cout<<"Enter the data of new node"<<endl;
            cin>>newNode->data;
            newNode->next=NULL;

            temp = head;
            for(i=2; i<=pos; i++)
            {
                temp = temp->next;
                if(temp==NULL)
                    break;
            }
            if(temp!=NULL)
            {
                newNode->next=temp->next;
                temp->next=newNode;
                cout<<"Node inserted successfully."<<endl;
            }
            else
            {
                cout<<"Invalid Position"<<endl;
            }
        }
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
    Node_Insertion(n);
    print();
    return 0;
}

