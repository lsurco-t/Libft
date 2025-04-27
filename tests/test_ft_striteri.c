/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:49:57 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 18:44:59 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define SUCCESS "✅"

static void	test_function(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

static void	replace_char(unsigned int i, char *c)
{
	(void)i;
	if (*c == 'a')
		*c = 'z';
}
void	shift_ascii(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}

int	main(void)
{
	char	str1[] = "this is a string";

	printf(GREEN "\n✅ String to iterate over: " RESET "%s" "\n\n", str1);
	ft_striteri(str1, replace_char);
	printf(GREEN "Result of function: " RESET "%s" "\n\n", str1);

	ft_striteri(str1, test_function);
	printf(GREEN "Result of function: " RESET "%s" "\n\n", str1);

	ft_striteri(str1, shift_ascii);
	printf(GREEN "Result of function: " RESET "%s" "\n\n", str1);

	return (0);
}