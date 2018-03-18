#include<iostream.h>
#include<conio.h>
class M
{
	protected:
		int m;
	public:
		void get_m(int x)
		{
			m=x;
		}
};
class N
{
	protected:
		int n;
	public:
		void get_n(int y)
		{
			n=y;
		}

};
class P: public M,public N
{
	public:
		void display()
		{
			cout<<"m="<<m<<endl;
			cout<<"m="<<n<<endl;
			cout<<"m*n="<<m*n<<endl;
		}
};
void main()
{
	P p1;
	p1.get_m(10);
	p1.get_n(20);
	p1.display();
	getch();

}
