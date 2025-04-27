/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:33:41 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 13:42:54 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

void test_itoa(int n)
{
    char *strn;

    strn = ft_itoa(n);
    if (strn == NULL)
    {
        printf(RED "❌ Invalid number: %d!" RESET "\n\n", n);
        return;
    }
    printf(GREEN "✅ Valid number: %s" RESET "\n\n", strn);
    free(strn);
}

int main(void)
{
    int n;

	n = 214743633;
    while (n <= 214743646)
    {
        test_itoa(n);
        n++;
    }
	printf("\n" YELLOW "Testing edge cases:\n" RESET);
    test_itoa(0);
    test_itoa(-1);
    test_itoa(-2147483648);
    test_itoa(2147483647);

    return 0;
}
