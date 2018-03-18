#include<iostream.h>
#include<conio.h>
class a
{
	int a;
	public:
		int b;
		void set_ab()
		{
			cout<<"Enter the value of a:";
			cin>>a;
			cout<<"Enter the value of b:";
			cin>>b;
		}
		int get_a()
		{
			return a;
		}
		void displaya()
		{
			cout<<"Class A"<<endl;
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
};
class b:public a
{
	int c;
	public:
		void mul()
		{
			c=b*get_a();
		}
		void displayb()
		{
			cout<<"Class B"<<endl;
			cout<<"A="<<get_a()<<endl;
			cout<<"B="<<b<<endl;
			cout<<"C="<<c<<endl;
		}
};
void main()
{
	clrscr();
	b b1;
	b1.set_ab();
	b1.get_a();
	b1.displaya();
	b1.mul();
	b1.displayb();
	getch();
}

