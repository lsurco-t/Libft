/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:57:08 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:26:45 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	compare_isalpha(int c)
{
	int	original;
	int	custom;

	original = isalpha(c);
	custom = ft_isalpha(c);
	if ((original != 0 && custom == 1) || (original == 0 && custom == 0))
	{
		printf("\n✅ Match for '%c' (ASCII %d)\n", c, c);
		printf("   isalpha: %d | ft_isalpha: %d\n\n", original, custom);
	}
	else
	{
		printf("❌ Mismatch for '%c' (ASCII %d)\n", c, c);
		printf("   isalpha: %d | ft_isalpha: %d\n\n", original, custom);
	}
	printf("-------------------------------\n");
}

int	main(void)
{
	int	c;

	c = 0;
	while (c <= 127)
	{
		compare_isalpha(c);
		c++;
	}
	return (0);
}
