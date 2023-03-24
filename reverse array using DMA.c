/*
Q5.write c program to reverse an given 1-D array without using sorting algorithm(use dynamic memory allocation to represent an array)
Owner Name: Ganjave Vaishnavi
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
printf("array in reverse order is: \n");
for(i=n-1; i>=0; i--)
{
printf("%d\n",*(p+i));
}

getch();
}
