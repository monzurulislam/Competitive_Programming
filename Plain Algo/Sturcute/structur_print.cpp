#include<bits/stdc++.h>
using namespace std;

struct nametype
{
    char first[20];
    char last[20];
};

struct student_list
{
    int id;
    struct nametype name;
};

int main()
{
    struct student_list student[5];
    int i,n = 5;
    for(i=0; i<n; i++)
    {
        scanf("%d %s %s",&student[i].id,student[i].name.first,student[i].name.last);
    }
    for(i=0;i<n;i++)
    {
        cout<<student[i].id<<' '<<student[i].name.first<<' '<<student[i].name.last<<endl;

    }
    return 0;
}
