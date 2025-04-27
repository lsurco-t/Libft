/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:47:12 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 21:10:54 by lsurco-t         ###   ########.fr       */
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

void test_substr(char *str, unsigned int start, size_t len)
{
    char *substr = ft_substr(str, start, len);

    if (substr)
    {
        printf(GREEN "%s Substring Result: %s\n\n" RESET, SUCCESS, substr);
        free(substr);
    }
    else
    {
        printf(RED "%s Error or NULL result\n" RESET, FAILURE);
    }
}

int main(void)
{
    char *str = "stringtocopy";

    printf( GREEN "\nTest Case 1: Substrings of varying lengths\n" RESET);
    unsigned int start = 0;
    size_t len = 5;
    while (start < 20 && len > 0)
    {
        printf("Starting point: %u\n", start);
        printf("Length of copy: %zu\n", len);
        printf("Original string: %s\n", str);
        test_substr(str, start, len);
        start++;
        len--;
    }

    printf("\nTest Case 2: Empty string\n");
    test_substr("", 0, 5);

    printf("\nTest Case 3: Start index beyond string length\n");
    test_substr(str, 20, 5); 

    printf("\nTest Case 4: Substring with length 0\n");
    test_substr(str, 0, 0); 
	
    printf("\nTest Case 5: Length greater than remaining string length\n");
    test_substr(str, 5, 20);  
	
    return 0;
}
