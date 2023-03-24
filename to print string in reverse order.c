/* Q4. write program to accept string and print it in reverse order.
Owner: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:



#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	char rev[100];
	int i,count=0;
	printf("please enter a string to print its reverse: ");
	//scanf("%s",str);
	gets(str);
	printf("string is %s: ",str);
	fgets(str,sizeof(str),stdin);

	for(i=0;i<count-1;i++)
	{
		count++;
	}
	if(rev!='\0')
	{
		rev[i]=str[i];
	}
	printf("the reverse string is :%s",rev);
	getch();
}

