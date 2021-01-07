#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;


void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }

    printf("Enter the data of node 1: ");
    cin>>head->data;
    head->next = NULL;


    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        cin>>newNode->data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

void Print()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
void Delete_List()
{
    if(head==NULL)
        return;
    int i,pos;
    cout<<"enter the node number to delete"<<endl;
    cin>>pos;
    struct node*temp=head,*temp2;

    if(pos==0)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for(i=0; i<pos-1; i++)
    {
        temp=temp->next;
        if(temp->next==NULL)
            break;
    }
    if(temp->next != NULL)
    {
        temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
    }
    else
        printf("Invalid position unable to delete.\n");
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter the total number of nodes: ");
        scanf("%d", &n);

        createList(n);

        printf("\nData in the list \n");
        Print();
        Delete_List();

        printf("\nData in the list \n");
        Print();
    }
    return 0;
}
