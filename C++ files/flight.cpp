#include <iostream.h>
class flightdetails
{
private:
char name[100];
int time;
int date;
int c;
public:
void accept()
{
cout<<"enter the name of the flight\n";
cin>>name;
cout<<"enter the time of the flight\n";
cin>>time;
cout<<"enter the date of the flight";
cin>>date;
}
void display()
{
cout<<"The name of the flight is :\n";
cout<<name;
cout<<"The time of the flight\n";
cout<<time;
cout<<"The date of the flight\n";
cout<<date;
if (name=="kingfisher")
{
 c==1 ;
}
if (name=="jet lite")
{
c==2 ;
}
if (name=="spicejet")
{
c==3;
}
switch (c)
{
case 1:
if (name=="kingfisher")
cout<<"the price is 6000";
case 2:
if (name=="jet lite")
cout<<"the price is 5000";
case 3:
if (name=="spicejet")
cout<<"the price is 4000";
default: cout<<"price not known";
}
}

};
void main()
{
flightdetails object;
object.accept();
object.display();
}



