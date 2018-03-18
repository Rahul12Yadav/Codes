#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
long pos;
ofstream outfile;
outfile.open ("test.txt");

outfile<<"This is an apple";
pos=outfile.tellp();
cout<<pos;
outfile.seekp (pos-7);
outfile.write (" sam",4);
outfile.close();
getch();
}