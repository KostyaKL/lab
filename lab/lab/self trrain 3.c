#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int st3_ex1();
int st3_ex2();
int st3_ex3();
int st3_ex4();
int Nput(int);
int pser();

int self_train3()
{
	char drill_num[6];
	system("cls");
	printf("Welcome to Self Train 3 Page!\n"
		"_____________________________\n"
		"1 - Plus Series\n"
		"2 - Modulu\n"
		"3 - Series Trend\n"
		"4 - Odd/Even Arrengment\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		st3_ex1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		st3_ex2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		st3_ex3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		st3_ex4();
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

int st3_ex1()
{
	int flag;
	flag = pser();
	if (flag)
		printf("1\n\n");
	else
		printf("0\n\n");

	printf("\n");
	system("pause");
	return self_train3();
}

///////////////////////////////////////////////////////////////////////////

int st3_ex2()
{


	printf("\n");
	system("pause");
	return self_train3();
}

///////////////////////////////////////////////////////////////////////////

int st3_ex3()
{


	printf("\n");
	system("pause");
	return self_train3();
}

///////////////////////////////////////////////////////////////////////////

int st3_ex4()
{


	printf("\n");
	system("pause");
	return self_train3();
}

///////////////////////////////
int Nput(int num)
{
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num < 0)
			printf("You have entered negative number, Try again\n\n");
	} while (num < 0);

	return num;
 }

//////////////////////////////////////////////

int pser()
{
	int num[4], i, diff[3], flag;
	for (i = 0;i < 4;i++)
	{
		num[i] = Nput(num[i]);
	}

	for (i = 0;i < 3;i++)
	{
		diff[i] = num[i + 1] - num[i];
	}
	for (i = 0;i < 2;i++)
	{
		flag = diff[i + 1] - diff[i];
		if (flag)
			return 0;
	}
	return 1;
}

