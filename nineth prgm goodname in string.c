/* Q9 write program to replace good names in mail.
Owner: Ganajve Vaishnavi
Batch: PPA9
*/


//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,j;
printf("enter a name: ");
fgets(str, sizeof(str), stdin);
printf("string is %s: ",str);


for(i=0;str[i]!='\n';i++)
{
	if(str[i]!=' ' && str[i+1]==' ')
	{
		for(j=i; j!=' ';j--)
		{
			str[i]=str[j];
			printf("%c",str[j]);
		}
	}
		printf(" ");
	}

getch();
}
