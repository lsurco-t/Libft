/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:02:54 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 20:21:12 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

static char test_function(unsigned int i, char c)
{
    (void)i;
    return (ft_toupper(c));
}

static char test_function2(unsigned int i, char c)
{
    (void)i;
    if (ft_isalpha(c))
        return ('1');
    else
        return ('0');
}

void test_strmapi(char *str, char (*func)(unsigned int, char))
{
    char *result = ft_strmapi(str, func);
    printf(GREEN "Result of function: %s" RESET "\n", result);
    free(result);
}

int main(void)
{
    char *str1 = "this is the string";
    printf("Test case 1: Convert to uppercase\n");
    test_strmapi(str1, test_function);
	
    printf("\nTest case 2: Replace alphabetic with '1' and non-alphabetic with '0'\n");
    test_strmapi(str1, test_function2);
	
    char *str2 = "";
    printf("\nTest case 3: Empty string\n");
    test_strmapi(str2, test_function); 
	
    char *str3 = "test!@#string";
    printf("\nTest case 4: Special characters\n");
    test_strmapi(str3, test_function2); 
	
    char *str4 = "12345abcde";
    printf("\nTest case 5: Numbers and letters\n");
    test_strmapi(str4, test_function2); 

    char *str5 = "MixEdCaSe123";
    printf("\nTest case 6: Mixed case string\n");
    test_strmapi(str5, test_function);
    
    return 0;
}
