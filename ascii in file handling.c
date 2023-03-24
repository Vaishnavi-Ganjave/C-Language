
// Ascii values from -127 to 128

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char i;
	FILE *fp = NULL;
	char s[20];
	fp = fopen("D:\\VaishnaviG.txt","w");
	if(fp == NULL)
	{
		printf("file not created\n");
		return EXIT_FAILURE;
	}

	else
	{
		printf("file open successfully\n");
		fprintf(fp, "\n" );
		for(i= -127; i<= 128; i++)
		{
			fprintf(fp, "%d = %c\n", i,i);
		}
		getch();
		return EXIT_SUCCESS;
	}
	return 0;
}
