#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
float f=1.5,g=10,j;
int h=4;
g+=h>f?h:f=2;
j=(f++,(f=f*h,f));
cout<<g<<" "<<j<<endl;
}
