/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:24:54 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:07:17 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main(void)
{
	int	c;

	c = 'A';
	while (c <= 'Z')
	{
		if (tolower(c) == ft_tolower(c))
		{
			printf("Expected result: %c\n", tolower(c));
			printf("Function result: %c\n", ft_tolower(c));
			printf("Same results!\n\n");
		}
		else
		{
			printf("Different results!\n");
			return (0);
		}
		c++;
	}
	return (0);
}*/
