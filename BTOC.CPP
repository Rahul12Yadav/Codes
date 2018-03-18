#include<iostream.h>
#include<conio.h>
class time
{
	int hrs,mins;
	public:
		time(int t)
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
    
	int duration=85;
    
	

	time t1=duration;
	t1.display();
	getch();
}





