/*
Q10. write c program to check matrix is symmetric or not using dynamic memory allocation
Owner name: Ganjave vaishnavi
batch: PPA9
*/

//solution:


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() 
{
int **p = NULL;
int i, j;
int row,col;
int **transpose,flag=0;

printf("enter how many rows you want: ");
scanf("%d",&row);

printf("enter how many columns you want:");
scanf("%d",&col);

p=(int**)malloc(row * sizeof(int*));

transpose = (int**)malloc(row * sizeof(int*));
for(i=0;i<row;i++)
{
*(p+i)=(int *)malloc(col * sizeof(int));
} 

transpose = (int**)malloc(row * sizeof(int*));
for(i=0;i<row;i++)
{
*(transpose+i)=(int *)malloc(col * sizeof(int));
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
for(j=0;j<col;j++)
{
*(*(transpose+j)+i) = *(*(p+i)+j);
} 
} 

printf("transpose matrix is:\n");
for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
printf("%d\t",*(*(transpose+i)+j));
}
printf("\n");
}

for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
	if(row == col)
	{
		*(*(transpose+j)+i) != *(*(p+i)+j);
		flag =1;
	}
}
}
if(flag == 1)
{
	printf("given matrix is symmetric");
}
else
{
	printf("given matrix is not symmetric");
}

getch();
}

