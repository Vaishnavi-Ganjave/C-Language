/*Q14. write c program which accept sentence from user and print number of words of even and odd length from the sentence.
Owner: Ganjave Vaishnavi
Batch: PPA9
*/

//solution: 

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0,evencount=0;
	int	oddcount=0;
	int count=0;
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("string is: %s",str);

	while(str[i]!= '\n')
	{ 
		while(str[i]==' ')
		{
		i++;
		}
	count=0;
	while(str[i]!=' ' && str[i]!='\n')
	{
		count++;
		i++;
	}
		if(count % 2==0)
		{
			evencount++;
i++;
		}
		else if(count % 2 !=0)
		{
			oddcount++;
		}
	}
		printf("even numbers in string is :%d\n",evencount);
		printf("odd numbers in string is:%d\n",oddcount);
		
	getch();
}