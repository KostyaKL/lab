/*
Assigned by:
Student 1: Melinda Levi ID:201310356
Student 2: Kostya Lokshin ID:310765821
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//declaration of functions:
void h3_ex1(); //function for excercise 1
void sort_even_odd(int*, int);

void h3_ex2(); //function for excercise 2
int num_parts_sum(int);

void h3_ex3(); //function for excercise 3
int part(int*, int, int);
void q_srt(int*, int, int);
int* mrg_arr(int*, int*, int, int,int*);

void h3_ex4(); //function for excercise 4
int arr_common(int*, int*, int, int, int);
int b_srch(int*, int, int);

void h3_ex5(); //function for excercise 5

int* input_arry_dyn(int*); // function to define an array, its size and its members
void swaper(int*, int*);
int abso(int);



int hagasha_3()
{
	int select = 0, i, all_Ex_in_loop = 0;
	/*
	select - value to choose an exercise to display
	i - index to print the menu
	all_ex_in_loop - value to choose if the program will return to main menu at the end of an exersice or it will exit
	*/
	system("cls");
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf("%d", &all_Ex_in_loop) == 1) // determin if the value for loop condition is a number, if not exit the program
		do
		{
			system("cls");
			printf("Choose exercise number: \n");
			for (i = 1; i <= 5; i++)//loop to print the main menu
				printf("Ex%d--->%d\n", i, i);
			printf("\nEXIT-->0\n\n");
			do {
				select = 0;
				printf("please select 0-5 : ");
				scanf("%d", &select);
			} while ((select < 0) || (select > 5));//loop to get a correct input from the user to choose the exercise to show
			printf("\n");
			switch (select) {//main menu switch case
			case 1:	h3_ex1();//calling the function for ex 1
				break;
			case 2: h3_ex2();//calling the function for ex 2
				break;
			case 3: h3_ex3();//calling the function for ex 3
				break;
			case 4: h3_ex4();//calling the function for ex 4
				break;
			case 5: h3_ex5();//calling the function for ex 5
				break;
			}
		} while (all_Ex_in_loop && select); //determin if the program will return to main menu at the end of an exersice or it will exit
		return main();
}

///////////////////////////////////////////////////////////////

void h3_ex1()
{
	int *arr,size,i;
	arr=input_arry_dyn(&size);
	sort_even_odd(arr, size);

	for (i = 0;i < size;i++)
		printf("%d, ", *(arr + i));

	free(arr);
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

void sort_even_odd(int*a, int s)
{
	int first = 0, last = s - 1,i=0;

	for (i = 0;i < s;i++)
	{
		if (*(a + i) % 2)
		{
			swaper(a + i, a + first);
			first++;
		}
	}
}

///////////////////////////////////////////////////////////////

void h3_ex2()
{
	int num,_11_div;
	printf("Enter a positive integer: ");
	do
	{
		scanf("%d", &num);
		if(num<0)
			printf("Enter a positive integer: ");
	} while (num < 0);

	_11_div = num_parts_sum(num);
	_11_div = abso(_11_div);
	printf("The sum of %d parts is %d\n", num, _11_div);

	while (_11_div / 10 > 0)
	{
		_11_div = num_parts_sum(_11_div);
		_11_div = abso(_11_div);
	}
	if (_11_div)
		printf("%d is NOT devidable by 11\n", num);
	else
		printf("%d is devidable by 11\n",num);

	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////
int num_parts_sum(int num)
{
	int dig1, dig2;
	if (num / 10 == 0)
		return num;
	if (num / 100 == 0)
		return num % 10 - num / 10;
	dig1 = num % 10;
	dig2 = (num / 10) % 10;
	return num_parts_sum(num / 100) + dig1 - dig2;
}

///////////////////////////////////////////////////////////////

void h3_ex3()
{
	int *arr_a,*arr_b, size_a,size_b,*arr_mrg,size_mrg,i,soi;
	arr_a = input_arry_dyn(&size_a);
	arr_b = input_arry_dyn(&size_b);

	srand(time(NULL));

	arr_mrg = mrg_arr(arr_a, arr_b, size_a, size_b,&size_mrg);
	
	for (i = 0;i < size_mrg;i++)
		printf("%d, ", *(arr_mrg + i));
	printf("\nIs an array of %d members\n", size_mrg);

	free(arr_a);
	free(arr_b);
	free(arr_mrg);
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

int* mrg_arr(int*a, int*b, int n, int m,int *ret_size)
{
	int *mrg, size = n, i = 0, j = 0,k = 0;
	if (m < n)
		size = m;
	mrg = (int*)malloc(size * sizeof(int));
	q_srt(a, 0, n - 1);
	q_srt(b, 0, m - 1);

	while (i < n && j < m)
		if (*(a + i) < *(b + j))
			i++;
		else if (*(a + i) > *(b + j))
			j++;
		else if (*(a + i) == *(b + j))
		{
			*(mrg + k) = *(a + i);
			i++;
			j++;
			k++;
		}
	mrg = (int*)realloc(mrg, k * sizeof(int));
	*ret_size = k;
	return mrg;
}

///////////////////////////////////////////////////////////////

void q_srt(int*a, int first, int last)
{
	int pos;
	if (first < last)
	{
		pos = part(a, first, last);
		q_srt(a, first, pos - 1);
		q_srt(a, pos + 1, last);
	}

}

///////////////////////////////////////////////////////////////

int part(int*a, int left, int right)
{
	int first = left, pivot, pos;
	pos = rand() % (right - left + 1) + left;
	swaper(a + first, a + pos);
	pivot = *(a + first);

	while (left < right)
	{
		while (*(a + right) > pivot)
			right--;
		while ((left < right) && *(a + left) <= pivot)
			left++;
		if (left < right)
			swap(a + left, a + right);
	}
	pos = right;
	*(a + first) = *(a + pos);
	*(a + pos) = pivot;
	return pos;
}

///////////////////////////////////////////////////////////////

void h3_ex4()
{
	int *arr_a, *arr_b, size_a, size_b, size_common, com_arr, i;
	arr_a = input_arry_dyn(&size_a);
	arr_b = input_arry_dyn(&size_b);
	size_common = size_b;
	if (size_b > size_a)
		size_common = size_a;
	com_arr = arr_common(arr_a, arr_b, size_a, size_b, size_common);
	if (com_arr)
		printf("Array B is part of array A\n");
	else
		printf("Array B is NOT part of array A\n");
	
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

int arr_common(int *a, int *b, int s_a, int s_b, int s_c)
{
	int i,key,flag=1;
	if (s_c > s_a)
		return 0;
	for (i = 0;i < s_c && flag == 1;i++)
	{
		key = *(b + i);
		flag = b_srch(a, s_a, key);
	}
	return flag;
}

///////////////////////////////////////////////////////////////

int b_srch(int *a, int s, int k)
{
	int i,first=0,last=s-1,mid;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (*(a + mid) == k)
			return 1;
		if (k < *(a + mid))
			last = mid-1;
		else if (k > *(a + mid))
			first = mid+1;
	}
	return 0;
}

///////////////////////////////////////////////////////////////

void h3_ex5()
{
	char str[30] = { 0 }, key;
	printf("Enter your string: ");
	scanf("%s", str);
	printf("Enter the letter you want to remove from the string: ");
	scanf("%s", &key);



	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

void rmv_chr(char *str, int key)
{
	int i,j,size,count=0;
	size = sizeof(str) / sizeof(char);
	for (i = 0;i < size;i++)
		if (*(str + i) == key)
		{
			for (j = i;j < size;j++)
				swaper(str + j, str + j + 1);
			count++;
		}
	for (i = size - count;i < size;i++)
		*(str + i) = 0;
}

///////////////////////////////////////////////////////////////

int* input_arry_dyn(int *s)
{
	int *a,i;
	printf("Enter the size of your array: ");
	do
	{
		scanf("%d", s);
		if (*s < 1)
			printf("Enter a number bigger than 1\n");
	} while (*s < 1);
	a = (int*)malloc(*s * sizeof(int));

	printf("Enter %d numbers:\n", *s);
	for (i = 0;i < *s;i++)
		scanf("%d", (a + i));
	return a;
}

////////////////////////////////////////////////////////////////

void swaper(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

////////////////////////////////////////////////////////////////

int abso(int a) //function to return an absolut value of a number
{
	if (a >= 0)//if the number is positive return the number
		return a;
	else
		return a*(-1);//if the number is negative, turn it to positive by multipling by -1 and return the positive number
}