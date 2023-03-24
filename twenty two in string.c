/*
Q22.Write a program which accept string from user and copy first N charaters 
into some another  string
Owner Name:Ganjave Vaishnavi
Batch:PPA9
*/


//solution:


#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int i=0,n;
printf("please enter a string\n");
fgets(str,sizeof(str),stdin);
printf("enter the no upto which u want to print string:\n");
scanf("%d",&n);
for(i=0;str[i]!='\n';i++)
{
if(i<=n)
{
printf("%c",str[i]);
}
}
getch();
}