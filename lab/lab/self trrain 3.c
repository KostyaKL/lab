#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int self_train3()
{
	char drill_num[6];
	system("cls");
	printf("Welcome to Self Train 3 Page!\n"
		"_____________________________\n"
		"1 - Count digits\n"
		"2 - Revers digits\n"
		"3 - Revers Digits Effitiant\n"
		"4 - Prime Number\n"
		"5 - Longest Flush\n"
		"6 - Reduction\n\n"
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
		return self_train3();
	}
	return main();

}

///////////////////////////////////////////////////////////////////////////