/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:00:29 by helensirenk       #+#    #+#             */
/*   Updated: 2023/06/28 15:14:49 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void several_digits(int arr[], int size)
{
    int i;

    i = 0;
    while (i < size)
    {
         printf("%i ", arr[i]);
         i++;
    }
	printf("\n");
}

void single_char_list(char arr[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i + 1] != ' ')
			{
				printf("%c%c", arr[i], arr[i + 1]);
				i++;
			}
		else if (i < size - 1 && arr[i+1] != ' ')
			{
				printf(" ");
				i++;
			}
		else 
			printf("%c", arr[i]);
			i++;
			
	}
	printf("\n");
}

void max_min(int arr[])
{
	int max = 2147483647;
	int min = -2147483648; 
	int i;
	int size = sizeof(int);
	
	i = 0;
	while (i <= max && i >= min)
	{
		if (arr[i + 1] != ' ')
			{
				printf("%c%c", arr[i], arr[i + 1]);
				i++;
			}
		else if (i < size - 1 && arr[i+1] != ' ')
			{
				printf(" ");
				i++;
			}
		else 
			printf("%c", arr[i]);
			i++;
	}
	printf("\n");
}

int main()
{
	int size;
	int arr1[] = {1, 3, 5, +9, 20, -4, 50, 60, 04, 8};

	size = sizeof(arr1) / sizeof(arr1[0]);
	printf("Unsorted array: ");
	several_digits(arr1, size);

	

	
	char arr2[] = "3 4 6 8 9 74 -56 +495";
	size = sizeof(arr2) / sizeof(arr2[0]);
	printf("Array with single character list: ");
	single_char_list(arr2, size);

	int arr3[] = {2147483647, 2, 4, 7};
	// size = sizeof(arr3) / sizeof(arr3[0]);
	printf("Int max: ");
	max_min(arr3);

	// int arr4[] = "2147483647 843 56544 24394";
	// size = sizeof(arr4) / sizeof(arr3[0]);
	// printf("Int min singl_char: ");
	// max_min(arr4);

	int arr5[] = {-2147483648, 23, 545};
	//size = sizeof(arr5) / sizeof(arr5[0]);
	printf("Int min: ");
	max_min(arr5);

	return (0);
}

