#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab7_ex_1();
int lab7_ex_2();
int lab7_ex_3();
int lab7_ex_4();
int lab7_ex_5();



int lab7()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 7 Page!\n"
		"_____________________________\n"
		"1 - Bigest num - Recursion\n"
		"2 - Smalets num - Recursion\n"
		"3 - Smaler than K - Recursion\n"
		"4 - x^n - Recursion\n"
		"5 - Decimal to binary - Recursion\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab7_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab7_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab7_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab7_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab7_ex_5();
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

int lab7_ex_1()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_2()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_3()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_4()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_5()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

