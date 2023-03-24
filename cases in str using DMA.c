/* 
Q21. write c program which accept sentence from user and print no of small letters,capital letters,spaces and digits from that sentence .using dynamic memory allocation.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:         //op chuktay

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char * str = NULL;
	char ch;
	int i=0;
	int no_of_char= 1;
	int sc=0, dg=0, sp=0, cc=0;
	
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
	
   while(*(str+i)!='\n')
{
if(*(str+i) == ' ')
{
sp++;
}
else if( *(str+i) >= 'a' && *(str+i) <= 'z')
{
sc++;
}
else if( *(str+i) >= 'A' && *(str+i) <= 'Z')
{
cc++;
}
else if( *(str+i) >= '1' && *(str+i) <= '9')
{
dg++;
}
i++;
}
	
printf("no of small letters are: %d\n",sc);
printf("no of capital letters are: %d\n",cc);
printf("no of digits are: %d\n",dg);
printf("no of spaces are: %d\n",sp);

getch();
}
	