
#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
	int bi=0,mult=1,dig=0,num,n,ct=0,k,i,el=0;
	int ch,flag,j,b;
	float sum=0,result=0;
	char w;
	long h,n1,n2,rem,n3;
	while(1)
	{

		cout<<"a) Enter 1 for Armstrong numbers in the range of 100 - 6000 \n"<<endl;
		cout<<"b) Enter 2 for Prime numbers between 10 and 300 \n"<<endl;
		cout<<"c) Enter 3 for Perfect numbers between 5 and 150 \n"<<endl;
		cout<<"d) Enter 4 for Binary equivalents of all numbers between 12 and 25 \n"<<endl;
		cout<<" Enter choice "<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1: for(h=100;h<=60000;h++)
					{n1=n2=n3=h;
					rem=result=ct=0;
					while(n2>0)
				{
					rem=n2%10;
					ct++;
					n2/=10;
				}
				while(n1>0)
				{
					rem=n1%10;
					result=result+pow(rem,ct);
					n1/=10;
				}
				if(result==n3)
					cout<<result<<endl;
				}
				break;

		case 2:for(k=10;k<=300;k++)
				{
				n1=k;
				i=2;
				flag=0;
				while(i<k)
					{if(el==5)
						{cout<<endl;
						el=0;}
					if(k%i==0)
						{
						flag=1;
						break;}
						i++;
					}

				if(flag!=1)
					{cout<<n1<<'\t';
					el++;}
				}
				cout<<'\n';
				break;
		case 3:for(k=5;k<=150;k++)
				{
				n1=k;
				i=1;
				sum=0;
				while(i<k)
				{if(k%i==0)
					{sum+=i;}
					i++;
				}
				if(sum==n1)
					cout<<n1<<endl;
				}

				break;

	  case 4:
					for(k=13;k<25;k++)
					{
						bi=0;
						mult=1;
						dig=0;
						n1=k;
						while(k>0)
							{dig=k%2;
							bi+=dig*mult;
							mult*=10;
							k=k/2;
							}
						k=n1;
						cout<<k<<"="<<bi<<endl;
					}
					break;
	  }
	  cout<<"Do you want to continue ";
	  cin>>w;
	  if(w=='y'||w=='Y')
	  continue;
	  else if(w=='n'||w=='N')
     break;
	  }

}


