#include<iostream.h>
void main()
{char c;
int a,b;
cout<<"enter the two numbers to be considered";
cin>>a>>b;
cout<<"Enter the operation which needs to be performed";
cin>>c;
switch (c)
{case '+':
cout<<a+b;
break;
case '-':
cout<<a-b;
break;
case '*':
cout<<a*b;
break;
case '/':
cout<<a/b;
break;
default:cout <<"enter decently";
}
}
