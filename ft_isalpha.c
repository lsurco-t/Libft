/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:47:55 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/15 15:21:14 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<ctype.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return(1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)
{
	char	*str = 'onlywords';
	
	printf("%i\n", isalpha(str));
	printf("%i",ft_isalpha(str));
	return(0);
}