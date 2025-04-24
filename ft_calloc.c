/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:53:43 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 14:25:42 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	size_t	nmemb;
	size_t	size;
	size_t	i;

	nmemb = 5;
	size = sizeof(int);
	str1 = calloc(nmemb, size);
	str2 = ft_calloc(nmemb, size);
	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
		{
			printf("Different results!\n");
			printf("Expected value: %i\n", str1[i]);
			printf("Function value: %i\n", str2[i]);
			return (1);
		}
		i++;
	}
	printf("Same results!\n");
	free(str1);
	free(str2);
	return (0);
}
