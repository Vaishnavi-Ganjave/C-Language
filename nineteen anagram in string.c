/*Q19.   Anagram  */




#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[50],str2[50];
	int n,n1,n2;
	int i,j;
	int found=0;

	printf("enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	printf("enter second string: ");
	fgets(str2, sizeof(str2), stdin);

	if(n1== n2)
	{
		n=n1;
		for(i=0;i<n;i++)
		{
			found=0;
			for(j=0;j<n;j++)
			{
				if(str1[i] == str2[j])
				{
					found=1;
					break;
				}
			}
			if(found == 0)
			{
				found!=1;
				break;
			}
		}
		if(found!=1)
		{
			printf("string are not anagram\n");
		}
		else
		{
			printf("string are anagram\n");
		}
	}
		getch();
	}