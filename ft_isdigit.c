/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:05:02 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/15 19:05:02 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int num)
{
	if (num < 48 || num > 57)
	{
		return (0);
	}
	return (1);
}

int	main(void)
{
	int	num;

	num = '9';
	printf("Original isdigit result = %i\n", isdigit(num));
	printf("Function ft_isdigit result = %i", ft_isdigit(num));
	return (0);
}
