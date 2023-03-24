/* 
Q9.write c program to count count no of number of vowels and consonants in given string.using dynamic memory allocation.
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
	int j;
	int v=0,c=0;
	
	
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
	j = i;

	for(i=0; *(str+i) != '\0'; i++)
{
if(*(str+i) == 'a' || *(str+i) == 'e' ||    *(str+i) == 'i' ||  *(str+i) == 'o' ||
   *(str+i) == 'u' || *(str+i) == 'A' ||    *(str+i) == 'E' ||   *(str+i) == 'I' ||
   *(str+i) == 'O' || *(str+i) == 'U' )
{
   v++;
}
else
c++;

	}

printf("vowels are : %d\n",v);
printf("consonants are :%d",c);

printf("%c",*(str+i));

getch();

}












   
	


