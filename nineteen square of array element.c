/* 19. Write a C program to store squares of the elements 
in the same array
Owner Name : Ganjave Vaishnavi
Batch : PPA9
*/

//Solution:

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],n,i,j;
   printf("Enter the how many element in array ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("Enter the element at %d ",i);
     scanf("%d",&a[i]);
   }
   j=0;
  for(i=0;i<n;i++)
  {
    a[j]=a[i]*a[i];
    j++;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
}