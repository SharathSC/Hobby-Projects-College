#include<iostream.h>
#include<conio.h>
#include<math.h>
#define pi 3.1415
void main()
{int n,i,j,c=1;
double x,t,sum=0.0,y;
long fact;
cout<<"input x,n \n";
cin>>x>>n;
y=x*(pi/180);
cout<<"cosine value of "<<x<< " is"<<sin(y);
for(i=1;i<=n;i+=2)
{
fact=1;
for(j=1;j<=i;j++)
fact*=j;
t=pow(y,i)/fact;
if(c%2==0)
sum-=t;
else
sum+=t;
c++;
}
cout<<"\n cos value from code is:\n"<<sum;
}