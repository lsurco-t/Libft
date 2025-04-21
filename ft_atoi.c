/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:31:37 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/21 18:07:50 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*int	ft_atoi(const char *nptr)
{
	char *str;

	str = (char *)nptr;
	if(str == "-2147483648")
	{
		write(1, "-", 1);
		write(1, "2147483648", 11);
	}
	return(0);
}*/

int	main(void)
{
	char *c;
	int oa;
	int	fa;

	c = "2147483647";
	oa = atoi(c);
	fa = ft_atoi(c);
	if (oa == fa)
	{
		printf("Same results!");
		printf("Expected: %i\n", atoi(c));
		printf("Function result: %i", ft_atoi(c));
	}
	else
	{
		printf("Same results!");
		printf("Expected: %i\n", atoi(c));
		printf("Function result: %i", ft_atoi(c));
	}
	return(0);
}

