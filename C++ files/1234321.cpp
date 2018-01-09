#include<iostream.h>
#include<conio.h>
void main()
{ int i,j,k,l,n;
cout<<"enter the limit for this code";
cin>>n;
for(i=4;i>=1;i--)
{
for(j=1;j<=i;j++)
cout<<j;
if(n==i)
{ for(l=(i-1);l>=1;l--)
cout<<l;
}
for(k=(2*(n-(i))-1);k>=1;k--)
{if(n-i!=2)
cout<<' ';
if(n!=i)
{for(l=i;l>=1;l--)
cout<<l;

}
 }
cout<<'\n';
}
}
