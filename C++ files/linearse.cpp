#include<iostream.h>
#include<conio.h>
void main()
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
