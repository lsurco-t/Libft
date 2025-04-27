/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:20:52 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:24:47 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	compare_isdigit(int c)
{
	int	original;
	int	custom;

	original = isdigit(c);
	custom = ft_isdigit(c);
	if ((original != 0 && custom == 1) || (original == 0 && custom == 0))
	{
		printf("\n✅ Match for '%c' (ASCII %d)\n", c, c);
		printf("   isdigit: %d | ft_isdigit: %d\n\n", original, custom);
	}
	else
	{
		printf("❌ Mismatch for '%c' (ASCII %d)\n", c, c);
		printf("   isdigit: %d | ft_isdigit: %d\n\n", original, custom);
	}
	printf("-------------------------------\n");
}

int	main(void)
{
	int	c;

	c = 0;
	while (c <= 127)
	{
		compare_isdigit(c);
		c++;
	}
	return (0);
}
