#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void printlist(struct Node *n)
{
  while (n != NULL)
  {
     printf("%d->", n->data);
     n = n->next;
    // printf("NULL");
  }
  printf("NULL");
}

void main()
{
  //clrscr();
  struct Node* head = NULL;       //three pointer variables of type struct node
  struct Node* second = NULL;
  struct Node* third = NULL;
  clrscr();
  head =(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third =(struct Node*)malloc(sizeof(struct Node));
  //head->data = 1;
  printf("Enter the data for first node");
  scanf("%d",&head->data);
  head->next = second;
  //second->data = 2;
  printf("Enter the data for second node");
  scanf("%d",&second->data);
  second->next = third;
  //third->data = 3;
  printf("Enter the data for third node");
  scanf("%d",&third->data);
  third->next = NULL;
  printlist(head);
  getch();
}