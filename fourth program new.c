/* Q4. write c program to accept string and print it in reverse order
Eg:
input string:india is my country    output string: yrtnuoc ym si aidni
Owner name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i;
int count = 0;
printf("enter a string : ");
fgets(str , sizeof(str) , stdin);
printf("given string is %s",str);
for(i = 0 ; str[i] != '\0' ; i++)
{
count++;
}
count = count-1;

for(i = count ; i >= 0 ; i--)
{
printf("%c",str[i]);
}
getch();
}