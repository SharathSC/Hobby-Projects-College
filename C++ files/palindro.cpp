#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s[30];int flag=1,len;
gets(s);
len=strlen(s);
for(int i=0;i<len/2;i++)
{if((s[i])!= s[len-i-1])
{flag=0;
break; }
}
if(flag)
cout<<"palindrome\n";
else
cout<<"not palindrome";
}

