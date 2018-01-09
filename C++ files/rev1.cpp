#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{char rem[30]="wish_you,the *very best!";
int i;
for(i=0;rem[i]!='\0';i++)
{if(ispunct(rem[i]))
 rem[i]=' ';
 if(i==0)
 rem[i]=toupper(rem[i]);
 if(rem[i]==' ')
 rem[i+1]=toupper(rem[i+1]);
}
cout<<rem<<endl;
}
