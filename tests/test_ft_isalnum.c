/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:59:26 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 10:46:40 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

void    compare_isalnum(int c)
{
    int original;
    int custom;

    original = isalnum(c);
    custom = ft_isalnum(c);

    if ((original != 0 && custom == 1) || (original == 0 && custom == 0))
    {
        printf("\n✅ Match for '%c' (ASCII %d)\n", c, c);
		printf("   isalnum: %d | ft_isalnum: %d\n\n", original, custom);
    }
    else
    {
        printf("❌ Mismatch for '%c' (ASCII %d)\n", c, c);
        printf("   isalnum: %d | ft_isalnum: %d\n\n", original, custom);
    }
    printf("-------------------------------\n");
}

int main(void)
{
    int c = 0;

    while (c <= 127)
    {
        compare_isalnum(c);
        c++;
    }
    return (0);
}
