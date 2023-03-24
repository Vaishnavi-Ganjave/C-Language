// c program to find maximum element in array. //

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,max,min;
	printf("enter size: ");
	scanf("%d",&n);
	printf("please enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	max=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
	}
	printf("max element is %d",max);
	getch();
}
