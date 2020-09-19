#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <dos.h>  
#include <stdio.h> 
#include <string.h> 


int main()
{
	struct charstr
	{
		char Letters[4];
		int i;
	}str;

	printf("InPut : ");
	for (str.i = 0; str.i < 4; str.i++)
	{
		scanf_s("%s",&str.Letters[str.i]);
		getchar();
		
	}
printf("%s", str.Letters[0]);
	
	/*if (ch.Letters[0] == 54 || ch.Letters[1] == 54)
	{
		printf("T");
	}*/
	return 0;
}

/// <summary>
/// ////////////////////
/// </summary>
/// <param name=""></param>
void inputpassword(void);

void outputpassword(void);

struct pass
{
	char password[9];
	int check;
}gotoo;



int main()
{

	inputpassword();
	printf("Please push Enter .\n");
	_getch();
	outputpassword();

	_getch();
}

void inputpassword()
{
	printf("Enter Password: ");

	for (gotoo.check = 0; gotoo.check < 8; gotoo.check++) {


		gotoo.password[gotoo.check] = _getch();


		printf("*");
	}
	gotoo.password[gotoo.check] = '\0';
	printf("\n");
}

void outputpassword()
{
	printf("Show password: ");
	if (gotoo.password[gotoo.check] != '\0' || gotoo.password[gotoo.check] != 'x') {
		for (gotoo.check = 0; gotoo.password[gotoo.check] != '\0'; gotoo.check++)
			printf("%c", gotoo.password[gotoo.check]);
	}

}
