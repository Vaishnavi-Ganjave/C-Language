/* Q8. write a program which accept sentence from user and print number of words from that sentence.
Ownwer Name: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,count=1;
	printf("please enter a sentence: ");
	printf("string is %s:",str);
	fgets(str,sizeof(str),stdin);

	 for(i=0;str[i]!='\0';i++)
	 {
		 if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
		 {
			
			 count++;
		 }
	 }
	 printf("total no of words in sentence is : %d",str,count);
	  printf("%d",str[i]);
	 getch();
}
