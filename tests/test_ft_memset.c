/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:23:44 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 16:45:14 by lsurco-t         ###   ########.fr       */
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

void test_memset_cases(char *str1, char *str2, int c, size_t n)
{
	char original[50];
	char recreated[50];

	strcpy(original, str1);
	strcpy(recreated, str2);

	printf("Original: %s\n", original);
	memset(original, c, n);
	ft_memset(recreated, c, n);
	if (memcmp(original, recreated, n) == 0)
	{
		printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
		printf("Char to set: %d | Bytes: %zu\n", c, n);
		printf("Original: %s\n", original);
		printf("Recreated: %s\n\n", recreated);
	}
	else
	{
		printf(RED "%s Different results!" RESET "\n", FAILURE);
		printf("Char to set: %d | Bytes: %zu\n", c, n);
		printf("Original: %s\n", original);
		printf("Recreated: %s\n\n", recreated);
	}
}

int main(void)
{
	test_memset_cases("firststring", "firststring", 64, 3);
	test_memset_cases("Hello World!", "Hello World!", 'A', 5);
	test_memset_cases("Test 1234", "Test 1234", 0, 4);
	test_memset_cases("Another string here", "Another string here", 37, 8);
	test_memset_cases("Specials @#&*", "Specials: @#&*", 'z', 6);
	test_memset_cases("thereisastringhere", "thereisastringhere", 'x', 1);
	test_memset_cases("OnlyOneChar", "OnlyOneChar", '0', 0);

	return (0);
}
