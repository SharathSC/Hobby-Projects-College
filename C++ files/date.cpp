#include<iostream.h>
#include<conio.h>
void main()
{int d,m,y;
int flag=0;
cout<<"enter the date in the dd mm yyyy format";
cin>>d>>m>>y;
if((y>0)&&(m<12)&&(d<=31))
{
	if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
	{
		flag=1;
	 }
	else if ((m==4)||(m==6)||(m==9)||(m==11))
	{
		flag=1;
	 }
	else if((m==2)&&(y%4==0))
	{
		flag=1;

	 }
	 else if((m==2)&&(y%4!=0))
	 {
	 flag=1;
	  }

}
else
flag=0;

if(flag==1)
{
 cout<<"this is a valid date";
 }
 else
 cout<<"it is an invalid date";
 }
