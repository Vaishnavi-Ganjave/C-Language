 // Q. write c program to count frequency of each digit in array.        correction baki a//


#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],freq[10],i,j,n,count;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{count++;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("frequency of all elements in array: ");
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
		printf("%d occurs at %d times",a[i].freq[i]);
	}
	}
	getch();
	

