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
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (n <= dst_len)
		return n + src_len;
	while (src[i] &&  dst_len + i < n - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return(src_len + dst_len);
}

int	main(void)
{
	char src[] = "test string";
	char dst[20] = "here goes a ";
	char dst2[20] = "here goes a ";
	
	ft_strlcat(dst, src, 10);
	strlcat(dst2, src, 10);
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
