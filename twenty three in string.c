/*
Q23.Write a C program which accept two strings from user and append second string after first string.
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/


//solution


#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],str1[100],str3[100];
	int j,i;
	printf("Enter the first string: ");
	fgets(str,sizeof(str),stdin);
	printf("Enter the second string: ");
	fgets(str1,sizeof(str1),stdin);
for(i=0;str[i]!='\n';i++)
{
    str3[i]=str[i];
}
for(j=0;str1[j]!='\n';j++)
{
    str3[i]=str1[j];
    i++;
}
     printf("%s",str3);
    getch();
}