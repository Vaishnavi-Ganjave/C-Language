#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,sum=0;
	printf("enter size of array:\n");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum of all elemnts in array is: %d\n",sum);
	getch();
}

