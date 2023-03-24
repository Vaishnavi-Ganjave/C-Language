/*Q3. write c program to print count of number character in given string.
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/

//solotion:

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,count=0;
printf("enter a string to count no: ");
//scanf("%s",str);
//gets(str);
printf("string is %s: ",str);
fgets(str,sizeof(str),stdin);


for(i=0;str[i]!='\0';i++)
{
	if(str[i]!='\0')
	{
	count++;
	}
}
		printf("total no of character in given string is :%d",count);

		
	

getch();
}
