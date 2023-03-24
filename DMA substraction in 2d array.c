/*
Q5.Write a C-program to substraction of two matrix using dynamic memory allocation
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
int **q = NULL;
int **sub = NULL;
int i,j;
int row,col;


printf("enter how many rows you want: ");
scanf("%d",&row);

printf("enter how many columns you want: ");
scanf("%d",&col);

p=(int**)malloc(row * sizeof(int*));

q=(int**)malloc(row * sizeof(int*));

sub=(int**)malloc(row * sizeof(int*));

for(i=0;i<row;i++)
{
*(p+i)=(int *)malloc(col * sizeof(int));
*(q+i)=(int *)malloc(col * sizeof(int));
*(sub+i)=(int *)malloc(col * sizeof(int));
} 

printf("enter array elements in 1st matrix: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",*(p+i)+j);
}
} 

printf("array elements in 1st matrix: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",*(*(p+i)+j));
}
printf("\n");
} 

printf("enter array elements in 2nd matrix: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",*(q+i)+j);
}
} 

printf("array elements in 2nd matrix: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",*(*(q+i)+j));
}
printf("\n");
}

printf("sum of matrix is: \n");
for(i=0;i<row;i++) 
{
for(j=0;j<col;j++)
{
*(*(sub+i)+j) = *(*(p+i)+j) - *(*(q+i)+j);

printf("%d\t",*(*(sub+i)+j));
}
printf("\n");
} 

getch();
}