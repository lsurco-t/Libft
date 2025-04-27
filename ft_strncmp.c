/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:55:20 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 14:08:07 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "as da sad";
	char	str2[] = "as da sd";
	size_t	n;

	n = 0;
	while (n < 20)
	{
		if (strncmp(str1, str2, n) == ft_strncmp(str1, str2, n))
		{
			printf("Same Results!\n");
			printf("Expected: %i\n", strncmp(str1, str2, n));
			printf("Function result: %i\n\n", ft_strncmp(str1, str2, n));
		}
		else
		{
			printf("Different Results!\n");
			printf("Expected: %i\n", strncmp(str1, str2, n));
			printf("Function result: %i\n", ft_strncmp(str1, str2, n));
			return (0);
		}
		n++;
	}
	return (0);
}*/
