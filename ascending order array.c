#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,temp;
	printf("enter value of n: ");
	scanf("%d",&n);
	printf("enter numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("only even numbers arrange in ascending  order :\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		getch();
	}
