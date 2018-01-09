#include<IOSTREAM.H>
void main()
{
int i,a,b,c,choice;
char ch='D';
while (1)
{cout<<"Pattern 1 or Pattern 2\n";
cin>>choice;
switch (choice)
{
case 1:

for(i=0;i<4;i++)
{for(int j=0;j<=i;j++)
{cout<<ch;
 ch++;}
 cout<<'\n';
 }
 
 break;
}
}
}
