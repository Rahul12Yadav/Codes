#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,search,a[50];
	clrscr();
	printf("Enter Array Elements:");
	scanf("%d",&n);
	printf("Enter Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter No. to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("%d no is at %d loctaion",search,i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("Search is unsuccessful.");
	}
  getch();
}