#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
       	ofstream outf("item");
	cout<<"Writing to file"<<endl;
	cout<<"Enter item name:";
	char name[30];
	cin>>name;
	outf<<name<<endl;

	cout<<"Enter item cost:";
	float cost;
	cin>>cost;
	outf<<cost<<endl;
	outf.close();


	cout<<"Reading from file "<<endl;
	ifstream inf("item");
	inf>>name;
	inf>>cost;
	cout<<"Item name="<<name<<endl;
	cout<<"Item cost="<<cost<<endl;
	inf.close();
	getch();



}