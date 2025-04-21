/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:22:07 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/21 11:35:00 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t n;
	unsigned char ch1;
	unsigned char ch2;

	

}

int	main(void)
{
	char	*str = "findhereacharz";
	char	*str2 = "findherea";
	size_t n;
	
	n = 0;
	while (n <= 5)
	{
		if (memcmp(str, str2, n) == ft_memcmp(str, str2, n))
		{
			printf("Same results!\n");
			printf("Expected: %i\n", memcmp(str, str2, n));
			printf("Delivered: %s\n\n", ft_memcmp(str, str2, n));
		}
		else
		{
			printf("Different results!\n");
			printf("Expected: %i\n", memcmp(str, str2, n));
			printf("Delivered: %s\n\n", ft_memcmp(str, str2, n));
			return (0);
		}
		n++;
	}
	return (0);
}

