/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:15:34 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/17 14:56:49 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((const char *)src)[i];
		}
	}
	return (dest);
}

int	main(void)
{
	char	str1[20] = "Stringfortest";
	char	str3[20] = "Stringfortest";

	memmove(str1, str1 + 2, 4);
	ft_memmove(str3, str3 + 2, 4);
	printf("String result after using function: %s\n", str1);
	printf("String result after recreated function used: %s\n", str3);
	return (0);
}
