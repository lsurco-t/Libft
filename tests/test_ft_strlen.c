/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:01:23 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 20:14:29 by lsurco-t         ###   ########.fr       */
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

void test_strlen(const char *str)
{
    printf("\nTesting with: \"%s\"\n", str);
    printf("Recreated function value: %zu\n", ft_strlen(str));
    printf("Original function value: %zu\n", strlen(str));

    if (ft_strlen(str) == strlen(str))
        printf(GREEN "%s Same results!" RESET "\n\n", SUCCESS);
    else
        printf(RED "%s Different results!" RESET "\n\n", FAILURE);
}

int main(void)
{
    printf("\nTest case 1: Regular string");
    const char *str1 = "thereis18wordshere";
    test_strlen(str1);

    printf("Test case 2: Empty string");
	const char *str2 = "";
    test_strlen(str2);

    printf("Test case 3: String with spaces");
    const char *str3 = "this is a test";
    test_strlen(str3);

    printf("Test case 4: String with special characters");
    const char *str4 = "!@#$^&*()_+";
    test_strlen(str4);

    printf("Test case 5: String with numbers");
    const char *str5 = "1234567890";
    test_strlen(str5);

    printf("Test case 6: String with non-ASCII characters (accented characters)");
    const char *str6 = "éèàù";
    test_strlen(str6);

    printf("Test case 7: Long string (testing large string size)");
    const char *str7 = "This is a much longer string that will test the function handling larger strings";
    test_strlen(str7);

    return 0;
}
