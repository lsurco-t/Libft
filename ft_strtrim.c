/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:52:16 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/22 22:03:25 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	i;
	char *strtrim;

	i = 0;
	if (strtrim == NULL)
		return(NULL);
	
	return(strtrim);
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
	free(str2);
	str1 = "removecharactersfromhere";
	set = "mo";
	str2 = ft_strtrim(str1, set);
	printf("Original String: %s\n", str1);
	printf("Characters to remove: %s\n", set);
	printf("Trimmed string: %s\n", str2);
	free(str2);
	str1 = "removecharactersfromhere";
	set = "he";
	str2 = ft_strtrim(str1, set);
	printf("Original String: %s\n", str1);
	printf("Characters to remove: %s\n", set);
	printf("Trimmed string: %s\n", str2);
	free(str2);
	return (0);
}
