/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:05:37 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 20:34:59 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_strncmp(char *str1, char *str2, size_t n)
{
    if (strncmp(str1, str2, n) == ft_strncmp(str1, str2, n))
    {
        printf(GREEN "%s Same Results!\n" RESET, SUCCESS);
        printf("Expected: %i\n", strncmp(str1, str2, n));
        printf("Function result: %i\n\n", ft_strncmp(str1, str2, n));
    }
    else
    {
        printf(RED "%s Different Results!\n" RESET, FAILURE);
        printf("Expected: %i\n", strncmp(str1, str2, n));
        printf("Function result: %i\n\n", ft_strncmp(str1, str2, n));
    }
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Test Case 1: Identical strings\n");
    test_strncmp(str1, str2, 5);

    char str3[] = "Hello";
    char str4[] = "HelloWorld";
    printf("Test Case 2: Identical strings with different lengths\n");
    test_strncmp(str3, str4, 5); 

    char str5[] = "Hello";
    char str6[] = "World";
    printf("Test Case 3: Completely different strings\n");
    test_strncmp(str5, str6, 5);

    char str7[] = "HelloWorld";
    char str8[] = "HelloEarth";
    printf("Test Case 4: Strings with a common prefix but different suffixes\n");
    test_strncmp(str7, str8, 10);

    char str9[] = "Hello";
    char str10[] = "Hella";
    printf("Test Case 5: Strings of equal length with one character different\n");
    test_strncmp(str9, str10, 5);

    char str11[] = "";
    char str12[] = "";
    printf("Test Case 6: Empty strings\n");
    test_strncmp(str11, str12, 0);

    return 0;
}

