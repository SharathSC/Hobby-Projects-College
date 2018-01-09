#include<iostream.h>
#include<stdio.h>
#include<string.h>
int choice();
void lin()
{int a[100];
int loc,found=0,n,v,i,ub;
long int j;
cout<<"Input the no.of values\n";
cin>>n;
cout<<"input"<<n<<"integer values\n";

for (i=0;i<n;i++)
{
cout<<"Enter the Number to be Searched\n";
cin>>a[i];
cout<<"Value to be searched\n";
cin>>v;
ub=n-1;
for(i=0;i<=ub;i++)
if(v=a[i])
{found =1;
loc=i;
}
 if(found)
{cout<<"The no. is at position "<<loc<<endl;}
 else
{cout<<"No. not found";}
}
}

void tokenise()
{char w[10][20],s[40];
int i,j,k=0,c=0;
gets(s);
for(i=0;i<strlen(s);i++)
{
if(s[i]!=' ')
{
 w[c][k]=s[i];
 k++;
}
else
{w[c][k]='\0';
c++;
k=0;
}
}
w[c][k]='\0';
for(i=0;i<=c;i++)
cout<<w[i]<<endl;
}

void main()
{
cout<<"Please enter your choice:\n";
cout<<"1.Linear Search\n2.Tokenise\n";
cin>>choice;
switch(choice)
{case 1:lin();
		  break;
 case 2:tokenise();
		  break;
}
}		  	
