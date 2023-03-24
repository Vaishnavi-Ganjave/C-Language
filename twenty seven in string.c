/*
Q27.Write a C program which accept two strings from user and compare two strings without case
sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch
character.
Owner Name:Ganjave Vaishnavi
Batch: PPA9
*/


//solution:
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],str1[50]
;
int i=0,j=0,flag=0,n;
printf("please enter first string\n");
fgets(str,sizeof(str),stdin);
printf("please enter second string\n");
fgets(str1,sizeof(str1),stdin);
while(str[i]!='\n' || str1[i]!='\n')
{
flag=0;
if(str[i]>64 && str[i]<92)
{
str[i]=str[i]+32;
if(str[i]!=str1[j])
flag=1;
break;
}
else if(str[i]>96 && str[i]<124)
{
str[i]=str[i]-32;
if(str[i]!=str1[j])
flag=1;
break;
}
i++;
j++;
}
if(flag==1)
{
printf("the string are not same\n");
}
else
{
printf("The strings are same");
}
getch();
}