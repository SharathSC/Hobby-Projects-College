#include<iostream.h>
#include<string.h>
#include<conio.h>

class proof
{
private:
int i;
char a[50],b[50];

public:
void check()
{
cout<<"enter the string 1";
cin>>a;
cout<<"enter the string 2";
cin>>b;
}

void find()
{
for (i=0;i++;a[i]>='\0')
{
for (j=0;j<=i;j++)
{
if (a[i]=b[j])
	{
	cout<<b[j];
	}
#endif
}
}
};

void main()
{
proof p1;
p1.check();
p1.find();
}