#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5
int queue[MAX], front=1, rear=1;
void enqueue();
void dequeue();
void display();
void main()
{
	int choice;
	clrscr();
	printf("***QUEUE MENU***\n");
	do
	{
		printf("\n1.INSERT:");
		printf("\n2.DELETE:");
		printf("\n3.DISPLAY:");
		printf("\n4.EXIT.");
		printf("\nEnter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
		}
	}
	while(choice!=4);
  getch();
}
void enqueue()
{
	int num;
	printf("\nEnter no. you want to insert:");
	scanf("%d",&num);
	if(front==0 && rear==MAX-1)
		printf("QUEUE is OVERFLOW");
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=num;
	}
	else if(rear==MAX-1 && front!=0)
	{
		rear=0;
		queue[rear]=num;
	}
	else
	{
		rear++;
		queue[rear]=num;
	}
}
void dequeue()
{
	int element;
	if(front==-1)
	{
		printf("Queue is Underflow");
	}
	element=queue[front];
	queue[front]=0;
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		if(front==MAX-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
	printf("\nThe deleted element is %d",element);
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("\nQueue is empty");
		for(i=0;i<MAX;i++)
		{
			printf("\nQueue elements are:\n");
			for(i=0;i<MAX;i++)
			{
				printf("\n%d",queue[i]);
			}
		}
	}
}