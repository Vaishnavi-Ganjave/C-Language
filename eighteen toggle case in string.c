/* Q18. write a c program which toggles the case of a string.
Eg: Input string: technOrbit Infosystems.      Output string: TECHNoRBIT iNFOSYSTEMS.
Owner Name:Ganjave Vaishnavi
Batch: PPA9
*/

//solution:

#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;

	printf("enter a string: ");
	//printf("string is: ",str);
	fgets(str, sizeof(str), stdin);
	printf("string is: ",str);

	for(i=0; str[i]!='\0'; i++)
	{

if(str[i]>=65 && str[i]<=90)
{
	str[i]=str[i]+32;
}
else if(str[i]>=97 && str[i]<=122)
{
	str[i]=str[i]-32;
}
	}
	printf("string in toggle case:%s\n",str);
	getch();
}