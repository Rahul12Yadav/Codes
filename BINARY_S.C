#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,search,a[45],first,last,middle;
	clrscr();
	printf("Enter Array Size:");
	scanf("%d",&n);
	printf("Enter Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. to Search:");
	scanf("%d",&search);
	first=0, last=n-1, middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<search)
			first=middle+1;
		else if(a[middle]==search)
		{
			printf("%d no. is located at %d",search,middle+1);
			break;
		}
		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Searched no. is not found");
	}
  getch();
}
