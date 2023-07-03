/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:00:29 by helensirenk       #+#    #+#             */
/*   Updated: 2023/06/29 22:04:39 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	**ft_split(char const *s, char c); 
int	ft_atoi(const char *str);

void several_digits(char arr[], int size)
{
    int i;
	int arr_num;
	char **split;

    i = 0;
	split = ft_split(arr, ' ');
	arr_num = ft_atoi(split[0]);
	if (arr_num > INT_MAX || arr_num < INT_MIN)
	{
		printf("Error\n");
	}
    while (i < size)
    {
         printf("%i ", arr[i]);
         i++;
    }
	printf("\n");
}

void single_char_list(char **arr, int size)
{
	int i;
	int arr_num;
	char **split1;

	i = 0;
	while (s)
	split1 = ft_split(arr, ' ');
	
	// char ** split2 = ft_split(arr[1], ' ');
	// char ** split3 = ft_split(arr[2], ' ');
	// char ** split4 = ft_split(arr[3], ' ');
	// char ** split5 = ft_split(arr[4], ' ');
	printf("Split outputs: %s\n", split1[0]);
	printf("Split outputs: %s\n", split1[1]);
	printf("Split outputs: %s\n", split1[2]);
	// printf("Split outputs: %s\n", split2[0]);
	// printf("Split outputs: %s\n", split2[1]);
	// printf("Split outputs: %s\n", split2[2]);
	// printf("Split outputs: %s\n", split3[0]);
	// printf("Split outputs: %s\n", split4[0]);
	// printf("Split outputs: %s\n", split5[0]);

	// printf("%s\n", split[0]);
	// printf("%s\n", split[1]);
	// printf("%s\n", split[2]);


	
	arr_num = ft_atoi(split[0]);
	//printf("%d\n", arr_num);
	// while (i < size)
	// {
	// 	if ((arr_num + 1) != ' ')
	// 		{
	// 			printf("%c%c", arr_num, arr_num + 1);
	// 			i++;
	// 		}
	// 	else if (i < size - 1 && (arr_num + 1) != ' ')
	// 		{
	// 			printf(" ");
	// 			i++;
	// 		}
	// 	else
	// 	{
	// 		printf("%c", arr_num);
	// 		i++;
	// 	}		
	// }
	printf("\n");
}

void max_min(char arr[], int size)
{
	int i;
	int arr_num;
	char **split;

	i = 0;
	split = ft_split(arr, ' ');
	arr_num = ft_atoi(split[0]);
	while (i < size)
	{
		if (arr_num != INT_MIN || arr_num != INT_MAX)
		{
			several_digits(arr, size);
		}
		else if ((arr_num + 1) == ' ')
		{
			single_char_list(arr[0], size);
		}
		break;
	}
	printf("\n");
}

int main()
{
	int size;
	char arr1[] = {1, 3, 5, +9, 20, -4, 50, 60, 04, 8};

	size = sizeof(arr1) / sizeof(arr1[0]);
	printf("Unsorted array: ");
	several_digits(arr1, size);

	

	//char **arr2;
	char **arr2;
	arr2[0] = "2147483647 843 56544 24394";
	
	// arr2[0] = "3";
	arr2[1] = "4";
	// arr2[2] = "6";
	// arr2[3] = "8";
	// arr2[4] = "9";
	// arr2[5] = "74";
	// arr2[6] = "-56";
	// arr2[7] = "+495";



	size = sizeof(arr2) / sizeof(arr2[0]);
	printf("Array with single character list: ");
	single_char_list(arr2, size);
	// single_char_list(arr2[1], size);
	// char arr3[] = {2147483647, 2, 4, 7};
	// size = sizeof(arr3) / sizeof(arr3[0]);
	// printf("Int max: ");
	// max_min(arr3, size);

	char arr4[] = "2147483647 843 56544 24394";
	size = sizeof(arr4) / sizeof(arr4[0]);
	printf("Int min singl_char: ");
	max_min(arr4, size);
	

	char arr5[] = "-2147483648, 23, 545";
	size = sizeof(arr5) / sizeof(arr5[0]);
	printf("Int min: ");
	max_min(arr5, size);
	
	// char arr6[] = {54867543867438 3};
	// //size = sizeof(arr6) / sizeof(arr6[0]);
	// printf("Int more than max: ");
	// max_min(arr6, size);

	return (0);
}

