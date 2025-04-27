/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:14:54 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 15:06:09 by lsurco-t         ###   ########.fr       */
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

void test_memmove_cases(char *str1, size_t n)
{
    char str3[100];
    char str4[100];

    strcpy(str3, str1);
    strcpy(str4, str1);

    memmove(str3 + 2, str3, n);
    ft_memmove(str4 + 2, str4, n);

    if (memcmp(str3, str4, n) == 0)
    {
        printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
        printf("Expected: %s\n", str3);
        printf("Delivered: %s\n\n", str4);
    }
    else
    {
        printf(RED "%s Mismatch results!" RESET "\n", FAILURE);
        printf("Expected: %s\n", str3);
        printf("Delivered: %s\n\n", str4);
    }
}

int main(void)
{
    
    char str1[100] = "Stringfortest";
    test_memmove_cases(str1, 4);

    strcpy(str1, "longerstringfortest");
    test_memmove_cases(str1, 6);

    strcpy(str1, "ééééé");
    test_memmove_cases(str1, 4);

    strcpy(str1, "");
    test_memmove_cases(str1, 0);

    return 0;
}



