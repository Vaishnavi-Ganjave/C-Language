


#include<stdio.h>
#include<conio.h>
const int a =10;
void main()
{
	
	int *p= &a;
	printf("%d\n",a);
	printf("%d\n",*p);
	(*p++);
	printf("%d\n",a);
	printf("%d\n",*p);
	
	getch();


}
