/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:51:25 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/18 11:56:19 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

static size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t y;
	size_t len;
	
	if (n <= (ft_strlen(dst)))
		len = ft_strlen(src) + n;
	else
		len = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	y = 0;
	while (dst[y])
	{
		y++;
	}
	while (src[i] && i < (n - y - 1))
	{
		dst[y + i] = src[i];
		i++;
	}
	dst[y + i] = '\0';
	return(len);
}

int	main(void)
{
	char src[] = "test string";
	char dst[20] = "This is a ";
	char dst2[20] = "This is a ";
	
	ft_strlcat(dst, src, sizeof(dst));
	strlcat(dst2, src, sizeof(dst2));
	if (strcmp(dst, dst2) == 0)
		printf("Both functions copied: \"%s\" succesfully\n", dst2);
	else
	{
		printf("Different values!\n");
		printf("Recreated string: %s\n", dst);
		printf("Original function: %s\n", dst2);
	}
	return (0);
}
