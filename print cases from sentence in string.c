/* Q12.write c program which accept sentence from user and print number of small letters,capital letters,spaces and digits from that sentence.
Owner Name: Ganjave Vaishnavi
Batch:PPA9
*/


//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0,sc=0,cc=0;
	int dg=0,sp=0;

	printf("enter a name: ");
	fgets(str, sizeof(str), stdin);
	printf("given string is %s\n",str);

	while(str[i]!='\n')
	{
		if(str[i]==' ')
		{
			sp++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			sc++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			cc++;
		}
		else if(str[i]>='1' && str[i]<='9')
		{
			dg++;
		}
		i++;
	}
	printf("no of small letters are: %d\n",sc);
	printf("no of capital letters are: %d\n",cc);
	printf("no of digits are: %d\n",dg);
	printf("no of spaces are: %d\n",sp);
	
	getch();
}

