#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{char s[40]={"16th Asian Games 2010- (GUANGZHOU)"},s1[40],ses[40],seu[40],sel[40],se4[40];
 char str[20];int i,ctspace=0,x=0,y=0,z=0,choice;
 cout<<"1.DISPLAY LOWER CASE ALPHABETS\n2.CONVERT LOWER CASE ALPHABETS TO UPPER CASE AND VICE VERSA\n3.INPUT A STRING AND CHECK WHETHER IT IS A PALINDROME OR NOT\n";
 cin>>choice;
 puts(s);
 strcpy(s1,s);
 switch (choice)
 {case 1:for(i=0;s[i]!='\0';i++)
			{if(s[i]>='a'&&s[i]<='z')
			 {if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			  {seu[x]=s[i];x++;}}

			 if(s[i]>='0'&&s[i]<='9')
			 {sel[y]=s[i];y++;}

			 if(s[i]!=' ')
			 {ses[z]=s[i];z++;}

			 else
			 {ctspace++; }
			}
			for(i=0;s[i]!='\0';i++)
			{cout<<seu[i];
			 cout<<sel[i];
			 cout<<ses[i];
			 
			}
 }
}