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
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str1[30] = "firststring";
	char	str2[30] = "firststring";
	size_t	n;

	n = 3;
	memset(str1, 300, n);
	ft_memset(str2, 300, n);
	printf("String after original function use: %s\n", str1);
	printf("String after recreated function use: %s\n", str2);
	return (0);
}*/
