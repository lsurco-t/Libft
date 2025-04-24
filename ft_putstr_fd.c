/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:26:44 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 12:03:38 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	int		nb;

	i = 0;
	nb = fd;
	while (s[i])
	{
		ft_putchar_fd(s[i], nb);
		i++;
	}
}

int	main(void)
{
	char	*s;
	int		n;

	n = 1;
	s = "there is a string here";
	ft_putstr_fd(s, n);
	return (0);
}
