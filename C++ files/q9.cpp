#include<iostream.h>
#include<conio.H>
#include<stdio.h>
#include<math.H>
void main()
{int i,a[20];
int sum=0;
long int prod=1;
int f;
cout<<"enter the prices";
for(i=0;i<15;i++)
{cin>>a[i];
sum=sum+a[i];
prod=prod*(a[i]);
/*cout<<prod;
cout<<a[i];*/
f=f+a[i];

}
int avg=f/20;
cout<<sum<<endl;
cout<<prod<<endl;
cout<<avg<<endl;
}


