//Neil Debjani Ghosh
//11 C
//Assignment 1 - Q5


#include<iostream.h>
#include<conio.h>
int main()
{
	int cc;
	char n[20];
	float charge,tax,total;
	char ch;
	do
	{
	total=tax=0;
	cout<<"			 Welcome to BSNL 'EZ-Bill' !!! \n"<<endl;
	cout<< "       			Happy 64th Independence Day !!! \n"<<endl;
	cout<<"a) Enter the name of the client: ";
	cin>>n;
	cout<<"\nb) Enter the number of call units: \n ";
	cin>>cc;
	if(cc>50)
		{if(cc>150)
				{if(cc>250)
						{if(cc>500)
							{charge=(2.50*100)+(3.00*100)+(3.50*250)+(4*(cc-500));
							tax=charge*0.02;
							total=150+tax+charge;
							}
						else
							{charge=(2.50*100)+(3.00*100)+(3.50*(cc-250));
							tax=charge*0.02;
							total=150+tax+charge;
							}
						}
				else
					{charge=(2.50*100)+ (3*(cc-150));
					  tax=charge*0.02;
					  total=150+tax+charge;
					}
				}
		else
			{charge=(2.50*(cc-50));
			tax=charge*0.02;
			total=150+tax+charge;
			}
		}
	else
		{charge=0;
		tax=0.02*charge;
		total=150;
		}
	cout<<"______________________________________________________________________\n";
	cout<<"**********************************************************************\n";
	cout<<"                                   BSNL                               \n";
	cout<<"______________________________________________________________________\n";
	cout<<"																							  \n";
	cout<<"Name: "<<n<<"                                     Date: 15 August 2011 \n";
	cout<<"																							  \n";
	cout<<"No of units :"<<cc<<"	Fixed charge = 150       Call charge: "<<charge<<	  '\n';
	cout<<"																							  \n";
	cout<<"Tax : "<<tax<<"                           Total Amount : "<<total<<'\n';
   cout<<"																							  \n";
	cout<<"______________________________________________________________________\n";

	cout<<"Do you want to continue ?";
	cin>>ch;
	}while(ch=='y'||ch=='Y');

	return 0;
}

