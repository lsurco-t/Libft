/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:25:23 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:24:55 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	compare_isprint(int c)
{
	int	original;
	int	custom;

	original = isprint(c);
	custom = ft_isprint(c);
	if ((original != 0 && custom == 1) || (original == 0 && custom == 0))
	{
		printf("\n✅ Match for '%c' (ASCII %d)\n", c, c);
		printf("   isprint: %d | ft_isprint: %d\n\n", original, custom);
	}
	else
	{
		printf("❌ Mismatch for '%c' (ASCII %d)\n", c, c);
		printf("   isprint: %d | ft_isprint: %d\n\n", original, custom);
	}
	printf("-------------------------------\n");
}

int	main(void)
{
	int	c;

	c = 0;
	while (c <= 127)
	{
		compare_isprint(c);
		c++;
	}
	return (0);
}
