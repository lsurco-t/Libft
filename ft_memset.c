/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:36:56 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/17 12:47:27 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[30] = "firststring";
	char	str2[30] = "firststring";

	memset(str1, 48, 10);
	ft_memset(str2, 48, 10);
	printf("String after original function use: %s\n", str1);
	printf("String after recreated function use: %s\n", str2);
	return (0);
}
