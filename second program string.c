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
	int i=0;
	printf("enter string character: ");
	
	fgets(str,sizeof(str),stdin);
	printf("string is %s:",str);
	
	while(str[i]!='\0')
	{
		while(str[i]==' ')
		{
			i++;
		}
	while(str[i]!=' ' &&  str[i]!='\0')

	{
		printf("%c",str[i]);
			i++;
		}
		
	printf(" ");
	}
	getch();
}