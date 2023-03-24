/* 
Q25. write c program which accept sentence from user and print number of words of even and odd length in that sentence .using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:        //op incorrect

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	char * str = NULL;
	char ch;
	int i=0;
	int no_of_char= 1;
	int count=0;
	int evencount=0;
	int oddcount=0;
	
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
	i=0;
	//printf("string is: %s",str);
while(*(str+i) != '\n')
{
while( *(str+i) ==' ')
{
i++;
}
count=0;
while( *(str+i) !=' ' && *(str+i) !='\n')
{
count++;
i++;
}
if(count % 2==0)
{
evencount++;
}
else if(count % 2 !=0)
{
oddcount++;
}
}

printf("even numbers in string is :%d\n",evencount);
printf("odd numbers in string is:%d\n",oddcount);

getch();
}