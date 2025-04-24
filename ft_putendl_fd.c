/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:14:43 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 12:25:56 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	int		dn;

	i = 0;
	dn = fd;
	while (s[i])
	{
		write(dn, &s[i], 1);
		i++;
	}
	write(dn, "\n", 1);
}

int	main(void)
{
	char	*s;
	int		fd;

	fd = 1;
	s = "there is a string here";
	ft_putendl_fd(s, fd);
	return (0);
}
