

// c program to delete element from the array(sorted list) //
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,value,ps;
	printf("enter no of elements in array: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position where delete an element: ");
	scanf("%d",&ps);
	if(ps>=n+1)
	{
		printf("deletion is not possible");
	else
	{
	for(i=ps-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
		printf("after deleting element from array:");
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[i]);
		}
	}
	}
	
	getch();
	}
