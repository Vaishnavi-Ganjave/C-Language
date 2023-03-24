 /* Q2.write c program to accept string with multiple spaces from users and print it with a single spaces as a delimeter.
 Owner Name: Ganjave vaishnavi
 Batch: PPA9
 */

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	char i=0;
	printf("replace the spaces of a string with a specific character: ");
	printf("string is %s",str);
	fgets(str,sizeof(str),stdin);
	
	
	while(str[i]!='\0')
	{
		while(str[i]==' ')
		{
			i++;
			printf("$");
		}
	
		while(str[i]!=' ' && str[i]!='\0')
		{
		
		printf("%c",str[i]);
		i++;
		}
	}

	getch();
}