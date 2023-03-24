/* Q20. write c program to find the two elements such that their sum is closest to given number.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={42,15,-25,30,-10,35};
	int i,j,n,sum;
	int min_sum,count;

	if(n<2)
	{
		printf("invalid input");
		return;
	}
	min_sum=a[0]+a[1];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]-a[j];
			if(min_sum>sum)
			{
				min_sum=sum;
				i=j;
				j=min_sum;
			}
		}
	}
	printf("the two elements sum is closest to given no is : ",a[i],a[j]);
	getch();
}


