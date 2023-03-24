/*
Q1.write a c program to represent 1-D array using dynamic memory allocation.
Owner name: Ganjave vaishnavi
Batch: PPA9
*/


//solution:

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	
int i, n;
int *p;
printf("enter the element you want to:");
	scanf("%d",&n);
p=(int*)malloc(n * sizeof(int));
printf("enter the array element: \n");
for(i=0;i<n;i++)
{
 scanf("%d",p+i);
}
printf("array elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}

getch();
}
