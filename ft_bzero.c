/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:29:28 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/17 12:55:45 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	str1[30] = "Stringtest";
	char	str2[30] = "Stringtest";

	bzero(str1, 2);
	ft_bzero(str2, 2);
	printf("String after original function use: %s\n", str1);
	printf("String after recreated function use: %s\n", str2);
	return (0);
}
