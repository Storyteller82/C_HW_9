#include "stdio.h"
#include <inttypes.h>	

//#define size 20
#define first_elem_of_arr 0

void sort_even_odd (int n, int a[])      
{
	int j = 0, k = 0;
	int temp_arr2[n];
		
	for (int i = 0; i <= (n-1); i++) // Идем от нулевого к последнему элементу
	{
		if (a[i]%2 == 0 || a[i] == 0) // Если четное
		{
			a[j] = a[i];
			j++;
		}
		else if (a[i]%2 != 0 || a[i] == 1)			// Если не четное
		{
			temp_arr2[k] = a[i];
			k++;
		}			
	}
	for (int i = j; i <= (n-1); i++)
	{
		a[i] = temp_arr2[i - j];
	}
	
//	for (int i = (size-1); i >= 0; i--)  // сортировка по возраст. 
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
	
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
	int size = 5;
	int a[size];
	
	for (int i = first_elem_of_arr; i < size; i++) // вводим массив
	{
		scanf ("%d", &a[i]);
	}
	
	sort_even_odd (size, a);

	PRINT_ARR (a, size);
	
	return 0;
}
