

#include<iostream.h>
#include<iomanip.h>

int main()
{
	int i,j,c,k,l,n;
	char ch,w;
	do
	{
		
		cout<<"a) Enter 1 for Alphabet Pattern : \n"<<endl;
		cout<<"b) Enter 2 for Number Pattern : \n"<<endl;
		cout<<"Enter the choice: \n ";
		cin>>c;
		switch(c)
		{
			case 1:ch='D';
					cout<<"Enter the number of lines: \n ";
					cin>>n;
					for(i=1;i<=n;i++)
						{for(j=1;j<=i;j++)
							cout<<ch++<<"\t";
							cout<<endl;
						}
						break;
			case 2:for(i=4;i>=1;i--)
						{for(j=1;j<=i;j++)
							{cout<<j;}
							if(i<4)
							  {
									for(k=i+1;k<=7-i;k++)
										cout<<" ";
									for(l=i;l>=1;l--)
									{cout<<l;}
										cout<<"\n";
							 }
							else
								{for(l=i-1;l>=1;l--)
									{cout<<l;}
								cout<<"\n";}
						}
						break;
		}
		cout<<"Do you want to continue ? \n "<<endl;
		cout<<"If not please EXIT the program. \n "<<endl;
		cin>>w;
		}while(w=='y'||w=='Y');
	return 0;
}
