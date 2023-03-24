/* Q31.write c program which accept string from user and check whether string is palindrome or not.
Owner Name:Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],rev[50];
	int i,j;
	int len=0,flag=0;
	printf("enter string to check it it palindrome or not: ");
	fgets(str, sizeof(str), stdin);

	for(i=0; str[i]!='\0'; i++)
	{
		len++;
		
	}
	
	printf("length of string is %s: %d",len);
	i=len-1;
	j=len/2;
	for(i=0;i>=0;i--)
	{
		rev[i]!=str[i];
	}
	for(i=0;i<len;i++)
	{
		flag =1;

		if(rev[i]!=str[i])
		{
			flag=0;
		}
		if(flag== 1)
		{
			printf("string is palindrome",str);
		//else
		
			printf("string is not palindrome",str);
		
		}
	}
	getch();
}