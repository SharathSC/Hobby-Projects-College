#include<iostream.h>
int m=0,i=2,j=3,k=1;
void func1(int x[])
{x[i]=++x[1];
x[j]=x[2]++;
x[m]=x[i++];
}

void main()
{int a[5]={5,10,15,20,25};
func1(a);
cout<<endl<<a[i]<<'\t'<<a[j]<<'\t'<<a[m];
}