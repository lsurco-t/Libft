/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:28:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/21 17:35:20 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && (i + x) < len)
		{
			if (little[x + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "cde";
	size_t	n;

	n = 0;
	while (n < 20)
	{
		if (strnstr(str1, str2, n) == ft_strnstr(str1, str2, n))
		{
			printf("Same Results!\n");
			printf("Expected: %s\n", strnstr(str1, str2, n));
			printf("Function result: %s\n\n", ft_strnstr(str1, str2, n));
		}
		else
		{
			printf("Different Results!\n");
			printf("Expected: %s\n", strnstr(str1, str2, n));
			printf("Function result: %s\n", ft_strnstr(str1, str2, n));
			return (0);
		}
		n++;
	}
	return (0);
}
