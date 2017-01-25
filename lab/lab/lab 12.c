#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int lab12_ex_1();
int lab12_ex_2();
int lab12_ex_3();
int lab12_ex_4();




int lab12()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 12 Page!\n"
		"_____________________________\n"
		"1 - aaa\n"
		"2 - aaa\n"
		"3 - aaa\n"
		"4 - aaa\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab12_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab12_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab12_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab12_ex_4();
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
		return lab12();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab12_ex_1()
{
	
	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

int lab12_ex_2()
{

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

int lab12_ex_3()
{

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

int lab12_ex_4()
{

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////


