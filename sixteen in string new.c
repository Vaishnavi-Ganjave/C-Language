/*
Q16.Write a C program which accept sentence from user and position from user and print the word at  that position
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i=0,j=0,k=0,n,pos=0;
printf("please enter a string\n");
fgets(str,sizeof(str),stdin);
printf("enter the position\n");
scanf("%d",&n);
for(i=0;str[i]!='\0';i++)
{
if((str[i]!=' '&& str[i+1]==' ') || str[i]=='\n')
{
pos++;
if(pos==n)
{
for(j=i-1;str[j]!=' ';j--);
for(k=j+1;str[k]!=' ';k++)
{
printf("%c",str[k]);
}
}
}
}
getch();
}