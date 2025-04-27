/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:47:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 19:56:46 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_strlcpy_cases(char *src, size_t size)
{
    char dst[20];
    char dst2[20];

    ft_strlcpy(dst, src, size);
    strlcpy(dst2, src, size);

    if (strcmp(dst, dst2) == 0)
    {
        printf(GREEN "%s Both functions copied successfully: %s" RESET "\n", SUCCESS, dst2);
    }
    else
    {
        printf(RED "%s Different values!" RESET "\n", FAILURE);
        printf("Recreated string: %s\n", dst);
        printf("Original function: %s\n", dst2);
    }
}

int main(void)
{
    char *src1 = "Hello, world!";
    printf("Test case 1: Simple string\n");
    test_strlcpy_cases(src1, 20);
   
	char *src2 = "";
    printf("\nTest case 2: Empty source string\n");
    test_strlcpy_cases(src2, 20);
    
	char *src3 = "This is a very long string that won't fit in a small buffer";
    printf("\nTest case 3: Source string longer than destination buffer\n");
    test_strlcpy_cases(src3, 10);
    
	char *src4 = "ExactFit";
    printf("\nTest case 4: Source string equals destination size\n");
    test_strlcpy_cases(src4, 9);
    
	char *src5 = "Large destination buffer";
    printf("\nTest case 5: Very large size for destination\n");
    test_strlcpy_cases(src5, 100);
   	
	char *src6 = "This string is too long";
    printf("\nTest case 6: `size` smaller than source length but enough to copy first part\n");
    test_strlcpy_cases(src6, 10); 
    
	char *src7 = "Data";
    printf("\nTest case 7: Destination buffer size of 1\n");
    test_strlcpy_cases(src7, 1);
 
    return 0;
}
