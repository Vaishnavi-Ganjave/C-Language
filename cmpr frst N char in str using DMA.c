/*46.Write a C program which accept two strings from user and compare only first N character of two strings. If both strings are equal then return 0 otherwise return difference 
between first mismatch character. (Using Dynamic Memory Allocation)
owner name:Ganjave vaishnavi
Batch: PPA9
*/

//solution        //run new

    

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char * str = NULL;
	char * str1 = NULL;
	char ch,ch1;
	int i=0,j=0;
	int no_of_char= 1,no_of_char2 = 1;
	int diff;
	int len1=0,len2=0,cnt=0;
	
	str = (char*)malloc(sizeof(char));
	*(str+0) = '\0 ';

	printf("enter first string: ");
	do{
		scanf("%c",&ch);
		if(ch != '\n')       
		{
			no_of_char++;
			str = (char*)realloc(str, no_of_char*sizeof(char));
			*(str+i) = ch;
			*(str+i+1) = '\0';
			i++;
		}
	}

	while(ch != '\n');

	str1 = (char*)malloc(sizeof(char));
	*(str1+0) = '\0 ';
	printf("enter second string: \n");
	do
	{
		scanf("%c",&ch1);
		if(ch1 != '\n')       
		{
			no_of_char++;
			str1 = (char*)realloc(str1, no_of_char*sizeof(char));
			*(str1+j) = ch1;
			*(str1+j+1) = '\0';
			j++;
		}
	}
     while(ch1!= '\n');

for(i=0; *(str+i) !='\0'; i++)


printf("enter the position to compare string:");
scanf("%d", &len1);
for(i=0; *(str1+i) !='\0'; i++)


if(len1== cnt)
{
	for(i=0; i<len2; i++)
	{
		if(*(str+i) == *(str1+i))
		{
			cnt++;
		}
		else
			break;
	}
} 


if(cnt != len2)
{
	diff = *(str+len2) - *(str1+len2);
		printf("difference in mismatch character is: %d",diff);
}
else if(cnt == len2) 
{
printf("both strings are equal\n");
}
getch();
}