/* write a program in c to seperate odd and even integers in same array.
Owner name: Ganjave Vaishnavi
Batch: PPA9
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n;
printf("enter size of array: ");
scanf("%d",&n);
printf("enter elements of array: ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("even numbers in array are: \n");
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
		printf("%d ",a[i]);
	}
}
printf("odd numbers in array are: \n");
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	{
		printf("%d ",a[i]);
	}
}
getch();
}
