#include<stdio.h>
#include<conio.h>
void quicksort(int a[], int left, int right)
{
  int pivot, first, last;

  first = left;
  last = right;
  pivot = a[left];
  while (left < right)
  {
    while ((a[right] >= pivot) && (left < right))
      right--;
    if (left != right)
    {
      a[left] = a[right];
      left++;
    }
    while ((a[left] <= pivot) && (left < right))
      left++;
    if (left != right)
    {
      a[right] = a[left];
      right--;
    }
  }
  a[left] = pivot;
  pivot = left;
  left = first;
  right = last;
  if (left < pivot)
    quicksort(a, left, pivot-1);
  if (right > pivot)
    quicksort(a, pivot+1, right);
}
void main()
{
	int n,i,arr[50];
	clrscr();
	printf("Enter the no of elemnents:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	getch();
}
