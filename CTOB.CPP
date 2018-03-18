#include<iostream.h>
#include<conio.h>
class time
{
	int hrs,mins,t;
	public:
		time(int s)
		{
			t=s;
		}
		operator int()
		{
			hrs=t/60;
			mins=t%60;

		}
		void display()
		{
			cout<<hrs<<"Hours and "<<mins<<"Minutes";

		}
};
void main()
{
	clrscr();
	time t1=85;
	int a=t1;

       t1.display();

	getch();
}





