#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int j,a[10],ct=0,t,ch,sum=0;char cho;int k=0;
cout<<"Please enter the array: \n";
{for(int i=0;i<10;i++)
cin>>a[i];
do
{cout<<"1.Shift all positive elements to the right and negative elements to the left\n2.Display all the prime no.s and thier count\n";
 cin>>ch;
 switch(ch)
 {case 1:
 for(i=0;i<10;i++)
		 {	if(a[i]>0)
			{ t=a[i];
			a[i]=a[k];

			 a[k]=t;
			} }
			for(i=0;i<10;i++)
			cout<<a[i]<<'\t';
			break;

  case 2:for( j=0;j<10;j++)
  { for(i=2,sum=0;i<a[j];i++)
	 {if (a[j]%i==0)
		sum+=1;
	 }
	 if(sum==0)
	 {cout<<a[j]<<"is a prime no.\n";
	 ct++;}
  }
  cout<<"\nthe no. of prime no.s are : "<<ct;
  }
  cout<<"Do you want to continue\n";
  cin>>cho;
}while(cho=='Y'||cho=='y');
}
}