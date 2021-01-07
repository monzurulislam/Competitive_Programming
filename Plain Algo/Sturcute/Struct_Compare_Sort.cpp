#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int math;
    int phy;
    int che;
    int total;
    int rank;
};

struct student ara[500];

bool Compare_TwoStudent(student a, student b)
{
    if(a.total != b.total)
        return a.total>b.total;

    if(a.math != b.math)
        return a.math>b.math;

    return(a.phy>b.phy);
}
void Bubble_Sort(int n)
{
    int i,j,temp=0;
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(ara[j].student > ara[j+1].student)
            {
                temp=student[j].ara;
                student[j].ara=student[j+1].ara;
                student[j+1].ara=temp;
            }
        }
    }
}
void Compute_Rank(student ara[],int n)
{
    for(int i=0; i<n; i++)
        ara[i].total = ara[i].math + ara[i].phy + ara[i].che;

    Bubble_Sort(n,Compare_TwoStudent);

    for(int i=0; i<n; i++)
        ara[i].rank = i+1;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>ara[i].name>>ara[i].math>>ara[i].phy>>ara[i].che;

    Compute_Rank(ara,n);

    cout << "Rank" <<"  " << "Name" << " ";
    cout << "Maths" <<"  " <<"Physics" <<"  "
         << "Chemistry";
    cout << "   " << "Total"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << ara[i].rank << "   ";
        cout << ara[i].name << "   ";
        cout << ara[i].math << "   "
             << ara[i].phy << "   "
             << ara[i].che << "   ";
        cout << ara[i].total <<"   ";
        cout <<endl;
    }
    /*5
Kevin 95 85 99
Nick 95 85 80
Bryan 80 95 85
Howie 80 80 80
Aj 80 70 90*/

    return 0;

}
