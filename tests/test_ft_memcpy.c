/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:14:32 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:30:27 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_memcpy_cases(char *str1, char *str2, size_t n)
{
    char str3[20];
    char str4[20];

	strcpy(str4, str2);
    memcpy(str1, str2, n);
    ft_memcpy(str3, str4, n);

    if (memcmp(str1, str3, n) == 0)
    {
        printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
        printf("Expected: %s\n", str1);
        printf("Delivered: %s\n\n", str3);
    }
    else
    {
        printf(RED "%s Mismatch results!" RESET "\n", FAILURE);
        printf("Expected: %s\n", str1);
        printf("Delivered: %s\n\n", str3);
    }
}

int main(void)
{
    char str1[20] = "Stringfortest";
    char str2[20] = "test";
    size_t n = 4;

    test_memcpy_cases(str1, str2, n);

    strcpy(str1, "longerstringfortest");
    strcpy(str2, "string");
    test_memcpy_cases(str1, str2, 6);

    strcpy(str1, "Hello world!");
    strcpy(str2, "world");
    test_memcpy_cases(str1, str2, 5);

    strcpy(str1, "");
    strcpy(str2, "");
    test_memcpy_cases(str1, str2, 0);

    strcpy(str1, "ééééé");
    strcpy(str2, "éé");
    test_memcpy_cases(str1, str2, 4);

    return 0;
}


