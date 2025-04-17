/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:59:21 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/17 14:16:26 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	str1[20] = "Stringfortest";
	char	str2[20] = "test";
	char	str3[20] = "Stringfortest";
	char	str4[20] = "test";
	size_t	n;

	n = 0;
	memcpy(str1, str2, n);
	ft_memcpy(str3, str4, n);
	printf("String result after using function: %s\n", str1);
	printf("String result after recreated function used: %s\n", str3);
	return (0);
}
