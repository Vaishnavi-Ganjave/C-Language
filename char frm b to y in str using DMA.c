/* 
Q20. write c program which accept a string from user which contains a characters from b to y.using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:         

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char * str = NULL;
	char ch;
	int i=0;
	int no_of_char= 1;
	
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

	for(i=0;*(str+i) !='\0';i++)
{
if( *(str+i) !='a' &&  *(str+i) !='z')
{
printf("%c", *(str+i));
}
else
{ printf("\n");
break;
}
}
getch();
}