/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:22:07 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 21:01:10 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ch1;
	unsigned char	*ch2;

	if (n == 0)
		return (0);
	i = 0;
	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ch1[i] != ch2[i])
		{
			return (ch1[i] - ch2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = {0,0,127,0};
	char	str2[]= {0,0,42,0};
	size_t	n;

	n = 2;
		if (memcmp(str, str2, n) == ft_memcmp(str, str2, n))
		{
			printf("Same results!\n");
			printf("Expected: %i\n", memcmp(str, str2, n));
			printf("Delivered: %i\n\n", ft_memcmp(str, str2, n));
		}
		else
		{
			printf("Different results!\n");
			printf("Expected: %i\n", memcmp(str, str2, n));
			printf("Delivered: %i\n\n", ft_memcmp(str, str2, n));
		}
	return (0);
}

