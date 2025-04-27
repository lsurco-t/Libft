/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:56:06 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:01:34 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE  "❌"
#define SUCCESS  "✅"

void test_memcmp_cases(char *str1, char *str2, size_t n)
{
    if (memcmp(str1, str2, n) == ft_memcmp(str1, str2, n))
    {
        printf( GREEN "%s Same results!" RESET "\n", SUCCESS);
        printf("Expected: %i\n", memcmp(str1, str2, n));
        printf("Delivered: %i\n\n", ft_memcmp(str1, str2, n));
    }
    else
    {
        printf(RED "%s Different results!" RESET "\n", FAILURE);
        printf("Expected: %i\n", memcmp(str1, str2, n));
        printf("Delivered: %i\n", ft_memcmp(str1, str2, n));
    }
}

int	main(void)
{
    char str1[] = {0, 0, 127, 0};
    char str2[] = {0, 0, 127, 0};
    size_t n = 4;
    test_memcmp_cases(str1, str2, n);

    char str3[] = {0, 0, 127, 0};
    char str4[] = {0, 0, 42, 0};
    test_memcmp_cases(str3, str4, n);

    char str5[] = {1, 2, 3, 4, 5};
    char str6[] = {1, 2, 3};
    test_memcmp_cases(str5, str6, 5);

    char str7[] = {0, 0, 0, 0};
    char str8[] = {0, 0, 0, 1}; 
    test_memcmp_cases(str7, str8, 4);

    char str9[] = {1, 2, 3, 4};
    char str10[] = {1, 2, 3, 5};
    test_memcmp_cases(str9, str10, 4);

    char str11[] = {0xC2, 0xA9, 0x20};
    char str12[] = {0xC2, 0xA9, 0x21};
    test_memcmp_cases(str11, str12, 3);

    char str13[] = "";
    char str14[] = "";
    test_memcmp_cases(str13, str14, 0);

    char str15[1000];
    char str16[1000];
    memset(str15, 1, 1000);
    memset(str16, 1, 1000);
    test_memcmp_cases(str15, str16, 1000);

    char *str17 = NULL;
    char *str18 = NULL;
    test_memcmp_cases(str17, str18, 0);

    return 0;
}
