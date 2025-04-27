/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:47:00 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 19:21:55 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define SUCCESS "✅"
#define FAILURE "❌"

void test_strjoin_cases(char *str1, char *str2)
{
    char *result = ft_strjoin(str1, str2);

    if (result)
    {
        printf(GREEN "%s Success!" RESET "\n", SUCCESS);
        printf("Joined string: %s\n", result);
    }
    else
    {
        printf(RED "%s Error!" RESET "\n", FAILURE);
		printf(RED "Passed NULL string!! \n" RESET);
    }
    free(result);
}

int main(void)
{
    char *str1 = "firststring_";
    char *str2 = "secondstring";
    test_strjoin_cases(str1, str2);

    char *str3 = "";
    char *str4 = "secondstring";
    test_strjoin_cases(str3, str4);

    char *str5 = "firststring_";
    char *str6 = "";
    test_strjoin_cases(str5, str6);

    char *str7 = "";
    char *str8 = "";
    test_strjoin_cases(str7, str8);

    char *str9 = "This is a very long string that should be tested for joining. ";
    char *str10 = "This is the second part of the long string.";
    test_strjoin_cases(str9, str10);

    char *str11 = NULL;
    char *str12 = "secondstring";
    test_strjoin_cases(str11, str12);

    char *str13 = "firststring_";
    char *str14 = NULL;
    test_strjoin_cases(str13, str14);

    char *str15 = NULL;
    char *str16 = NULL;
    test_strjoin_cases(str15, str16);

    return 0;
}
