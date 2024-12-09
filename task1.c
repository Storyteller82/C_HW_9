#include "stdio.h"
#include <inttypes.h>	

//#define size 20
#define first_elem_of_arr 0

void sort_array (int size, int a[])      
{
	int temp;
		
	for (int i = (size-1); i >= 0; i--)  // сортировка по возраст. 
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	
//	for (int i = size_arr - 1; i >= size_arr / 2; i--)  // сортировка по убыв. 
//	{
//		for (int j = (size_arr / 2); j < (size_arr - 1); j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
}

void PRINT_ARR (int a[], int size)
{
	for (int i = first_elem_of_arr; i < size; i++) 
	{
		printf("%d ", a[i]);
	}
}
		
int main(int argc, char *argv[]) 
{    
	int size = 20;
	int a[size];
	
	for (int i = first_elem_of_arr; i < size; i++) // вводим массив
	{
		scanf ("%d", &a[i]);
	}
	
	sort_array (size, a);

	PRINT_ARR (a, size);
	
	return 0;
}
