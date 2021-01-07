 #include<bits/stdc++.h>
 using namespace std;

 struct player
 {
     string name;
     int attack;
     int defender;

 };
 bool compare(player a, player b)
 {
     if(a.attack > b.attack)
        return 1;
    else if(a.defender==b.defender && a.defender<b.defender)
        return 1;
    else if(a.defender==b.defender && a.defender<b.defender && a.name < b.name)
        return 1;
    else
        return 0;
 }
 bool compare_name(player a,player b)
 {
     return a.name < b.name;
 }

 int main()
 {
     int t,n,i;
     player ara[10];
     cin>>t;
     while(t--)
     {
         for(i=0; i<10; i++)
             cin>>ara[i].name>>ara[i].attack>>ara[i].defender;
        sort(ara,ara+10,compare);
        sort(ara,ara+5,compare_name);
        sort(ara+5,ara+10,compare_name);


        for(i=0; i<5; i++)
            cout<<ara[i].name<<' '<<ara[i].attack<<' '<<ara[i].defender<<' ';
        cout<<endl;

     }

     return 0;
 }
