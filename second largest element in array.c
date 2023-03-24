// find second largest elemengt in array. //

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,max1,max2;
	printf("enter the size: ");
	scanf("%d",&n);
	printf("please enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("second maximum element is %d",max2);
	getch();
}
