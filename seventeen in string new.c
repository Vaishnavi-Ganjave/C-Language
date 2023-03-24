/*Q17. write c program to convert the string from upper case to lower case.
Owner Name:Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i;

printf("please enter a string: ");
//scanf("%s",str);
fgets(str, sizeof(str), stdin);

for(i=0;i<=str[i];i++)
{
	if(str[i]>=65 && str[i]<=90)
	{
		str[i]=str[i]+32;
	}
}
	printf("string in lowercase is: %s",str);

	getch();
}