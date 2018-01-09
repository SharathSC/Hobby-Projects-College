#include<iostream.h>
#include<stdio.h>
#include<string.h>
void great();
void sort();
void display();
int a[11],s,t;
void main()
{display();}

void display()
{ sort();
cout<<"is the sorted array is\n";
great();
cout<<"is the greatest value in the array is\n";
}

void great()
{cout<<"Enter the given arrays\n";
for(int i=0;i<10;i++)
cin>>a[i];

cout<<"Lets find the greatest no.";
s=a[0];
for(i=0;i<10;i++)
{if(s>a[i])
{s==a[i];}
}
cout<<s<<'\t';
}

void sort()
{cout<<"Please enter the string\n";

for(int i=0;i<10;i++)
cin>>a[i];
cout<<"Lets start sorting\n ";

for(i=0;i<10;i++)
{if(a[i]>a[i+1])
{t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
cout<<"The array is: ";
for(i=0;i<10;i++)
cout<<a[i]<<'\t';
}
