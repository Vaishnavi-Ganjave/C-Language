#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,temp;
	printf("enter elements of an array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("alternate elements in given array: ");
	for(i=0;i<10;i=i+2)
	{
		printf("%d\n",a[i]);

	}
	getch();
}
