/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:27:40 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:25:53 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

int	main(void)
{
	const char	*tests[] = {"2147483648uu", "  21478uu", "-42", "    +1337abc",
					"abc123", "", "    ", "0", "-0", NULL};
	int			i;
	int			oa;
	int			fa;

	i = 0;
	while (tests[i])
	{
		printf("Testing input: \"%s\"\n", tests[i]);
		oa = atoi(tests[i]);
		fa = ft_atoi(tests[i]);
		if (oa == fa)
		{
			printf(GREEN "✅ Same results!\n" RESET);
			printf("Expected: %d\n", oa);
			printf("Function result: %d\n", fa);
		}
		else
		{
			printf(RED "❌ Different results!\n" RESET);
			printf("Expected: %d\n", oa);
			printf("Function result: %d\n", fa);
		}
		printf("----------------------------------------------\n");
		i++;
	}
	return (0);
}
