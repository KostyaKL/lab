#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab10_ex_1();
char com_ch(char *);

int lab10_ex_2();


int lab10()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 10 Page!\n"
		"_____________________________\n"
		"1 - Common char\n"
		"2 - Char sum\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab10_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab10_ex_2();
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
		return lab10();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab10_ex_1()
{
	char str[100] = { 0 };
	printf("Enter your string: ");
	scanf("%s", str);

	printf("The most common char is %c", com_ch(str));

	printf("\n");
	system("pause");
	return lab10();
}

//////////////////////////////////////////////////////////////////

char com_ch(char *str)
{
	int size = strlen(str), *ca, i, ret = 0, tmp = 0;
	ca = (int*)calloc(26, sizeof(int));
	for (i = 0;i < size;i++)
		*(ca + *(str + i) - 97) += 1;

	tmp = *ca;
	for (i = 0;i < 25;i++)
		if (tmp >= *(ca + i));
		else
		{
			tmp = *(ca + i);
			ret = i;
		}

	free(ca);

	printf("\n\n");
	return ret+97;
}

//////////////////////////////////////////////////////////////////

int lab10_ex_2()
{

	printf("\n");
	system("pause");
	return lab10();
}
