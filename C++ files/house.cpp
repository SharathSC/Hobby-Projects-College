#include<iostream.h>
#include<math.h>
void main()
{int k;
double x,y;
cout<<"Lets find the income of your family\n";
cout<<"____________________________________\n";
cout<<"Please enter your choice\n" ;
cout<<"1.Home loan \n2.Food \n3.School fee \n4.Entertainment \n5.Clothes \n6.Savings \n";
cin>>k;
switch (k)
{
case 1:cout<<"Your choice is Home loan\n";
cout<<"Enter the amount of Home loan you have to pay \n";
cin>>y;
x==float(((10/3)*y));
cout<<"Your salary is "<<x;
break;
case 2:cout<<"your choice is Food \n";
cout<<"Enter the amount of money required for Food";
cin>>y;
x==(5*y);
cout<<"Your salary is "<<x;
break;
case 3:cout<<"Your choice is School Fees";
cout<<"Enter the amount you pay as the school fees";
cin>>y;
x==((10)*y);
cout<<"Your salary is "<<x;
break;
case 4:cout<<"Your choice is Entertainment";
cout<<"Enter the amount you pay for Entertainment";
cin>>y;
x==float(((100/7)*y));
cout<<"Your salary is "<<x;
break;
case 5:cout<<"Your choice is Clothes";
cout<<"Enter the amount you pay for Clothes";
cin>>y;
x==((10)*y);
cout<<"Your salry is "<<x;
break;
case 6:cout<<"Your choice is Savings";
cout<<"Enter the amount you save";
cin>>y;
x==float(((100/23)*y));
cout<<"Your salary is "<<x;
break;
}
}
