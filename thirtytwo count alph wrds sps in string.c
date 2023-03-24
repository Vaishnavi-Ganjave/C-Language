/* Q32.write a c program to count number of alphabets, spaces and words in given string.
Owner Name:Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int alpha=0;
	int  words=0;
	int sps=0;
	int i=0,count=0;
	printf("\ncount total no of alphabets,words and spaces: \n");
	printf("enter input string is: ");
	fgets(str, sizeof(str), stdin);

	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z' ||
			str[i]>='A' && str[i]<='Z')
		{
			alpha++;
		}
		if(str[i]==' ' && str[i+1]!=' ')
		{
			count++;
		}
		
		i++;
	}
	printf("no of alphabets in string is:%d\n",alpha);
	printf("no of words in string is: %d\n",words);
	printf("no of spaces in string is: %d\n",sps);

	getch();
}

