/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:27:18 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/25 10:55:09 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	cpylen;

	i = 0;
	if (s == NULL)
		return (NULL);
	cpylen = ft_strlen(s);
	if (start >= cpylen || len == 0)
		return (ft_strdup(""));
	if (start + len > cpylen)
		len = cpylen - start;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int	main(void)
{
	char			*str;
	char			*substr;
	size_t			len;
	unsigned int	start;

	str = "stringtocopy";
	start = 0;
	len = 5;
	while (start < 20 && len > 0)
	{
		substr = ft_substr(str, start, len);
		printf("Starting point: %i\n", start);
		printf("length of copy: %zu\n", len);
		printf("Original string: %s\n", str);
		printf("Substring is: %s\n\n", substr);
		free(substr);
		start++;
		len--;
	}
	return (0);
}
