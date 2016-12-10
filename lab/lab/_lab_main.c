#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char lab_name[5]="";

	system("cls");
	printf("Welcome to Lab select page!\n");
	printf("______________________________________\n");
	printf("Choose which lab you want to display:\n");
	printf("1.1 - Lab1\n"
		   "1.2 - Lab2\n"
		   "1.3 - Lab3-4\n"
		   "1.5 - Lab5\n\n"
		   "2.1 - Self Train 1\n"
		   "2.2 - Self Train 2\n"
		   "2.3 - Self Train 3\n\n"
		   "3.1 - Hagasha 1\n\n"
		   "4 - Ascii\n"
		   "5 - Test\n"
		   "6 - Console commands\n"
		   "7 - Pause\n\n"
		   "Exit - Quit\n");
	printf("Enter your choise: ");

	scanf("%s", &lab_name);
	printf("\n");

	
	if (strcmp(lab_name, "1.1") == 0)
	{
		printf("\n");
		lab1();
	}

	else if (strcmp(lab_name, "1.2") == 0)
	{
		printf("\n");
		lab2();
	}

	else if (strcmp(lab_name, "1.3") == 0)
	{
		printf("\n");
		lab3_4();
	}

	else if (strcmp(lab_name, "1.5") == 0)
	{
		printf("\n");
		lab5();
	}

	else if (strcmp(lab_name, "2.1") == 0)
	{
		printf("\n");
		self_train1();
	}

	else if (strcmp(lab_name, "2.2") == 0)
	{
		printf("\n");
		self_train2();
	}

	else if (strcmp(lab_name, "2.3") == 0)
	{
		printf("\n");
		self_train3();
	}

	else if (strcmp(lab_name, "3.1") == 0)
	{
		printf("\n");
		hagasha_1();
	}

	else if (strcmp(lab_name, "quit") == 0)
	{
		exit(0);
	}

	else if (strcmp(lab_name, "4") == 0)
	{
		printf("\n");
		ascii();
	}

	else if (strcmp(lab_name, "5") == 0)
	{
		printf("\n");
		testim();
	}

	else if (strcmp(lab_name, "6") == 0)
	{
		printf("\n");
		printf("Enter console command: ");
		cmd();
	}

	else if (strcmp(lab_name, "7") == 0)
	{
		printf("\n");
		system("pause");
	}

	else
	{
		printf("You have enterd invalid lab name\n\n");
		system("pause");
		return main();
		
	}

	return 0;
}

//////////////////////////////////////////////////////////////////////

int ascii()
{
	char ch1, ch2,ch3,ch4,ch5,ch6;

	ch1 = -128;
	ch2 = ch1 + 1;
	ch3 = ch2 + 1;
	ch4 = ch3 + 1;
	ch5 = ch4 + 1;
	ch6 = ch5 + 1;

	while (ch1 < 126)
	{
		printf("%c - %d			%c - %d			"
			   "%c - %d			%c - %d			"
			   "%c - %d			%c - %d\n", ch1,ch1,ch2,ch2,ch3,ch3,ch4,ch4,ch5,ch5,ch6,ch6);
		ch1 += 6;
		ch2 += 6;
		ch3 += 6;
		ch4 += 6;
		ch5 += 6;
		ch6 += 6;
	}

	system("pause");
	return main();

}

////////////////////////////////////////////////////////////////////////////

int testim ()
{
	int k;
	scanf("%d", &k);
	switch (k)
	{
	case 5: printf("five\n");
		//break;
	case 4: printf("four\n");
		//break;
	case 3: printf("three\n");
		//break;
	case 2: printf("two\n");
		//break;
	case 1: printf("one\n");
		//break;
	case 0: printf("zero\n");
		break;
	default: printf("no\n");
	}

	printf("\n");
	system("pause");
	return main();
}

////////////////////////////////////////////////////////////////////////////

int cmd()
{
	char cmmd[50];
	scanf("%s", &cmmd);
	if (strcmp(cmmd, "quit") == 0)
	{
		return main();
	}

	if (strcmp(cmmd, "clear") == 0)
	{
		system("cls");
		return cmd();
	}

	printf("\n");
	system(cmmd);
	printf("\n");
	return cmd();
}