#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{char w[10][20],s[40];
int i,j,k=0,c=0;
gets(s);
for(i=0;i<strlen(s);i++)
{
if(s[i]!=' ')
{
 w[c][k]=s[i];
 k++;
}
else
{w[c][k]='\0';
c++;
k=0;
}
}
w[c][k]='\0';
for(i=0;i<=c;i++)
cout<<w[i]<<endl;
}