#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>



int main()
{
	struct charstr
	{
		char Letters[4];
	}str;

	printf("InPut : ");
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%s",&str.Letters[i]);
		getchar();
		
	}
printf("%s", str.Letters[0]);
	
	/*if (ch.Letters[0] == 54 || ch.Letters[1] == 54)
	{
		printf("T");
	}*/
	return 0;
}