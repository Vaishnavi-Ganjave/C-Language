/* Q1.write c program to accept string with multiple spaces from user and print as it is.
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

 #include<stdio.h>
#include<conio.h>
void main()
{
	char name[100];
	printf("please enter name:  ");
	//scanf("%s",name);
	//gets(name);
	fgets(name,sizeof(name),stdin);

	printf("%s",name);
	getch();
}