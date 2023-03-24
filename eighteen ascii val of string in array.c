/* Q18. write c program to input a string & store their Ascii values in an integer array.
Owner Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int n,count=0;
	printf("enetr no of chara present in string: ");
	scanf("%d",&n);
	printf("enter a string: ",n);
	scanf("%s",str);

	while(count<n)
	{
		printf("ascii values of %c=%d\n",str[count],str[count]);
		count++;
	}

getch();
}
