/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:07:08 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 17:47:00 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define SUCCESS "✅"

void test_putnbr_fd(int nb, int fd)
{
    printf(BLUE "\nTesting number: " RESET GREEN "%d\n" RESET, nb);
    printf(GREEN "Output from ft_putnbr_fd:" RESET "\n");
    ft_putnbr_fd(nb, fd);
    write(fd, "\n", 1);
}

int main(void)
{
    int nb;
    int fd;
    int maxnb;

    fd = 1;
    nb = 5698256;
    maxnb = 5698300;
    printf(GREEN SUCCESS " Starting ft_putnbr_fd tests\n" RESET);
    while (nb <= maxnb)
    {
        test_putnbr_fd(nb, fd);
        nb++;
    }
    printf("\n" GREEN SUCCESS " Finished ft_putnbr_fd tests\n" RESET);
    return (0);
}
