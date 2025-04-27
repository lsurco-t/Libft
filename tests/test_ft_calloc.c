/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:55:54 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 13:31:10 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"

void test_calloc(size_t nmemb, size_t size)
{
    char *arr1;
    char *arr2;
    size_t i;

    arr1 = calloc(nmemb, size);
    arr2 = ft_calloc(nmemb, size);
    if (!arr1 || !arr2)
    {
        printf(RED "❌ Memory allocation failed for nmemb=%zu, size=%zu!" RESET "\n", nmemb, size);
        return;
    }
    i = 0;
    while (i < nmemb)
    {
        if (arr1[i] != 0 || arr2[i] != 0)
        {
            printf(RED "❌ Mismatch for nmemb=%zu, size=%zu!" RESET "\n", nmemb, size);
            printf("Expected value: %i\n", arr1[i]);
            printf("Function value: %i\n", arr2[i]);
            free(arr1);
            free(arr2);
            return;
        }
        i++;
    }
	printf(GREEN "✅ Test passed for nmemb=%zu, size=%zu!" RESET "\n", nmemb, size);
	printf("Allocating memory size: %li\n", nmemb * size);
	printf("Expected value: %i\n", arr1[i]);
	printf("Function value: %i\n", arr2[i]);
	printf("-------------------------------\n");
	free(arr1);
    free(arr2);
}

int main(void)
{
    test_calloc(5, sizeof(int)); 
    test_calloc(10, sizeof(int));
    test_calloc(1, sizeof(double));
    test_calloc(900, sizeof(char));
    test_calloc(0, sizeof(int));
    return 0;
}

