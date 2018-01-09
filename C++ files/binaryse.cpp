#include<iostream.h>
#include<conio.h>
void main()
{int a[]={1,9,10,39,44,45,113,140,167};
int lb,ub,mid,i,loc,flag,search,n;
lb=0;ub=8;
cout<<"input search value";
cin>>search;
cout<<"contents of an array";
for(i=0;i<9;i++)
cout<<a[i]<<'\t';
flag=0;
while((lb<=ub)&&!flag)
{
mid=(lb+ub)/2;
if(search<a[mid])
ub=mid-1;
else if (search>a[mid])
lb=mid+1;
else
{flag=1;
 loc=mid;
 }
 if (flag)
 cout<<search<<"found at location"<<loc<<"\t"<<endl;
 else
 cout<<"not found";
 }
 ub=n-1;
 for(i=0;i<=ub-1;i++)
 {for(int j=i+1);j<=ub;j++)
 {if (p[i]>p[j])
  {t=p[i];
  p[i]=p[j];
  p[j]=t;
  }
  }
 }
