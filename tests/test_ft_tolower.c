/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:46:05 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 21:01:42 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

int	main(void)
{
	int	c;

	c = 'A';
	while (c <= 'Z')
	{
		if (tolower(c) == ft_tolower(c))
		{
			printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
			printf("Expected result: %c\n", tolower(c));
			printf("Function result: %c\n\n", ft_tolower(c));
		}
		else
		{
			printf(RED "%s Different results!" RESET "\n", FAILURE);
			printf("Expected result: %c\n", tolower(c));
			printf("Function result: %c\n", ft_tolower(c));
			return (0);
		}
		c++;
	}
	return (0);
}