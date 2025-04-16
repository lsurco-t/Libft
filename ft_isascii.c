/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:49:50 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/16 19:49:50 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<ctype.h>

int	ft_isascii(int	asc)
{
	if (asc >= 0 && asc <= 127)
		return(1);
	return(0);
}

int	main(void)
{
	int	asc;

	asc = 127;
	printf("Recreated function value is: %i\n", ft_isascii(asc));
	printf("Original function value is: %i", isascii(asc));
	return(0);
}
