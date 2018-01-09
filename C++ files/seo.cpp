#include<iostream.h>
#include<conio.H>
void main()
{int n1,n2,n,sum1=0,sum2=0;
char ch;
cout<<"enter the limit\n";
cin>>n;
for(int i=0;i<n;i++)
{if(i%2==0)
{sum1=sum1+i;}
if(i%2!=0)
{sum2=sum2+i;}
}
cout<<"the sum of even no.s is"<<sum1<<endl;
cout<<"the sum of odd no.s is"<<sum2;
}
