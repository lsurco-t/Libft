/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:47:55 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/15 15:56:30 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<ctype.h>

int	ft_isalpha(char str)
{
	if (str == '\0')
	{
		return(0);
	}
	if ((str < 65 || str > 90) && (str < 97 || str > 122))
	{		
		return (0);
	}
	return (1024);
}
int	main(void)
{
	char	str = 'A';
	
	printf("%i\n", isalpha(str));
	printf("%i",ft_isalpha(str));
	return(0);
}