#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab6_ex_1();
int lab6_ex_2();
int lab6_ex_3();
int lab6_ex_4();
int lab6_ex_5();
int lab6_ex_6();


int lab6()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 5 Page!\n"
		"_____________________________\n"
		"1 - Count digits - Recursion\n"
		"2 - Odd/Even - Recursion\n"
		"3 - Print Series - Recursion\n"
		"4 - Print Series Reverse - Recursion\n"
		"5 - Print Series Peramid - Recursion\n"
		"6 - Print Series Peramid Reverse - Recursion\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab6_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab6_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab6_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab6_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab6_ex_5();
	}

	if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		lab6_ex_6();
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
		return lab6();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab6_ex_1()
{
	
	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

int lab6_ex_2()
{

	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

int lab6_ex_3()
{

	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

int lab6_ex_4()
{

	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

int lab6_ex_5()
{

	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

int lab6_ex_6()
{

	printf("\n");
	system("pause");
	return lab6();
}

//////////////////////////////////////////////////////////////////

