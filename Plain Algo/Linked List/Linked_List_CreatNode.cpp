#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void print_List(struct node *n)
{
    while(n != NULL)
    {
        cout<< n->data<<endl;
        n = n-> next;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    cin>>head -> data;
    head -> next = second;

    cin>>second-> data;
    second-> next = third;

    cin>>third -> data;
    third -> next = NULL;

    print_List(head);

    return 0;
}
