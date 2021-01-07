#include<bits/stdc++.h>
using namespace std;

struct student
{
    char name[50];
    int id;
    int marks;
    char grade;
};

int main()
{
    struct student num[3];
    int i,n=3;
    for(i=0; i<n; i++)
    {
        scanf("%s %d %d",&num[i].name,&num[i].id,&num[i].marks);
    }
    for(i=0; i<n; i++)
    {
        if(num[i].marks>=80)
            num[i].grade = 'A';

        else if(num[i].marks>=75 && num[i].grade<80)
            num[i].grade = 'B';

        else if(num[i].marks>=70 && num[i].grade<75)
            num[i].grade = 'C';

        else if(num[i].marks>=65 && num[i].grade<70)
            num[i].grade = 'D';

        else if(num[i].marks>=60 && num[i].grade<65)
            num[i].grade = 'E';

        else if(num[i].grade<60)
            num[i].grade = 'F';
    }
    for(i=0; i<n; i++)
    {
        printf("%s %d %d %c\n",num[i].name,num[i].id,num[i].marks,num[i].grade);
    }
    return 0;

}
