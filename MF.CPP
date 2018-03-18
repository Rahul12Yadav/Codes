#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	ofstream fout;
	fout.open("Country");
	fout<<"India"<<endl;
	fout<<"USA"<<endl;
	fout<<"UK"<<endl;
	fout.close();

	fout.open("Capital");
	fout<<"Delhi"<<endl;
	fout<<"Washington"<<endl;
	fout<<"London"<<endl;
	fout.close();

	const int n=80;
	char line[n];
	ifstream fin;
	fin.open("Country");
	cout<<"contents of Country file"<<endl;
	while(fin)
		{
			fin>>line;
			cout<<line<<endl;
		}
	fin.close();
	fin.open("Capital");
	cout<<"contents of Capital file"<<endl;
	while(fin)
	{
		fin.getline(line,n);
		cout<<line<<endl;
	}
	fin.close();
	getch();

}