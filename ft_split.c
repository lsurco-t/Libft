/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:18:21 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/25 13:18:53 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**strout;
	size_t	i;
	size_t	len;
	size_t	totallen;
	size_t x;
	char	*str;

	len = (ft_strlen(s) / sizeof(char)) + 1;
	i = 0;
	totallen	= 0;
	while (s[i])
	{	
		 str = malloc ((totallen + 1) * sizeof(char));
			if (strout == NULL)
			return(NULL);
		totallen++;
		i++;
		free(str);
	}
	strout = malloc((totallen + 1) * sizeof(char));
	i = 0;
	x = 0;
	while (i < totallen)
	{
		strout[i][x] = s[i];
		if (i < totallen)
		{
			i++;
			strout[i] = c;
		}
	}
	strout[i][x] = '\0';
	return (strout);
}

int	main(void)
{
	char	*str;
	char	c;
	char	**str_output;

	str = "splitthisstring";
	c = '_';
	str_output = ft_split(str,c);
	printf("Function result after split: %s", *str_output);
	free(str_output);
	return (0);	
}
