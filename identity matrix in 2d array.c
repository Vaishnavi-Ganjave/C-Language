/*
Q9.write c program to check whether given matrix is identity or not Using static memory allocation
owner name: Ganjave Vaishnavi 
batch : PPA9
*/


//Solution: 

#include<stdio.h>
#include<conio.h>
void main() 
{
int a[10][10];
int i,j;
int row,col;
int flag=0;

printf("enter how many rows you want: ");
scanf("%d",&row);

printf("enter how many columns you want: ");
scanf("%d",&col);

printf("enter array elements: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
} 
printf("array elements are: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
} 
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(i==j && a[i][j]!=1) 
{
flag=1;
}
} 
} 
if(flag==0)
{
printf("matrix is identity matrix");
} 
else
{
printf("matrix is not identity matrix");
} 

getch();
}