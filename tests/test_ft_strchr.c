/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:49:13 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 18:15:20 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_strchr_cases(char *str, char c)
{
	if (strchr(str, c) == ft_strchr(str, c))
	{
		printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
		printf("Expected: %s\n", strchr(str, c));
		printf("Delivered: %s\n\n", ft_strchr(str, c));
	}
	else
	{
		printf(RED "%s Mismatch results!" RESET "\n", FAILURE);
		printf("Expected: %s\n", strchr(str, c));
		printf("Delivered: %s\n\n", ft_strchr(str, c));
	}
}

int	main(void)
{
	char str1[] = "findhereachar";
	char str2[] = "abcdefg";
	char str3[] = "hello";
	char str4[] = "";
	char str5[] = "aaaaaaa";
	char str6[] = "special@char";

	test_strchr_cases(str1, 'h');
	test_strchr_cases(str2, 'a');
	test_strchr_cases(str3, 'o');
	test_strchr_cases(str4, 'x');
	test_strchr_cases(str5, 'a');
	test_strchr_cases(str6, '@');
	test_strchr_cases(str1, 'z');
	
	return (0);
}
