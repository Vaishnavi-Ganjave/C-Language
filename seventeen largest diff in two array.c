/* 17.write c program to find 2 elements in the array such that difference between them is largest.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:     

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,j,n;
	int md,temp;
	printf("enter size of array: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("enter element at %d: ",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	md= a[n-1]-a[0];
	printf("two elements are %d %d and largest difference is %d", a[0],a[n-1],md);
	getch();
}