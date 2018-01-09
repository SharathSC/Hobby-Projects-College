#include<iostream.h>
#include<math.h>
#include<stdio.h>
void main()
{
int i,n,r,f,sum=0,c;
while (1)
{//cout<<"1.PERFECT NO.S \n2.

//Armstrong number
for(i=100;i<=60000;i++)
{
f=i;
while (i>100)
{
r=i%10;
i=i/10;
c+=1;
sum+=pow(r,3);
i++;
}
i=f;

}
if (sum==f)
cout<<f<<" is an armstrong no.";
else
cout<<f<<" is not an armstrong no.";
cout<<"The no. of armstrong no.s are "<<c;
break;
}
}

