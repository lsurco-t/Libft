/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:44:31 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 21:54:34 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define FAILURE "❌"
#define SUCCESS "✅"

void	test_strrchr(const char *str, int c)
{
	const char	*original;
	const char	*recreated;

	original = strrchr(str, c);
	recreated = ft_strrchr(str, c);

	if (original == recreated || (original && recreated && strcmp(original, recreated) == 0))
	{
		printf(GREEN "%s Same results!\n" RESET, SUCCESS);
		printf("Searching for '%c' in \"%s\"\n", c, str);
		printf("Result: %s\n\n", recreated ? recreated : "(null)");
	}
	else
	{
		printf(RED "%s Same results!\n" RESET, FAILURE);
		printf("Searching for '%c' in \"%s\"\n", c, str);
		printf("Expected: %s\n", original ? original : "(null)");
		printf("Delivered: %s\n\n", recreated ? recreated : "(null)");
	}
}

int	main(void)
{
	test_strrchr("findhereachar", 'c');

	test_strrchr("thisisatest", 'z');

	test_strrchr("banana", 'a');

	test_strrchr("end\0string", '\0');

	test_strrchr("startstring", 's');

	test_strrchr("endcharacterx", 'x');

	test_strrchr("", 'a');

	test_strrchr("textwith\nnewline", '\n');

	return (0);
}
