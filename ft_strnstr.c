/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:28:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/21 14:21:08 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	while(i < len)
	{
		x = 0;
		if (big[i] == little[i])
		{
			while (little[i + x] && big[i + x] == little[i + x])
			{
				x++;
			}
			return((char *)big[i + x]);
		}
		i++;
	}
	return(NULL);
}

int	main(void)
{
	char	str1[] = "as da sad";
	char	str2[] = "as da sd";
	size_t	n;

	n = 0;
	while (n < 20)
	{
		if (strnstr(str1, str2, n) == ft_strnstr(str1, str2, n))
		{
			printf("Same Results!\n");
			printf("Expected: %s\n", *strnstr(str1, str2, n));
			printf("Function result: %s\n\n", ft_strnstr(str1, str2, n));
		}
		else
		{
			printf("Different Results!\n");
			printf("Expected: %s\n", *strnstr(str1, str2, n));
			printf("Function result: %s\n", ft_strnstr(str1, str2, n));
			return (0);
		}
		n++;
	}
	return (0);
}