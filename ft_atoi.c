/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:31:37 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/21 19:24:16 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	n;
	int	i;
	int	minus;

	n = 0;
	i = 0;
	minus = 1;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = minus * -1;
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + (nptr[i] - 48);
		i++;
	}
	return (n * minus);
}

int	main(void)
{
	char	*c;
	int		oa;
	int		fa;

	c = "-2147483648964646654666";
	oa = atoi(c);
	fa = ft_atoi(c);
	if (oa == fa)
	{
		printf("Same results!\n");
		printf("Expected: %i\n", atoi(c));
		printf("Function result: %i\n", ft_atoi(c));
	}
	else
	{
		printf("Different results!\n");
		printf("Expected: %i\n", atoi(c));
		printf("Function result: %i\n", ft_atoi(c));
	}
	return (0);
}
