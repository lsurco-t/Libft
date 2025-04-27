/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:11:22 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:37:59 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>


#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"

void compare_bzero(char *str1, char *str2, size_t n)
{
	size_t i;

	i = 0;
    bzero(str1, n);
    ft_bzero(str2, n);

    if (memcmp(str1, str2, n) == 0)
    {
        printf("\n"  "✅ Match for first %zu bytes" RESET "\n", n);
        printf("   bzero:  Zeroed successfully | ft_bzero: Zeroed successfully\n\n");
    }
    else
    {
        printf("\n"  "❌ Mismatch for first %zu bytes" RESET "\n", n);
        printf("   bzero:  ");
        while (i < n)
		{
            printf("%c", str1[i]);
			i++;
		}
        printf(" | ft_bzero: ");
		i = 0;
        while (i < n)
		{
            printf("%c", str2[i]);
			i++;
		}
        printf("\n\n");
    }
    printf("-------------------------------\n");
}

int main(void)
{
    char str1[20] = "TestString12345";
    char str2[20] = "TestString12345";
    size_t	n;
	
	n = 10;
    compare_bzero(str1, str2, n);
    printf("\nTesting edge cases...\n");
    compare_bzero("Hello", "Hello", 0);
    compare_bzero(str1, str2, sizeof(str1));
    return (0);
}
