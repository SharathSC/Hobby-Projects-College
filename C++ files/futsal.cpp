#include<iostream.h>
#include<math.h>
void display();
void club1();
void tm();
void club();
void main();
void sum(int x);
unsigned long int x,ch1,ch, t,a,price, m,choice,choice1;
char ch2;
void main()
{display();
}
void display()
{do{
cout<<"1.To find out the stadiums of each of the Top Clubs\n2.To find out the activity in the transfer market\n";
cout<<"Plese enter your choice: ";

cin>>choice1;

switch(choice1)
{case 1:club1(); break;
 case 2:club();break;
}
cout<<"Do you want to continue";
cin>>ch2;
}while(ch2=='y'||ch2=='Y');
}

void club1()
{cout<<"Please enter the choice\n";
cout<<"1.Arsenal\n2.ManU\n3.Chelsea\n4.ManC\n";
cin>>ch1;
switch (ch1)
{
case 1:cout<<"You have chosen Arsenal\n";
		 cout<<"Their stadium is Emirates\n";
		 break;

case 2:cout<<"You have chosen Manchester United\n";
		 cout<<"Their stadium is the Old Trafford\n";
		 break;

case 3:cout<<"You have chosen Chelsea\n";
		 cout<<"Their stadium is the Stamford Bridge\n";
		 break;

case 4:cout<<"You have chosen Manchester City\n";
		 cout<<"Their stadium is the Stadium OF Light\n";
		 break;
}
}

void club()
{
cout<<"Please enter the choice\n";
cout<<"1.Arsenal\n2.ManU\n3.Chelsea\n4.ManC\n";
cin>>ch;
switch (ch)
{
case 1:cout<<"You have chosen Arsenal\n";
m=135000000;
cout<<"the cash in the bank initially is\n"<<m;
tm();
break;
case 2:cout<<"You have chosen Manchester United\n";
m=180000000;
cout<<"the cash in the bank initially is\n"<<m;
tm();
break;

case 3:cout<<"You have chosen Chelsea\n";
m=250000000;
cout<<"the cash in the bank initially is\n"<<m;
tm();

break;

case 4:cout<<"You have chosen ManC\n";
m=600000000;
cout<<"the cash in the bank initially is\n"<<m;
tm();
break;
}
}

void tm()
{cout<<"\nIf you want to confirm the club type the NO. of the club given in the menu.\nElse close this programme and restart again ";
cin>>ch;
cout<<"Lets find the amount of cash left in the bank after buying one of these players\n";
switch (ch)
{case 1:cout<<"Choose your player";
		 cout<<"1.Joel Campbell\tCost:1900000\n2.Gervinho\tCost:10600000\n3.Chu-Yung\tCost:8600000\n4.Alex Oxlade-Chamberlain\tCost:1200000\n";
		 cin>>a;
		 switch(a)
		 {case 1: price=1900000;
		 cout<<"amount left: " <<m-price<<endl;
		break;
		  case 2: price=10600000;
					 cout<<"amount left: "<<m-price<<endl;
break;
		  case 4: price=12000000;
					 cout<<"amount left: "<<m-price<<endl;
		  break;
		  case 3:
		  price=8600000;
					 cout<<"amount left: "<<m-price<<endl; }
					 break;

 case 2:cout<<"Choose your player\n";
 cout<<"1.Ashley Young\tCost:16000000\n2.David De Gea\tCost:30000000\n3.Phil Jones\tCost:160000000\n";
 cin>>a;
 switch(a)
		 {case 1: price=16000000;
		 cout<<"amount left: "<<m-price<<endl;
		break;
		  case 2: price=30000000;
					 cout<<"amount left: "<<m-price<<endl;
break;
		  case 3: price=16000000;
					 cout<<"amount left: "<<m-price<<endl;}
		  break;


  case 4:cout<<"Choose your player\n";
			cout<<"1.Samir Nasri\tCost:39000000\n2.Owen Hargreaves\tCost:0\n3.Sergio Aguero\tCost:48000000\n4.Gael Clichy\tCost:7000000\n";
			cin>>a;
		 switch(a)
		 {case 1: price=39000000;
		 cout<<"amount left: " <<m-price<<endl;
		break;
		  case 2: price=0;
					 cout<<"amount left: "<<m-price<<endl;
break;
		  case 3: price=48000000;
					 cout<<"amount left: "<<m-price<<endl;
		  break;
		  case 4:
		  price=7000000;
					 cout<<"amount left: "<<m-price<<endl;
					 break;
																		 }
				  break;
  case 3:cout<<"Choose your player\n";
			cout<<"1.Juan Mata\tCost:29000000\n2.Romel Lukaku\tCost:20600000\n3.Romeu Vidal\tCost:12000000\n.4.Genk\tCost:6600000\n";
			cin>>a;
		 switch(a)
		 {case 1: price=29000000;
		 cout<<"amount left: " <<m-price<<endl;
		break;
		  case 2: price=20600000;
					 cout<<"amount left: "<<m-price<<endl;
break;
		  case 3: price=12000000;
					 cout<<"amount left: "<<m-price<<endl;
		  break;
		  case 4:
		  price=6600000;
					 cout<<"amount left: "<<m-price<<endl;}
					 break;
		 }

}