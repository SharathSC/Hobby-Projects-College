#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{char ch[25],c[25];
cout<<"please enter the 2 strings";
cin>>ch>>c;
int d=strlen(ch);
int e=strlen(c);
if(d>e)
{cout<<strcat(ch,c);}
else
{cout<<strcat(c,ch);}
}