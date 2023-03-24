/*20.Write a C program which accept string from user and copy that string into some another string.
owner name: Ganjave Vaishnavi
Batch: PPA9 
*/


//solution:    //run


#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100], i;

printf("enter a string: ");
fgets(str1, sizeof(str1), stdin);
printf("string is %s:",str1);

for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
} 
printf("copy string is:%s",str2);
getch();
}