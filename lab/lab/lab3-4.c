#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int lab3_4_ex_1();
int lab3_4_ex_2();
int lab3_4_ex_3();
int lab3_4_ex_4();
int lab3_4_ex_5();
int lab3_4_ex_6();
int lab3_4_ex_7();

int lab3_4()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 3-4 Page!\n"
		"_____________________________\n"
		"1 - 7 Modulu\n"
		"2 - Number if Numbers\n"
		"3 - Trend of Numbers\n"
		"4 - Trend of Numbers 2\n"
		"5 - Supremum\n"
		"6 - Fibonacci\n"
		"7 - Binary to Decimal\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab3_4_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab3_4_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab3_4_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab3_4_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab3_4_ex_5();
	}

	if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		lab3_4_ex_6();
	}

	if (strcmp(drill_num, "7") == 0)
	{
		printf("\n");
		lab3_4_ex_7();
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
		return lab3_4();
	}
	return main();

}

////////////////////////////////////////////////

int lab3_4_ex_1()
{
	int num1=1,md, i;
	for (i = 1;i < 100;i++)
	{
		md = num1 % 7;
		if (!md)
		{
			printf("%d, ", num1);
		}
		num1++;
	}

	printf("\n");
	system("pause");
	return lab3_4();
}

////////////////////////////////////////////////////

int lab3_4_ex_2()
{

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////

int lab3_4_ex_3()
{

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////

int lab3_4_ex_4()
{

	printf("\n");
	system("pause");
	return lab3_4();
}

////////////////////////////////////////////////////////

int lab3_4_ex_5()
{

	printf("\n");
	system("pause");
	return lab3_4();
}

///////////////////////////////////////////////////////

int lab3_4_ex_6()
{

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////////

int lab3_4_ex_7()
{

	printf("\n");
	system("pause");
	return lab3_4();
}