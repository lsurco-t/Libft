/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:23:00 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/20 11:05:35 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<ctype.h>
#include	<stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);  
}

int	main(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
	if (toupper(c) == ft_toupper(c))
	{
		printf("Expected result: %c\n", toupper(c));
		printf("Function result: %c\n", ft_toupper(c));
		printf("Same results!\n\n");
	}
	else
	{
		printf("Different results!\n");
		printf("Expected result: %c\n", toupper(c));
		printf("Function result: %c\n", ft_toupper(c));
		return(0);
	}
	c++;
	}
	return (0);
}