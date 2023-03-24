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
	int i=0;
	int count=1;
	int count1=0;

	printf("please enter a sentence: ");
	fgets(str,sizeof(str),stdin);
	printf("string is : %s",str);
	i=0;
	 while(str[i]!='\0')
	 {
		 while(str[i]=='_')
		 {
			
			 i++;
		 }
		 count=i;
		 if(str[i]=='_' && str[i]=='\t' &&  str[i]=='\n')
		 {
			
			i++; 
		 }
		 count=i-1;
	 
	 while(count1>=count && str[count1]!='\0')
	 {
	count--;
	 }
	 }
	  printf("%d",str[count1]);
	  count++;
	 
	 getch();
}




 

