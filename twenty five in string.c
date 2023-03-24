/*
Q25.Write a C program which accept two strings from user and compare two strings. If both strings are
equal then return 0 otherwise return difference between first mismatch character.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],str1[100];
	int i,flag=0;
	printf("Enter the first string: ");
	fgets(str,sizeof(str),stdin);
	printf("Enter the first string: ");
	fgets(str1,sizeof(str1),stdin);

	
	
for(i=0;str[i]!='\0' && str1[i]!='\0';i++)
{
	flag=0;
	
 if(str[i]!=str1[i])
  {
	 flag=1; 
  }
	
}
if(flag==1)
{
	printf("strings are not equal");
}
else
{
	printf("strings are  equal\n");
}
getch();
}