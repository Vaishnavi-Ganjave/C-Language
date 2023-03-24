/* Q29.write c program which accept string from user and then accept range and reverse the string in that range without taking another string.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/


//solution:   //logic correrction

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	char rev[200];
	int i,j,n;
	int count=0;
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("please enter number: ");
	scanf("%d",&n);

	for(i=0; str[i]!='\0'; i++)
	{
		if(i<n)
		{
			if(str[i]==' ')
			{
				count++;
			}
			i=n;
			for(j=n+count; j>=0;j--)
			{
				printf("%c",str[j]);
			}
		}
		else
		{
			printf("%c",str[i]);
		}
	}
	getch();
}