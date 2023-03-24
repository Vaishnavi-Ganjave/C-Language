#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,temp;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1st half is ascending and 2nd half is descending array: ");
	for(i=0;i<=n/2;i++)
	{
		for(j=i+1;j<=n/2;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=n/2+1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
