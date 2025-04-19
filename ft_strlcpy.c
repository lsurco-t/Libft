/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:22:51 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/18 11:50:31 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (len);
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char	src[] = "Stringtocopystring";
	char	dst[20];
	char	dst2[20];

	ft_strlcpy(dst, src, sizeof(dst));
	strlcpy(dst2, src, sizeof(dst2));
	if (strcmp(dst, dst2) == 0)
		printf("Both functions copied: %s succesfully\n", dst);
	else
		printf("Different values\n");
	return (0);
}
