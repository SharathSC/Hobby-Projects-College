#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{char ch='C',ch1,ch2;
ch1=ch++;
ch2=++ch;
cout<<ch<<endl;
cout<<2*(++ch1)<<" "<<++ch2<<" "<<ch2++<<endl;
}


