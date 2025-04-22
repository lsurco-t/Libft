/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:53:43 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/22 11:44:17 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	while (i < nmemb)
	{
		((int *)str)[i] = '\0';
		i++;
	}
	return (str);
}

int	main(void)
{
	int		*str1;
	int		*str2;
	size_t	nmemb;
	size_t	size;

	nmemb = 4;
	size = sizeof(int);
	str1 = calloc(nmemb, size);
	str2 = ft_calloc(nmemb, size);
	if (str1[0] == str2[0])
	{
		printf("Same results!\n");
		printf("Expected value: %i\n", *str1);
		printf("Function value: %i\n", *str2);
	}
	else
		printf("Different results!");
	free(str1);
	free(str2);
}
