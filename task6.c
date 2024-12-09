#include "stdio.h"
#include <inttypes.h>	

//#define size 20
#define first_elem_of_arr 0

int is_two_same (int size, int a[])      
{
	//int max = a[0];
	int cnt = 0;
	int n = 1;
	//int temp_arr2[n];
		
	for (int i = 0; i <= (size-1); i++) // Идем от нулевого к последнему элементу
	{
		for (int j = n; j <= (size-1); j++)
		{
			if ( a[i] == a[j])
			cnt++;
		}
		n++;
	}
	if (cnt > 0)
	return 1;
	return 0;
	
//		if (a[i]%2 == 0 || a[i] == 0) // Если четное
//		{
//			a[j] = a[i];
//			j++;
//		}
//		else if (a[i]%2 != 0 || a[i] == 1)			// Если не четное
//		{
//			temp_arr2[k] = a[i];
//			k++;
//		}			
//	}
//	for (int i = j; i <= (n-1); i++)
//	{
//		a[i] = temp_arr2[i - j];
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
	int size = 10;
	int a[size];
	
	for (int i = first_elem_of_arr; i < size; i++) // вводим массив
	{
		scanf ("%d", &a[i]);
	}
	
	

	//PRINT_ARR (a, size);
//	printf("%d ", find_max_array (size, a));
	
	return 0;
}
