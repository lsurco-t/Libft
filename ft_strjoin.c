/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:27:46 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/22 20:44:43 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	y;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		str[i] = s2[y];
		y++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "firststring_";
	str2 = "secondstring";
	str3 = ft_strjoin(str1, str2);
	printf("String result: %s\n", str3);
	free(str3);
	return (0);
}
