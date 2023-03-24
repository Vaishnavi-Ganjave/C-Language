/* Q4. write c program to accept string and print it in reverse order.
Eg: 
Input string: india is my country    output string: yrtnuoc ym si aidni
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],rev[100];
	int i,j,count=0;
	printf("please enter a string to it in reverse order: ");
	//scanf("%s",str);
	gets(str);
	printf("string is %s",str);
	fgets(str,sizeof(str),stdin);

	
	for(i=count-1; i>=0;i++)
	{
		if(rev!='\0')
		{
		rev[i]=str[i];
		}
	}
	printf("string after in reverse order is: %s",rev);
	

	getch();
}


