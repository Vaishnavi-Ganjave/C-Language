#include<stdio.h>
#include<conio.h>
void main()

{
	int a[30],i,n1,b[30],n2,c[60],j;
	printf("\n enter how many numbers you want to insert in secondary array:");
	scanf("%d",&n1);
	printf("enter %d elements for first array\n : ",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element of first array\n");
	for(i=0;i<n1;i++)
	{
		printf("%d",a[i]);
	}

	printf("\n enter how many numbers you want to insert in secondary array:");
	scanf("%d",&n2);
	printf("enter %d elements for second array\n",n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("element of second array\n");
	for(i=0;i<n2;i++)
	{
		printf("%d",b[i]);
	}
	printf("after merging two array\n");
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n2;i++,j++)
	{
		c[i]=b[j];
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d",c[i]);
	}
	getch();
}




