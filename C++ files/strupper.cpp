#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{char ch[25],mn[25];

cout<<"Please enter the string";
cin>>ch;
int ar=strlen(ch);
for(int i=0;i<ar;i++)
{mn[i]=toupper(ch[i]);
}
for(i=0;i<ar;i++)
cout<<mn[i];
}
