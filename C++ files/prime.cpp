#include<iostream.h>
#include<conio.h>
void main()
{int flag,count,y,num1,bi,dig,mult;
for (int num=10;num<=300;num++)
{y=2;
flag=0;
while(y<num)
{ if(num%y==0)
{flag=1;
break;
}
y++;
}
if(flag!=1)
{cout<<num<<'\t';
count+=1;
if(count%5==0)
cout<<"\n";
}
}
}

