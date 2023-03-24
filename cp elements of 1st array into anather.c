#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i,n;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements in first array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	} 
	printf("elements of first array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

	printf("elements of second array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}

	getch();
}


