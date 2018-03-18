#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
 {

	clrscr();
	char line[100];
	fstream file; // declare an object of fstream class

	file.open("demo.txt", ios :: out | ios :: app); // open file in append mode

	 if (file.fail())
	{

		cout << "Error Opening file ";
	}

	else
	{

		cout << "Enter a line : ";

		cin.getline(line, 100);

		file << line << endl; // Append the line to the file

		cout << "Line written into the file" << endl;

	 }





   getch();
}