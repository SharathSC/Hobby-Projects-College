#include<iostream.h>
#include<conio.h>
void main()
{int num1,bi,dig,mult;
for (int num=12;num<=25;num++)
{
num1=num;
bi=0;
dig=0;
mult=1;
while (num>0)
{
dig=num%2;
num/=2;
bi+=dig*mult;
mult*=10;
}
cout<<bi<<'\t';
num=num1;
}
}
