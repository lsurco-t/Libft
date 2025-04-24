/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:26:44 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 14:21:59 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}

int	main(void)
{
	char	*s;
	char	*s2;
	char	*s3;
	int		fd;

	fd = 1;
	s = "there is a string here";
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	s2 = "&*^^(smth)";
	ft_putstr_fd(s2, fd);
	write(fd, "\n", 1);
	s3 = "ASKDO989?_";
	ft_putstr_fd(s3, fd);
	write(fd, "\n", 1);
	return (0);
}
