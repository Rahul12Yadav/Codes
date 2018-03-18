#include<stdio.h>
#include<conio.h>
void hanoi(int,char,char,char);
void main()
{
int n;
clrscr();
printf("Enter no of discs");
scanf("%d",&n);
printf("****Moves are as follows****");
hanoi(n,'A','B','C');
getch();
}
void hanoi(int n,char s,char a,char d)
{
 if(n!=0)
 {
  hanoi(n-1,s,d,a);
  printf("\n Move disc %d from  %c to %c",n,s,d);
  hanoi(n-1,a,s,d);
  }
}

