#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int misc1();
int misc2();




int misc()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to Misc Page!\n"
		"_____________________________\n"
		"1 - Hanoy Towers\n"
		"2 - 10 Coin Change\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		misc1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		misc2();
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
		return misc();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int misc1()
{
	int num;
	printf("Enter the amount of coins: ");
	scanf("%d", &num);
	hanoy(num,0,0,0);

	printf("\n");
	system("pause");
	return misc();
}

//////////////////////////////////////////////////////////////////

int misc2()
{

	printf("\n");
	system("pause");
	return misc();
}

//////////////////////////////////////////////////////////////////

int hanoy(int num, int p1, int p2, int p3)
{
	if (p1 == 1)
		return 1;

}