/*
Q26.Write a C program which accept two strings from user and compare only first N characters of two
strings. If both strings are equal till first N characters then return 0 otherwise return difference
between first mismatch character.
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],str1[100];
	int i,flag=0,N,j=0;
	printf("Enter the first string: ");
	fgets(str,sizeof(str),stdin);
	printf("Enter the first string: ");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the n:");
		scanf("%d",& N);
	
	
for(i=0;str[i]!='\n' &&str[j]!='\n';i++,j++)

{
	if(i<N && j<N)
	{

 if(str[i]!=str1[j])
  {
	 flag=1; 
  }
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