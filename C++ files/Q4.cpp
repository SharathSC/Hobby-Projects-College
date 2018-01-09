//Neil Debjani Ghosh
//11 C
//Assignment 1 - Q4

#include<iostream.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
# define pi 3.14
int main()
{
	int i,j,c,n;
	float f,sum=0,sin=0,cos=0,tan,x,sum1,sum2;
	char w;
	sum1=0;
	sum2=1;
do
{

	cout<<"a) Enter 1 for Sin \n"<<endl;
	cout<<"b) Enter 2 for Cos \n"<<endl;
	cout<<"c) Enter 3 for Tan \n"<<endl;
	cout<<"Enter the choice: \n"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:cout<<"Enter the limit: ";
				cin>>n;
				cout<<"\nEnter the value of x: ";
				cin>>x;
				x=x*(pi/180.0);
				
				for(i=1;i<=n;i+=2)
					{f=1;
					for(j=1;j<=i;j++)
						f=f*j;
					if(i%4==3)
						sum-=(pow(x,i)/f);
					else
						sum+=(pow(x,i)/f);
					}
					cout<<"The value is "<<sum<<endl;
					break;
		case 2:sum=1;
				cout<<"Enter the limit: ";
				cin>>n;
				cout<<"Enter the value of x: ";
				cin>>x;
				x=x*(pi/180.0);
				for(i=2;i<=n;i+=2)
					{f=1;
					for(j=1;j<=i;j++)
						f=f*j;
					if(i%4==0)
						sum+=(pow(x,i)/f);
					else
						sum-=(pow(x,i)/f);
					}
					cout<<"The value is "<<sum<<endl;
					break;
		case 3:cout<<"Enter the limit: ";
				cin>>n;
				cout<<"Enter the value of x: ";
				cin>>x;
				x=x*(pi/180);
            	for(i=1;i<=n;i+=2)
					{f=1;
					for(j=1;j<=i;j++)
						f=f*j;
					if(i%4==3)
						sum1-=(pow(x,i)/f);
					else
						sum1+=(pow(x,i)/f);
					}

				for(i=2;i<=n;i+=2)
					{f=1;
					for(j=1;j<=i;j++)
						f=f*j;
					if(i%4==0)
						sum2+=(pow(x,i)/f);
					else
						sum2-=(pow(x,i)/f);
				}
				tan=(sum1/sum2);
				cout<<"The value is "<<tan<<endl;

		}
		cout<<"Do you want to continue ? \n";
		cin>>w;
 }while(w=='y'||w=='Y');


return 0;
}
