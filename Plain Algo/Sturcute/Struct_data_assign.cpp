#include<bits/stdc++.h>
using namespace std;

struct Person
{
    char name[50];
    float salary;
    int age;
};

int main()
{
    Person p[5];
    int i;
    for(i=0; i<5; i++)
    {
        cin>>p[i].name>>p[i].salary>>p[i].age;
    }
    for(i=0; i<5; i++)
    {
        cout<<p[i].name<<' '<<p[i].salary<<' '<<p[i].age;
        cout<<endl;
    }

}
