 /* Q16.write c program which accept sentence from user and position from user and print the words at that position.
 Owner: Ganjave Vaishnavi
 Batch: PPA9
 */


//solution:


#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
	printf("please enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("string is: %s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
	printf("the word at %d index position=%c\n",i,str[i]);
	i++;
	}
	getch();
}