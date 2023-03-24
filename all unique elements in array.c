// c program to print all unique elemenys in an array //

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,cnt=0;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter  array elements is: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n+1;j++)
		{
			if(i!=j)
				break;
			{

			if(a[i]==a[j])
			{
				cnt++;
			}
			}
		}
		if(cnt==0)
			{
				
				printf("unique array elements is %d\n",a[i]);
			
		}
	}
	getch();
	}
