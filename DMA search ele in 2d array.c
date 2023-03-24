/*
Q2.write c program to search and element in 2-D array using dynamic memory allocation.
owner name: Ganjave vaishnavi
batch : PPA9
*/


//Solution:


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() 
{
int **p = NULL;
int i,j;
int row,col;
int search, flag=0,count=0;

printf("enter how many rows you want: \n");
scanf("%d", &row);
printf("enter how many columns you want: \n");
scanf("%d", &col);

p= (int**)malloc(row * sizeof(int*));
for(i=0; i<row;i++)
{
  *(p+i) = (int*)malloc(col * sizeof(int));
}

printf("enter array elements are: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",*(p+i)+j);
}
} 

printf("array elements are: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",*(*(p+i)+j));
}
printf("\n");
} 

printf("enter the element to search:\n");
scanf("%d", &search);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(*(*(p+i)+j) == search)
{
	//count++;
flag=1;
}
} 
} 
//printf("%d\n",count);
if(flag==1)
{
printf("element is found\n");
} 
else
{
printf("element is not found");
} 

getch();
}