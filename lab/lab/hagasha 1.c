#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int hagasha_1()
{
	int num_sel, on = 1, count=1;
	while (on)
	{
		system("cls");
		printf("Yossi's Telemarketing costumer service!\n"
			"__________________________________________\n"
			"Please enter number in the range 1-5: ");
		scanf("%d", &num_sel);
		switch (num_sel)
		{
		case 1:
			op1();
			break;
		case 2:
			op2();
			break;
		case 3:
			op3();
			break;
		case 4:
			op4(count);
			break;
		case 5:
			op5();
			break;
		default:
			other();
		}
		count++;
	}
		return main();
	}

int op1()
{
	system("cls");
	printf("Disconnecting\n\n");
	system("pause");
	return 1;
}

int op2()
{
	return 1;
}

int op3()
{
	char user_c;
	system("cls");
	printf("Are you sure you want to cancel the order???\n"
		"Please enter one char: ");
	scanf(" %c", &user_c);
	if (user_c == 89 || user_c == 121)
	{
		printf("Canceled\n\n");
		system("pause");
		exit(1);
	}
	return 1;

}

int op4(int count)
{
	system("cls");
	printf("Your position in queue is %d\n\n", count);
	system("pause");
	return 1;
}

int op5()
{
	exit(1);
}

int other()
{
	system("cls");
	printf("Wrong input\n\n");
	system("pause");
	return 1;
}