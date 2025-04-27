/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:43:09 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 22:05:45 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define FAILURE "❌"
#define SUCCESS "✅"

void	test_strnstr(const char *big, const char *little, size_t n)
{
	const char *original = strnstr(big, little, n);
	const char *recreated = ft_strnstr(big, little, n);

	if ((original == NULL && recreated == NULL) ||
	    (original && recreated && strcmp(original, recreated) == 0))
	{
		printf(GREEN "%s Same results\n" RESET, SUCCESS);
		printf("Big String: \"%s\"\n", big);
		printf("Little String: \"%s\"\n", little);
		printf("n = %zu\n", n);
		printf("Expected: %s\n", original ? original : "(null)");
		printf("Function result: %s\n\n", recreated ? recreated : "(null)");
	}
	else
	{
		printf(RED "%s Different results!\n" RESET, FAILURE);
		printf("Big String: \"%s\"\n", big);
		printf("Little String: \"%s\"\n", little);
		printf("n = %zu\n", n);
		printf("Expected: %s\n", original ? original : "(null)");
		printf("Function result: %s\n\n", recreated ? recreated : "(null)");
	}
}

int	main(void)
{
	test_strnstr("abcde", "cde", 5);
	test_strnstr("abcde", "cde", 3);
	test_strnstr("hello world", "world", 11);
	test_strnstr("hello world", "worl", 8);
	test_strnstr("short", "longerstring", 10);
	test_strnstr("same", "", 4);           
	test_strnstr("", "needle", 5);           
	test_strnstr("", "", 0);                
	test_strnstr("smallstring", "smallstring", 5);
	test_strnstr("abcdef", "abc", 0);
	test_strnstr("abcdef", "", 0);
	test_strnstr("this is a string", "notfound", 17);
	test_strnstr("completelydifferent", "something", 5);
	test_strnstr("text\0hidden", "hidden", 10);

	return (0);
}
