#include<iostream.h>
#include<conio.h>
void main()
{
float a[12]={23.0,7.2,15.6,-8.0,7.2,13.3,-14.0,11.8,25.0,4.0},b[12]={14.5,7.2,-9.0,21.0,7.2,3.0,10.7,12.0,22.8,-26.0},t,sum[10],g,sg,s;
int ct,ch;float no; int loc,ub; char cha;
cout<<"a[12]= ";
for(int i=0;i<10;i++)
cout<<a[i]<<"\t";
cout<<endl;
cout<<"b[12]= ";
for(i=0;i<10;i++)
cout<<b[i]<<"\t";
cout<<"\nThe Sum of the array is as Follows : \n";
for(i=0;i<10;i++)
{sum[i]=a[i]+b[i];
 cout<<sum[i]<<'\t';}
while(1)
{cout<<"\n1.Sum and count of the no.s between 10 and 25\n2.Insertion\n3.Deletion\n4.Sorting\n5.Largest and second largest\n";
 cin>>ch;
 switch (ch)
 {case 1:s=0;
					 ct=0;
					 cout<<"The original array of the sum of the no.s is ";
					 for (i=0;i<10;i++)
			{if(sum[i]>10&&sum[i]<25)
				{s=s+sum[i];
				 ct++;
				 cout<<sum[i]<<'\t';
				 }

			}
			 cout<<"The sum of the no.s is "<<s<<endl;
			 cout<<"\nThe count of the no.s is "<<ct<<endl;
			 break;
  case 2:cout<<"Enter the no. which has to be inserted and its location\n";
			cin>>no>>loc;
			loc-=1;
			cout<<"\nOriginal array";
			for(i=0;i<10;i++)
			cout<<sum[i]<<'\t';
			for(i=9;i<=loc;i++)
			sum[i+1]=sum[i];
			sum[loc]=no;
			cout<<"\nThe new array is ";
			for(i=0;i<11;i++)
			cout<<sum[i]<<'\t';
			break;

	case 3:cout<<"Please enter the no. which is to be deleted";
			 cin>>no;
				 cout<<"\nOriginal Array is ";
			 for(i=0;i<11;i++)
			 cout<<sum[i]<<'\t';
			 ub=9;
			 for(i=0;i<ub;i++)
			 {if(sum[i]==no)
			  {if(no>0)
			  {for(int j=i;j<ub;j++)
				sum[j]=sum[j+1];
				ub--;}

				}
				}
			 cout<<"Changed array is ";
			 for(i=0;i<=ub;i++)
			 cout<<sum[i]<<'\t';
			 break;

	case 4:cout<<"The original array is ";
			 for(i=0;i<10;i++)
			 cout<<sum[i]<<'\t';
			 for(i=0;i<10;i++)
			 {for(int j=i+1;j<11;j++)
			 {if(sum[i]<sum[j])
			  {t=sum[i] ;
			  sum[i]=sum[j];
			  sum[j]=t;
			  }
			 }
			 }
			 cout<<"New array is ";
			 for(i=0;i<10;i++)
			 cout<<sum[i]<<'\t';
			 break;

	case 5:cout<<"Original array: ";
			for(i=0;i<10;i++)
			{cout<<sum[i]<<'\t';}
			cout<<"The greatest and second greatest are : ";
			g=sum[0];
			for(i=0;i<10;i++)
			{if(g<sum[i])
			 g=sum[i];  }
			sg=sum[5];
			for(i=0;i<10;i++)
			{if(sum[i]>sg&&sum[i]<g)
			 sg=sum[i];}
			 }
			 cout<<g<<' '<<sg<<endl;
 cout<<"Do you want to Continue";
 cin>>cha;
 if(cha=='y'||cha=='Y')
 continue;
 else if(cha=='N'||cha=='n')
 break;



 }

}


