#include<math.h>
#include<iostream.H>
void main()
{char ch[50][50];int m[50];int i=0;
int n;char k;
while(1)
{
cout<<"enter the name of the student"<<endl;
cin>>ch[i];
cout<<"enter the marks of the student"<<endl;
cin>>m[i];
i++;
cout<<"enter the choice";
cin>>k;
if(k=='y')
continue;
else if(k=='n')
break;
}

for (int j=0;j<i;j++)
{cout<<ch[j]<<endl;
cout<<m[j]<<endl;}
 }
 

