/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:16:23 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/24 14:16:58 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nb;
	char	c;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	c = (nb % 10) + 48;
	write(fd, &c, 1);
}

int	main(void)
{
	int	nb;
	int	fd;
	int	maxnb;

	fd = 1;
	nb = 5698256;
	maxnb = 5698300;
	while (nb <= maxnb)
	{
		ft_putnbr_fd(nb, fd);
		write(fd, "\n", 1);
		nb++;
	}
	return (0);
}
