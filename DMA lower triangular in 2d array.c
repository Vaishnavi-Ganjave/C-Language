/*
Q7.Write a C-program to check matrix is lower triangular or not using dynamic memory allocation
owner name: Ganjave vaishnavi
batch : PPA9
*/


//Solution :


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() 
{
int **p = NULL;
int i,j;
int row,col;
int flag=0;

printf("enter how many rows you want: ");
scanf("%d",&row);

printf("enter how many columns you want: ");
scanf("%d",&col);

p=(int**)malloc(row * sizeof(int*));

for(i=0;i<row;i++)
{
*(p+i)=(int *)malloc(col * sizeof(int));
} 

printf("enter array elements: \n");
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

for(i=0;i<row;i++) 
{
for(j=i+1;j<col;j++)
{
if(*(*(p+i)+j)!= 0)
{
	flag=1;
}
}
}
if(flag == 0)
{
printf("matrix is lower triangular");
}
else
{
printf("matrix is not lower triangular");
}

getch();
}