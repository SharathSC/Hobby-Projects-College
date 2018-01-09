//Neil Debjani Ghosh
//11 C
//Assignment 1 - Q1

#include<iostream.h>
int main()
{
	int n,i,sum=0;
	cout<<"Enter the number of days after which fee is paid: \n";
	cin>>n;
	if(n>6)
		{sum+=6*12;
			if(n>15)
				sum+=(9*15)+((n-15)*20);
			else
				sum+=((n-6)*15);
		}
	else
		sum+=n*12;
	cout<<"The fine for returning the book "<<n<<" days late is Rs."<<sum<<".";
	return 0;
}
