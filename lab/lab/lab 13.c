#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int lab13_ex_1();





int lab13()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 13 Page!\n"
		"_____________________________\n"
		"1 - aaa\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab13_ex_1();
	}

	if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	if (strcmp(drill_num, "quit") == 0 || strcmp(drill_num, "0") == 0)
	{
		exit(0);
	}

	else
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return lab13();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab13_ex_1()
{

	printf("\n");
	system("pause");
	return lab13();
}

//////////////////////////////////////////////////////////////////

