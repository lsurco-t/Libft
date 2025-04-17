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

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	str1[20] = "Stringtest";
	char	str2[20] = "Stringtest";
	size_t	i;
	size_t	n;

	n = 0;
	bzero(str1, n);
	ft_bzero(str2, n);
	i = 0;
	while (i < sizeof(str1))
	{
		printf("String after original function use: %c\n", str1[i]);
		i++;
	}
	i = 0;
	while (i < sizeof(str2))
	{
		printf("String after recreated function use: %c\n", str2[i]);
		i++;
	}
	return (0);
}
