#include<iostream.h>
#include<iomanip.h>
void main()
{int t,c,p,a,r;
cout<<"enter the dimensions \n";
cin>>t>>c;
cout<<"enter your choice \n 1.Rectangle \n 2.Triangle\n 3.Circle";
cin>>p;
if(p==3)
{cout<<"enter only a single radius";
cin>>r;
}
switch (p)
{
case 1:
a=t*c;
cout<<a;
break;
case 2:
a=0.5*t*c;
cout<<a;
break;
case 3:
a=3.14257*r*r;
cout<< a;
break;
default:cout<<"give decently";
}
}
