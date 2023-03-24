#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n;
	int max,secondmax;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("please enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			secondmax=max;
			max=a[i];
		}
		else if(a[i]>secondmax)
		{
			secondmax=a[i];
		}
	}
	printf("second maximum element is %d: ",secondmax);
	getch();
}
