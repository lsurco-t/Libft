/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:18:46 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 10:51:51 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	compare_isascii(int c)
{
	int	original;
	int	custom;

	original = isascii(c);
	custom = ft_isascii(c);
	if ((original != 0 && custom == 1) || (original == 0 && custom == 0))
	{
		printf("\n✅ Match for '%c' (ASCII %d)\n", c, c);
		printf("   isascii: %d | ft_isascii: %d\n\n", original, custom);
	}
	else
	{
		printf("❌ Mismatch for '%c' (ASCII %d)\n", c, c);
		printf("   isascii: %d | ft_isascii: %d\n\n", original, custom);
	}
	printf("-------------------------------\n");
}

int	main(void)
{
	int c = 0;

	while (c <= 255)
	{
		compare_isascii(c);
		c++;
	}
	return (0);
}