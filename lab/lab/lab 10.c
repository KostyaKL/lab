#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef char* verylong;

int lab10_ex_1();
char com_ch(char *);

int lab10_ex_2();
void ch_sum(char *, char *);


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
	char str[30] = { 0 };
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
	char a[30] = { 0 }, b[30] = { 0 }, *sum;
	printf("Enter a number: ");
	scanf("%s", a);
	printf("Enter a number: ");
	scanf("%s", b);

	//sum = (char*)calloc(30, sizeof(char));
	ch_sum(a, b);
	printf("%s", a);
	//sum = (char*)realloc(a, strlen(a)*sizeof(char));
	//printf("%s", sum);


	//free(sum);
	printf("\n");
	system("pause");
	return lab10();
}

/////////////////////////////////////////////////////////////////////

void ch_sum(char *a, char *b)
{//48-57
	
	int ret1=0,ret2=0;
	int *a1, *a2, s1, s2;
	int i;
	s1 = strlen(a);
	s2 = strlen(b);
	a1 = (int*)calloc(s1, sizeof(int));
	a2 = (int*)calloc(s2, sizeof(int));

	for (i = 0;i < s1;i++)
		*(a1 + i) = (*(a + i)-48);
	for (i = 0;i < s2;i++)
		*(a2 + i) = (*(b + i)-48);

	for (i = 0;i < s1;i++)
		ret1 = ret1 * 10 + *(a1 + i);
	printf("\n");
	for (i = 0;i < s2;i++)
		ret2 = ret2 * 10 + *(a2 + i);
	
	ret1 += ret2;
	ret2 = 0;
	for (i = 0;ret1 > 0;i++, ret1 /= 10)
		ret2 = ret2 * 10 + ret1 % 10;

	for (i = 0;ret2 > 0;ret2 /= 10, i++)
		*(a + i) = (ret2 % 10)+48;

	free(a1);
	free(a2);
}
