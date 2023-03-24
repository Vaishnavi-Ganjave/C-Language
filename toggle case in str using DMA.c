/* 
Q33. write c program which convert the case of a string .using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:       //run

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	char * str = NULL;
	char ch;
	int i=0;
	int no_of_char=1;

	str = (char*)malloc(sizeof(char));
	*(str+0) = '\0 ';

	printf("enter a string: ");
	do{

		scanf("%c",&ch);
		if(ch != '\n')       
		{
			no_of_char++;
			str = (char*)realloc(str, no_of_char*sizeof(char));
			*(str+i) = ch;
			*(str+i+1) = '\0 ';
			i++;
		}
	}
	while(ch != '\n');
		for(i=0; *(str+i) !='\0'; i++)
{
if(*(str+i)>=65 && *(str+i) <=90)
{
*(str+i) = *(str+i) + 32;
}
else if(*(str+i) >= 97 && *(str+i) <= 122)
{
*(str+i) = *(str+i) - 32;
}
}
printf("string in toggle case:%s\n");
getch();
}