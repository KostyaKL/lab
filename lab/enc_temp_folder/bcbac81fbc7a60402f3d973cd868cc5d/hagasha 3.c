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
void sort_even_odd(int*, int);//finction to sort the array into two groups, even and odd numbers

void h3_ex2(); //function for excercise 2
int num_parts_sum(int);//function to return the sum of number digits while switching the sign (+/-)

void h3_ex3(); //function for excercise 3
int partition(int*, int, int);//function to sort the array arround a pivot number (smaller and bigger than the pivot)
void quick_sort(int*, int, int);// function to sort an array using partition each time sorting the tails left around the pivot
int* mrg_arr(int*, int*, int, int,int*);//function to produce a merged array of the same nubmers from two input arrays

void h3_ex4(); //function for excercise 4
int arr_common(int*, int*, int, int, int);//function to determine if array b is part of array a
int arr_common_r(int*, int*, int, int, int);//function to determine if array b is part of array a using a recursion
int binary_search(int*, int, int);//function for binary search for a specific number in an array

void h3_ex5(); //function for excercise 5
void remove_char(char*, char);

int* input_array_dyn(int*); // function to define an array, its size and its members, returns the size of the array by refrence
char* input_str_dyn();// function to get a dynamic input of a string from the user
void swaper(int*, int*);//function to swap the position of two number in an array - by refrence
void ch_swaper(char*, char*);//funcrion to swap the position of two chars in a strinf - by refrence
int abso(int);//function to return the absolute value of an input number



int hagasha_3()
{
	int select = 0, i, all_Ex_in_loop = 0;
	/*
	select - value to choose an exercise to display
	i - index to print the menu
	all_ex_in_loop - value to choose if the program will return to main menu at the end of an exersice or it will exit
	*/
	srand(time(NULL));//initialize random number generator (to be used later in the program)
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
	/*
	arr - a pointer for an array that will be inputed by the user
	size - the size of an array that the user will decied ( returned by refrence from input_array_dyn() function
	i - index
	*/
	arr=input_array_dyn(&size);//get an input of the array by the user using input_array_dyn() function
	sort_even_odd(arr, size);//sort the input array into odd and even numbers

	for (i = 0;i < size;i++)
		printf("%d, ", *(arr + i));//print the sorted array

	free(arr);//free the memory alocated for the array
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

void sort_even_odd(int*a, int size) //finction to sort the array into two groups, even and odd numbers
{
	int first = 0, last = size - 1,i=0;
	/*
	first - the index position of the first number in the array
	last - the index position of the last number in the array
	i - index
	*/



	while (first < last)// do as long as the lef index position is smaller than the right index position
	{
		while (abso(*(a + first)) % 2 == 1)//advance the left index position as long as the number is odd
			first++;
		while (abso(*(a + last)) % 2 == 0)//retract the right index position as long as the number is even
			last--;
		if (first < last)//if the number on the left is even and the number on the right is odd and the index of the left number is smaller from the index of the number on the right
						 //then swap the two numbers so the even number will be on the right and the odd number on the left
			swaper(a + first, a + last);
	}

	

	//for (i = 0;i < size;i++)//go through the array from its first to last numbers (once)
	//{
	//	if (*(a + i) % 2)//if the current number in the array is odd then swap it with the first number in the array
	//	{
	//		swaper(a + i, a + first);
	//		first++;// each time and odd number has been swaped advance the index of the first number
	//	}
	//}
}// complexitiy - O(n)

///////////////////////////////////////////////////////////////

void h3_ex2()
{
	int num,_11_div;
	/*
	num - input number from the user
	_11_div - parameter to sum the digitis of the number while swaping the sign (+/-)
	*/
	printf("Enter a positive integer: ");
	do
	{
		scanf("%d", &num);
		if(num<0)
			printf("Enter a positive integer: ");
	} while (num < 0);//make sure the number is entered by the user is positive

	_11_div = num_parts_sum(num);//calculate the sum of the digitis of the number while swaping the sign (+/-) using num_parts_sum() function
	_11_div = abso(_11_div);//return the absolute value of the outcome from num_parts_sum() function
	printf("The sum of %d parts is %d\n", num, _11_div);

	while (_11_div / 10 > 0)//apply the num_parts_sum() function untill the sum is 1 digit
	{
		_11_div = num_parts_sum(_11_div);
		_11_div = abso(_11_div);
	}
	if (_11_div)//if the 1 digit sum is diffrent from 0 the the number is not devidable by 11
		printf("%d is NOT devidable by 11\n", num);
	else
		printf("%d is devidable by 11\n",num);//if the 1 digit sum is equal to 0 the the number is devidable by 11

	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////
int num_parts_sum(int num)//function to return the sum of number digits while switching the sign (+/-)
{
	int dig1, dig2;
	/*
	dig1 and dig2 - parameters for two folowing digits of a number
	*/
	if (num / 10 == 0)//if the number is only one digit then return it as is
		return num;
	if (num / 100 == 0)//if the number is two digits then return the substruction of the two digits
		return num % 10 - num / 10;
	dig1 = num % 10;//first digit from the right
	dig2 = (num / 10) % 10;//second digit from the right
	return num_parts_sum(num / 100) + dig1 - dig2;//summon recursion of num_parts_sum() function while removing the first two digits from the right from the number
												  //and adding the first digit and substracting the second
}

///////////////////////////////////////////////////////////////

void h3_ex3()
{
	int *arr_a,*arr_b, size_a,size_b,*arr_mrg,size_mrg,i;
	/*
	arr_a - pointer to the first array for the user to input
	arr_b - pointer to the second array for the user to input
	size_a - the size of the first array - returned by refrence from input_array_dyn() function
	size_b - the size of the second array - returned by refrence from input_array_dyn() function
	arr_mrg - pointer to the merged array of the common numbers of array a and b
	size_mrg - the size of the new merged array
	i - index
	*/
	arr_a = input_array_dyn(&size_a);//get an input for array a by the user using input_array_dyn() function
	arr_b = input_array_dyn(&size_b);//get an input for array b by the user using input_array_dyn() function

	

	arr_mrg = mrg_arr(arr_a, arr_b, size_a, size_b,&size_mrg);//merge array a and b using the common number of the two arrays only
	
	for (i = 0;i < size_mrg;i++)//print the new merged array
		printf("%d, ", *(arr_mrg + i));
	printf("\nIs an array of %d members\n", size_mrg);//print the size of the new merged array

	free(arr_a);//free the memorry that was allocated for array a
	free(arr_b);//free the memorry that was allocated for array b
	free(arr_mrg);//free the memorry that was allocated for the merged array
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

int* mrg_arr(int*a, int*b, int n, int m,int *ret_size)//function to produce a merged array of the same nubmers from two input arrays
/*
a - pointer to array a
b - pointer to arary b
n - size of array a
m - size of array b
ret_size - the size of the new merged array to be returned by refrence
*/
{
	int *mrg, size = n, i = 0, j = 0,k = 0;
	/*
	mrg - pointer to the new merged array to be returned
	size - size of the new merged array - the size of the smallest array at maximum(size of array a by defult - asuming it is the smaller array)
	i - index for array a
	j - index for array b
	k - index for the merged array and a counter for how many numbers there is in the new array
	*/
	if (m < n)// if array b is smaller that array a then the size of the new array is the size of array b at maximum
		size = m;
	mrg = (int*)malloc(size * sizeof(int));//allocate memory for the new merged arry
	quick_sort(a, 0, n - 1);//sort arry a using quick sort - O(nlogn)
	quick_sort(b, 0, m - 1);//sort arry b using quick sort - O(mlogm)

	while (i < n && j < m)//go through both arrays, stop when you finished going trough one of the arrays
		if (*(a + i) < *(b + j))//if the smallest number in array a is smaller than the smalest number in array b then advance the index of array a
			i++;
		else if (*(a + i) > *(b + j))//if the smallest number in array a is smaller than the smalest number in array b then advance the index of array b
			j++;
		else if (*(a + i) == *(b + j))//if the number at index i of array a and the number at index j at array b are the same then write the number in the new array at index k
		{
			*(mrg + k) = *(a + i);
			i++;
			j++;
			k++;
		}
	if (k < size)//do only if the new size of the merged array is smaller from the original size that was assigned to it
		mrg = (int*)realloc(mrg, k * sizeof(int));// reallocate the merged array to a new memory in the correct minimal size that its needed
	*ret_size = k;//return the size of the new array by refrence
	return mrg;//return the pointer for the new merged array
}//complexity - O(nlogn + mlogm + n + m) = O(n(1+logn) + m(1+logm)) = O(nlogn + mlogm)

///////////////////////////////////////////////////////////////

void quick_sort(int*a, int first, int last)// function to sort an array using partition each time sorting the tails left around the pivot
/*
a - pointer to an input array
first - the index of the first number in the array
last - the index of the last number in the array
*/
{
	int pos;//index of the pivot that the array is partitioned around
	if (first < last)//while there is more than 1 number in the array
	{
		pos = partition(a, first, last);//return the index of the pivot that the array is partitioned around
		quick_sort(a, first, pos - 1);//summon recursion of quick_sort() function for the left tail from the pivot(pos)
		quick_sort(a, pos + 1, last);//summon recursion of quick_sort() function for the right tail from the pivot(pos)
	}

}

///////////////////////////////////////////////////////////////

int partition(int*a, int left, int right)//function to sort the array arround a pivot number (smaller and bigger than the pivot)
/*
a - pointer to an input array
first - the index of the first number in the array
last - the index of the last number in the array
*/
{
	int first = left, pivot, pos;
	/*
	first - the index of the first number in the array
	pivot - the number which the array will be partitioned around, bigger and smaller than the pivot number
	pos - random position to pick the pivot number
	*/
	pos = rand() % (right - left + 1) + left;//generating a random number from the first index and the index + size of the array (random initialized at the begining of the program)
	swaper(a + first, a + pos);//move the number from the random selected position to the first position
	pivot = *(a + first);// make the first number in the array as pivot

	while (left < right)// do as long as the lef index position is smaller than the right index position
	{
		while (*(a + right) > pivot)//retract the right index position as long as the number on the right are bigger than the pivot
			right--;
		while ((left < right) && *(a + left) <= pivot)//advance the left index position as long as the number on the left are smaller than the pivot
			left++;
		if (left < right)//if there were found numbers that bigger from the pivot on the left or number that smaller than the pivot on the right or both
						 //then swap the smaller number from the right with the bigger number from the left
			swaper(a + left, a + right);
	}
	pos = right;// the new index where te pivot should be after the sort
	*(a + first) = *(a + pos);//move one smaller number than the pivot to make room for the pivot to be placed in its correct position
	*(a + pos) = pivot;//move the pivot to its new index after the sort
	return pos;//return the new position of the pivot in the array
}

///////////////////////////////////////////////////////////////

void h3_ex4()
{
	int *arr_a, *arr_b, size_a, size_b, size_common, com_arr,com_arr_r;
	/*
	arr_a - pointer to array a
	arr_b - pointer to array b
	size_a - the size of array a - returned by refrence from input_array_dyn() function
	size_b - the size of array b - returned by refrence from input_array_dyn() function
	size_common - the size of the smallest array at maximum
	com_arr - a flag to descide if array b is part of array a
	com_arr_r - a flag to descide if array b is part of array a using a recursion
	*/
	arr_a = input_array_dyn(&size_a);//get an input for array a by the user using input_array_dyn() function
	arr_b = input_array_dyn(&size_b);//get an input for array b by the user using input_array_dyn() function

	size_common = size_b;//size of array b by defult - asuming it is the smaller array
	if (size_b > size_a)// if array a is smaller that array b then the size of the new array is the size of array a at maximum
		size_common = size_a;

	

	com_arr = arr_common(arr_a, arr_b, size_a, size_b, size_common);//check if array b is part of array a

	if (com_arr)//print the outcome
		printf("Array B is part of array A\n");
	else
		printf("Array B is NOT part of array A\n");

	com_arr_r = arr_common_r(arr_a, arr_b, size_a, size_b, size_common);//check if array b is part of array a using a recursion function

	if (com_arr_r)//print the outcome of the recursion function
		printf("Array B is part of array A - recursion\n");
	else
		printf("Array B is NOT part of array A - recursion\n");
	

	free(arr_a);//free the memorry that was allocated for array a
	free(arr_b);//free the memorry that was allocated for array b
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

int arr_common(int *a, int *b, int size_a, int size_b, int size_c)//function to determine if array b is part of array a
/*
a - pointer to array a
b - pointer to array b
size_a - size of array a
size_b - size of array b
size_c - the common size between the two arrays
*/
{
	int i,key,flag=1;
	/*
	i - index
	key - to search a number in an array
	flag - to descide if array b is part of array a
	*/
	quick_sort(a, 0, size_a - 1);//sort the first array

	if (size_c > size_a)//if the common size is biger than array a that means that array b is bigger then array a there fore array b cannot be a part of array a
		return 0;

	for (i = 0;i < size_c && flag == 1;i++)//run through the numbers in array b while flag is equals to 1
	{
		key = *(b + i);//the current number in array b
		flag = binary_search(a, size_a, key);//search for the current number of array b in array a, if found return 1 if not return 0
	}
	return flag;//return the flag, if array b is part of array a the flag is 1 if not the flag is 0
}

///////////////////////////////////////////////////////////////

int arr_common_r(int *a, int *b, int size_a, int size_b, int size_c)//function to determine if array b is part of array a using a recursion
{
	int i, key, flag = 1;
	if (size_c > size_a)
		return 0;

	if (size_c == 0)
		return binary_search(a, size_a, *b);

	return arr_common_r(a, b, size_a, size_b, size_c-1) * binary_search(a, size_a, *(b + size_c - 1));
}

///////////////////////////////////////////////////////////////

int binary_search(int *a, int size, int key)//function for binary search for a specific number in an array
/*
a - pointer to a sorted array
size - size of the array
key - a number to search in the array
*/
{
	int first=0,last=size-1,mid;
	/*
	first - index for the first number in the array
	last - index for the last number in the array
	mid - index for the middle number in the array
	*/
	while (first <= last)//as long as the index on the left smaller or equal to the index in the right
	{
		mid = (first + last) / 2;//index for the middle number in the array
		if (*(a + mid) == key)//if the number in the middle index equals to the key then its found and return 1
			return 1;
		if (key < *(a + mid))//it the number in the middle index is bigger than the key then continue the search on the left side
			last = mid-1;
		else if (key > *(a + mid))//it the number in the middle index is smaller than the key then continue the search on the right side
			first = mid+1;
	}
	return 0;//if key in not found in the array return 0
}

///////////////////////////////////////////////////////////////

void h3_ex5()
{
	char *str, key;
	str = input_str_dyn();
	
	printf("Enter the letter you want to remove from the string: ");
	flushall();
	scanf(" %c", &key);

	remove_char(str, key);

	printf("%s\n", str);


	free(str);
	flushall();
	printf("\n");
	system("pause");
}

///////////////////////////////////////////////////////////////

void remove_char(char *str, char ch)
{
	int i,j,size,count=0;
	size = strlen(str);
	for (i = size-1;i >=0;i--)
		if (*(str + i) == ch)
		{
			for (j = i;j < size-1;j++)
				ch_swaper(str + j, str + j + 1);
			count++;
		}
	for (i = size - count;i < size;i++)
		*(str + i) = 0;
	str = (char*)realloc(str, strlen(str) * sizeof(char));
}

///////////////////////////////////////////////////////////////

int* input_array_dyn(int *s)
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

char* input_str_dyn()
{
	char temp_str[100], *str;
	printf("Enter your string: ");
	scanf("%s", temp_str);
	str = (char*)malloc(strlen(temp_str) * sizeof(char));
	strcpy(str, temp_str);
	return str;

}

///////////////////////////////////////////////////////////////

void swaper(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

////////////////////////////////////////////////////////////////

void ch_swaper(char *a, char*b)
{
	char temp = *a;
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