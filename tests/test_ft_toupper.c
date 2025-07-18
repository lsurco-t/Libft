/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:00:04 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 20:28:52 by lsurco-t         ###   ########.fr       */
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

	c = 'a';
	while (c <= 'z')
	{
		if (toupper(c) == ft_toupper(c))
		{
			printf(GREEN "%s Same results!" RESET "\n", SUCCESS);
			printf("Expected result: %c\n", toupper(c));
			printf("Function result: %c\n\n", ft_toupper(c));
		}
		else
		{
			printf(RED "%s Different results!" RESET "\n", FAILURE);
			printf("Expected result: %c\n", toupper(c));
			printf("Function result: %c\n", ft_toupper(c));
			return (0);
		}
		c++;
	}
	return (0);
}