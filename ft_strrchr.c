/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:16:27 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:07:50 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[20] = "finhdhereachar";
	char	c;

	c = 'c';
	if (strrchr(str, c) == ft_strrchr(str, c))
	{
		printf("Same results!\n");
		printf("Expected: %s\n", strrchr(str, c));
		printf("Delivered: %s\n", ft_strrchr(str, c));
	}
	else
	{
		printf("Different results!\n");
		printf("Expected: %s\n", strrchr(str, c));
		printf("Delivered: %s\n", ft_strrchr(str, c));
		return (0);
	}
	return (0);
}*/
