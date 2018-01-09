#include<iostream.h>
void main()
{long int a,comm;
cout<<"enter the sales of the shop\n";
cin>>a;
if(a>=30001)
{cout<<"the commision rate is 15 %\n";
comm=(0.15*a);
cout<<comm;
a=a+comm;
cout<<"therefore the total sales is\n"<<a;

}
if((a<30000)&&(a>=22001));
{cout<<"the commision is 10%\n";
comm=(0.1*a);
cout<<comm;
a+=comm;
cout<<"therefore the total sales is \n"<<a;

}
if(a<22000&&a<=120001)
{cout<<"the commision is 7%\n";
comm=(0.07*a) ;
cout<<comm;
a+=comm;
cout<<"therefore the total sales is\n"<<a;

}
if((a>=5001)&&(a<12001))
{cout<<"the commision is 3%\n";
comm=(0.03*a);
cout<<comm;
a+=comm;
cout<<"therfore the total sales is\n"<<a;

}
if(a>=0&&a<5000)
{cout<<"the commision is 0%\n";
comm=a*0;
cout<<comm;
a+=comm;
cout<<"therefore the total sales is\n"<<a;

}
}




