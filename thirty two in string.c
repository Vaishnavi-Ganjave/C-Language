 /*
Q32. Write a C program to count number of alphabates, spaces and words in given string.
Owner name: Ganjave Vaishnavi
Batch:PPA9
*/


//SOLUTION:

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,space=0,word=0,chara=0;
	char str[100];
	printf("Enter the string\n");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]==' ')
		{
			space++;
		}
		if(str[i]!=' ')
		{
			chara++;
		}
	if(str[i]==' '&&str[i+1]!=' ')
	{
		word++;
	}
}   
	printf("space is: %d\n character is:%d\n word:%d\n",space,chara,word+1);
getch();

}