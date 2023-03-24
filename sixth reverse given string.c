/*Q6.write c program to reverse a given string as below
Eg:
Input string: India is my country    Output string: aidnI si ym yrtnuoc
Owner Name: Ganjave Vaishnavi:Batch: PPA0
*/


//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i=0,j,j1;

	printf("enter string: ");
	fgets(str, sizeof(str),stdin);
	printf("string is: %s",str);

	while(str[i]!='\0')
	{
		while(str[i]==' ')
		{
			printf(" ");
			i++;
		}
		j=i;
	while(str[i]!=' ' && str[i]!='\0')
	{ 
		i++;
	}
	j1=i-1;
	while(j1>=j && str[j1]!='\0')
	{
		printf("%c",str[j1]);
		j1--;
	}
	}
		getch();
}
