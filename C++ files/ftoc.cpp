 #include<iostream.h>
#include<iomanip.h>
void main()
{int t,c,p;
cout<<"enter the temperature you want to convert \n";
cin>>t;
cout<<"enter your choice \n 1.C to F \n 2.F to C\n";
cin>>c;
switch (c)
{
case 1:
p=((5/9)*t)+32;
cout<<p;
break;
case 2:
p=((9/5)*t)-32;
cout<<p;
break;
default:cout<<"give decently";
}
}