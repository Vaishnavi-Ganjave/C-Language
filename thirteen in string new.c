/* Q13.write c program which accept sentence from user and print number of white spaces from that sentence.
Owner: Ganjave Vaishnavi
Batch: PPA9
*/


//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i=0,count=0;
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("string is :%s",str);
	for(i=0;str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			count++;
	}
		
	}
	printf("white spaces in sentence is : %d",count);
	
	getch();
}