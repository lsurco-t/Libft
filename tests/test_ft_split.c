/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:00:52 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/26 22:51:23 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	c;
	char	**str_output;
	int		i;

	str = "--1--2--eee-34343-";
	c = ' ';
	str_output = ft_split(str, c);
	i = 0;
	printf("String to split: %s\n\n", str);
	while (str_output[i])
	{
		printf("Function result after split: %s\n", str_output[i]);
		free(str_output[i]);
		i++;
	}
	free(str_output);
	return (0);
}
