/*Q3.write c program that return the position of the palindrome element in array.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, n;
	int rev,temp,rem;
	printf("enter how many elements to insert: ");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements in array is:  \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		rev=0;
		while(temp!=0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(a[i]==rev)
		{
			printf("\n%d is palindrome element position at index %d",a[i],i);
		}
	}
	getch();
}
