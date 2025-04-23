/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:15:58 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/23 10:03:01 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == ch)
		return ((char *)(s + i));
	return (NULL);
}

/*int	main(void)
{
	char	str[20] = "findhereachar";
	char	c;

	c = 'h';
	if (strchr(str, c) == ft_strchr(str, c))
	{
		printf("Same results!\n");
		printf("Expected: %s\n", strchr(str, c));
		printf("Delivered: %s\n", ft_strchr(str, c));
	}
	else
	{
		printf("Different results!\n");
		printf("Expected: %s\n", strchr(str, c));
		printf("Delivered: %s\n", ft_strchr(str, c));
		return (0);
	}
	return (0);
}*/
