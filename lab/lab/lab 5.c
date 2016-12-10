#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab5_ex_1();
int lab5_ex_2();
int lab5_ex_3();
int lab5_ex_4();
int lab5_ex_5();
int lab5_ex_6();

int lab5()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 5 Page!\n"
		"_____________________________\n"
		"1 - 7 Modulu\n"
		"2 - Number if Numbers\n"
		"3 - Trend of Numbers\n"
		"4 - Trend of Numbers 2\n"
		"5 - Supremum\n"
		"6 - Fibonacci\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab5_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab5_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab5_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab5_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab5_ex_5();
	}

	if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		lab5_ex_6();
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
		return lab5();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab5_ex_1()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_2()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_3()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_4()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_5()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_6()
{

	printf("\n");
	system("pause");
	return lab5();
}
