/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:39:34 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/22 15:50:44 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
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

	str1 = "Hello, world!";
	str2 = strdup(str1);
	str3 = ft_strdup(str1);
	if (strcmp(str2, str3) == 0)
	{
		printf("Same Results!\n");
		printf("Expected result: %s\n", str2);
		printf("Function result: %s\n", str3);
	}
	else
	{
		printf("Different Results!\n");
		printf("Expected result: %s\n", str2);
		printf("Function result: %s\n", str3);
	}
	free(str2);
	free(str3);
	return (0);
}
