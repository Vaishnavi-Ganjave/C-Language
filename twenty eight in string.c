/*
Q28.Write a C program which accept string from user and then reverse the string till first N characters
without taking another string.
Owner Name:Ganjave Vaishnavi
Batch:PPA9
*/

//solution:
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],str1[50];
int i=0,j=0,flag=0,n,cnt=0;
printf("please enter first string\n");
fgets(str,sizeof(str),stdin);
printf("enter the number::\n");
scanf("%d",&n);
for(i=0;str[i]!='\0';i++)
{
 if(i<n)
 {
 if(str[i]==' ')
 {
 cnt++;
 }
 i=n;
 for(j=n+cnt;j>=0;j--)
 {
 printf("%c",str[j]);
 }

 }
 else
 {
 printf("%c",str[i]);
 }
}
getch();
}