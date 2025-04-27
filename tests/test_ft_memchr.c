/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:46:18 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:06:37 by lsurco-t         ###   ########.fr       */
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

void test_memchr_cases(char *str, int c, size_t len)
{
    if (memchr(str, c, len) == ft_memchr(str, c, len))
    {
        printf( GREEN "%s Same results!" RESET "\n", SUCCESS);
        printf("Expected: %s\n", (char *)memchr(str, c, len));
        printf("Delivered: %s\n\n", (char *)ft_memchr(str, c, len));
    }
    else
    {
        printf(RED "%s Different results!" RESET "\n", FAILURE);
        printf("Expected: %s\n", (char *)memchr(str, c, len));
        printf("Delivered: %s\n", (char *)ft_memchr(str, c, len));
    }
}

int	main(void)
{
    
    char str1[] = "findhereacharz";
    int c = 'a';
    size_t len = strlen(str1);
    while (c <= 'z')
    {
        test_memchr_cases(str1, c, len);
        c++;
    }

    
    char str2[] = "";
    test_memchr_cases(str2, 'a', 0); 

   
    char str3[] = "abcdefgh";
    test_memchr_cases(str3, 'z', strlen(str3));

    
    char str4[] = "ababababababab";
    test_memchr_cases(str4, 'a', strlen(str4));

   
    char str5[] = "boundarycheck";
    test_memchr_cases(str5, 'b', strlen(str5));
    test_memchr_cases(str5, 'k', strlen(str5));

    char *str6 = NULL;
    test_memchr_cases(str6, 'a', 0);

    char str7[] = "hello";
    test_memchr_cases(str7, 'e', 10);

    return (0);
}
