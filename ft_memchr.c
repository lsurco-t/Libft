/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:09:04 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/25 08:16:14 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*str;

	i = 0;
	ch = (unsigned char)c;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "findhereacharz";
	int		c;
	size_t	len;

	c = 'a';
	len = strlen(str);
	while (c <= 'z')
	{
		if (memchr(str, c, len) == ft_memchr(str, c, len))
		{
			printf("Same results!\n");
			printf("Expected: %s\n", (char *)memchr(str, c, len));
			printf("Delivered: %s\n\n", (char *)ft_memchr(str, c, len));
		}
		else
		{
			printf("Different results!\n");
			printf("Expected: %s\n", (char *)memchr(str, c, len));
			printf("Delivered: %s\n", (char *)ft_memchr(str, c, len));
			return (0);
		}
		c++;
	}
	return (0);
}
