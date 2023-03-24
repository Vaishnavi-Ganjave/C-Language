/*Q2.write c program to sort 1-D array in ascending order using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *p;
	int i,j,n;
	int temp;
	

	printf("enter how many elements you want to insert : ");
	scanf("%d",&n);

	p = (int*)malloc(n*sizeof(int));

	printf("enter array elements\n");
	for(i = 0 ; i < n; i++)
	{
		scanf("%d",p+i);
	}

	printf("array elements are\n");
	for(i = 0 ; i < n ; i++)
	{
		for(j=0;j<=i;j++)
		{
			if(*(p+i)<=*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("after sorting array elements are: \n");
	for(i=0; i<n; i++)
		printf("%d\n ",*(p+i));
	
	getch();
}