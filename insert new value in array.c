

// c program to insert new value in the array(sorted list) //
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
	printf("enter position where insert an element: ");
	scanf("%d",&ps);
	printf("enter value to insert: ");
	scanf("%d",&value);
	for(i=n-1;i>=ps-1;i--)
	{
		a[i+1]=a[i];
	}
	a[ps-1]=value;
	printf("after inserting new element in array: ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
