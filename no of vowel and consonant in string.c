/* Q5. write a program to count count of number of vowels and numbers of consonants in the given string.
Owner: Ganjave Vaishnavi
Batch:PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
	int v=0,c=0;

	printf("string is %s:",str);
	fgets(str, sizeof(str), stdin);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' ||
			str[i]=='i' || str[i]=='o' ||
			str[i]=='u' || str[i]=='A' ||
			str[i]=='E' || str[i]=='I' ||
			str[i]=='O' || str[i]=='U' )
		{
			v++;
		}
		else 
			c++;
		}
	
			printf("vowels are : %d\n",v);
			printf("consonants are :%d",c);
			printf("%c",str[i]);
			getch();
	}
