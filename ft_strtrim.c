/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:52:16 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/23 10:49:25 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*strim;

	if (set == NULL)
		return (s1);
	else if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if(s1[i] == set[i])
			strim = ft_strchr(s1, set[i]);
		i++;
	}
	if (strim == NULL)
		return (NULL);
	return (strim);
}

int	main(void)
{
	char	*str1;
	char	*set;
	char	*str2;

	str1 = "removecharactersfromhere";
	set = "em";
	str2 = ft_strtrim(str1, set);
	printf("Original String: %s\n", str1);
	printf("Characters to remove: %s\n", set);
	printf("Trimmed string: %s\n", str2);
	//free(str2);
	str1 = "removecharactersfromhere";
	set = "mo";
	str2 = ft_strtrim(str1, set);
	printf("Original String: %s\n", str1);
	printf("Characters to remove: %s\n", set);
	printf("Trimmed string: %s\n", str2);
	//free(str2);
	str1 = "removecharactersfromhere";
	set = "he";
	str2 = ft_strtrim(str1, set);
	printf("Original String: %s\n", str1);
	printf("Characters to remove: %s\n", set);
	printf("Trimmed string: %s\n", str2);
	//free(str2);
	return (0);
}
