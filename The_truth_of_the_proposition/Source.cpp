#include<stdio.h>
#include <string.h>



int main()
{
	struct charstr
	{
		char Letters[4];
	}str;

	printf("InPut : ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%s",&str.Letters[i]);
		printf("%s", str.Letters[i]);
	}

	
	/*if (ch.Letters[0] == 54 || ch.Letters[1] == 54)
	{
		printf("T");
	}*/
	return 0;
}