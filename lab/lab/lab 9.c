#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab9_ex_1();
int lab9_ex_2();
int lab9_ex_3();
int lab9_ex_4();



int lab9()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 9 Page!\n"
		"_____________________________\n"
		"1 - ---\n"
		"2 - ---\n"
		"3 - ---\n"
		"4 - ---\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab9_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab9_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab9_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab9_ex_4();
	}

	if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	if (strcmp(drill_num, "quit") == 0)
	{
		exit(0);
	}

	else
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return lab9();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab9_ex_1()
{
	
	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int lab9_ex_2()
{

	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int lab9_ex_3()
{

	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int lab9_ex_4()
{

	printf("\n");
	system("pause");
	return lab9();
}

