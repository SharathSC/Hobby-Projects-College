#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void change(int,int &,int);
int a=5;
void main()
{int b=6,c=8;
change(a,b,c);
cout<<a<<" "<<b<<" "<<b<<endl;
}

void change(int x,int &y,int z)
{a=x+10;
y/=2;
z=z+++z;
cout<<z<<endl;
}

