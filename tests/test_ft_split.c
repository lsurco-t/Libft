/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:00:52 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 11:03:01 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"

void	test_split(const char *str, char c)
{
	char	**result;
	int		i;

	i = 0;
	printf(CYAN "Testing split on: \"%s\" with delimiter '%c'\n" RESET, str, c);
	printf(YELLOW "Result:\n" RESET);
	result = ft_split(str, c);
	if (!result)
	{
		printf(RED "❌ ft_split returned NULL\n" RESET);
		printf("-------------------------------\n");
		return ;
	}
	while (result[i])
	{
		printf(GREEN "✅ [%d]: \"%s\"\n" RESET, i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	printf("-------------------------------\n\n");
}

int	main(void)
{
	test_split("--1--2--eee-34343-", '-');
	test_split("", '-');
	test_split("no-delimiters-here", 'z');
	test_split("    split     this    ", ' ');
	test_split(",,,split,,,this,,,", ',');
	test_split("  34  334  66  ", ' ');
	return (0);
}
