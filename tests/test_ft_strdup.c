/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:49:40 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 18:30:38 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RED		"\033[31m"
#define SUCCESS "✅"
#define FAILURE "❌"

void test_strdup_cases(char *str1)
{
    char *str2;
    char *str3;

    str2 = strdup(str1);
    str3 = ft_strdup(str1);
    
    if (strcmp(str2, str3) == 0)
    {
        printf(GREEN "%s Same Results!" RESET "\n", SUCCESS);
        printf("Expected result: %s\n", str2);
        printf("Function result: %s\n", str3);
    }
    else
    {
        printf(RED "%s Different Results!" RESET "\n", FAILURE);
        printf("Expected result: %s\n", str2);
        printf("Function result: %s\n", str3);
    }

    free(str2);
    free(str3);
}

int main(void)
{
    char *str1 = "Hello, world!";
    test_strdup_cases(str1);
    str1 = "";
    test_strdup_cases(str1);
    str1 = "This is a test";
    test_strdup_cases(str1);
    str1 = "!@#$^&*()_+";
    test_strdup_cases(str1);
    str1 = "1234567890";
    test_strdup_cases(str1);
    str1 = "éèàù";
    test_strdup_cases(str1);
    str1 = "This is a much longer string to will test the function handling larger strings :)";
    test_strdup_cases(str1);
    return 0;
}
