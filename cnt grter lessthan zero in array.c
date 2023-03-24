#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i,N,p=0,n=0,z=0;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	if(a[i]>0)
	{
		p++;
	}
	if(a[i]<0)
	{
		n++;
	}
	else if(a[i]==0)
	{
		z++;
		
	}
	}

	printf("positive no is %d\n",p);
	printf("negative no is %d\n",n);
	printf("equal to no is %d\n",z);
	getch();
}

