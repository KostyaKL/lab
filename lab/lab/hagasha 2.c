#include <stdio.h>
#include <stdlib.h>

int h2_ex1();
int h2_ex2();
int h2_ex3();
int h2_ex4();
int h2_ex5();



int hagasha_2()
{
	int select = 0, i, all_Ex_in_loop = 0;
	system("cls");
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
		if (scanf("%d", &all_Ex_in_loop) == 1)
			do
			{
				for (i = 1; i <= 5; i++)
					printf("Ex%d--->%d\n", i, i);
				printf("EXIT-->0\n");
				do {
					select = 0;
					printf("please select 0-5 : ");
					scanf("%d", &select);
				} while ((select<0) || (select>5));
				switch (select) {
				case 1: h2_ex1(); break;
				case 2: h2_ex2(); break;
				case 3: h2_ex3(); break;
				case 4: h2_ex4(); break;
				case 5: h2_ex5(); break;
				}
			} while (all_Ex_in_loop && select);
			return main();
}

///////////////////////////////////////////////////////////////

int h2_ex1()
{
	return 1;
}

///////////////////////////////////////////////////////////////

int h2_ex2()
{
	return 1;
}

///////////////////////////////////////////////////////////////

int h2_ex3()
{
	return 1;
}

///////////////////////////////////////////////////////////////

int h2_ex4()
{
	return 1;
}

///////////////////////////////////////////////////////////////

int h2_ex5()
{
	return 1;
}