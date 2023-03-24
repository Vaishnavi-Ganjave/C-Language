

/* 
Q36.write c program to store square of the elements in the same array using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

 //solution:

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{ 
    int *p;
    int i,j;
	int n;

    printf("enter the how many elements u want: ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("array elements are: \n");
	

	for(i=0;i<n;i++)
	{
		
		scanf("%d",(p+i));
	}
	printf("square of element is: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(*(p+i) == *(p+j))
			{
				
		printf("%d\n", *(p+i)* *(p+j));
			}
		}
	}
	
	getch();
}
		
	
	