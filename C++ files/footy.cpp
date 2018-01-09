#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct place
{char stadium[40];
char city[40];
char country[40];
};

struct club
{char name[40];
char captain[40];
int matches,goals; place pl;
};
char stad[40],cit[40],count[40];
int i,avggoals[5];
club clubworld[5];
void starrating();
void accept()
{for(i=0;i<5;i++)
{cout<<"Please enter the TEAM "<<i+1<<"\n";
gets(clubworld[i].name);
cout<<"Please enter the Captain of The TEAM\n";
gets(clubworld[i].captain);
cout<<"Please enter the Matches played by the TEAM\n";
cin>>clubworld[i].matches;
cout<<"Please enter the Goals scored by the team in those matches\n";
cin>>clubworld[i].goals;
cout<<"Please enter the Stadium of the TEAM\n";
gets(clubworld[i].pl.stadium);
cout<<"Please enter the City of the TEAM\n";
gets(clubworld[i].pl.city);
cout<<"Please enter the Country of the TEAM\n";
gets(clubworld[i].pl.country);
clrscr();
}
}

void goalspermatch()
{for(i=0;i<5;i++)
{cout<<"The no. of goals per match for the TEAM "<<i+1<<"is ";
avggoals[i]=(clubworld[i].goals/clubworld[i].matches);
cout<<avggoals[i];
starrating();
}
}

void places()
{cout<<"Please enter the stadium of the Team you want to search for\n";
gets(stad);
cout'\n';
cout<<"Please enter the city of the Team you want to search for\n";
gets(cit);
cout<<'\n';
cout<<"Please enter the country of the team\n";
gets(count);
cout'\n';
for(i=0;i<5;i++)
{if(strcmp(clubworld[i].pl.country,count)==0)
 {cout<<clubworld[i].pl.country<<endl;}
 if(strcmp(clubworld[i].pl.city,cit)==0)
 {cout<<clubworld[i].pl.city<<endl;}
 if (strcmp(clubworld[i].pl.stadium,stad)==0)
 {cout<<clubworld[i].pl.stadium<<endl;
 cout<<"The team you are talking about is "<<clubworld[i].name<<endl;}

}
}

void starrating()
{if(avggoals[i]>=5)
{cout<<"\nThe star rating of the team is 5\n";}
if(avggoals[i]>=4&&avggoals[i]<5)
{cout<<"\nThe star rating of the team is 4\n";}
if(avggoals[i]>=3&&avggoals[i]<4)
{cout<<"\nThe star rating of the team is 3\n";}
if(avggoals[i]>=2&&avggoals[i]<3)
{cout<<"\nThe star rating of the team is 2\n";}
if(avggoals[i]>=1&&avggoals[i]<2)
{cout<<"\nThe star rating of the team is 1\n";}
}

void main()
{accept();
goalspermatch();
places();
}

