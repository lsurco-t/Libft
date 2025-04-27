/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:24:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 17:05:30 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_putchar_fd(char c, int fd)
{
    if (c >= 32 && c <= 126)
	{
		printf(GREEN "Output from ft_putchar_fd:" RESET "\n");
		ft_putchar_fd(c, fd);
		printf("\n");
    }
	else
	{
		printf(BLUE "Output from ft_putchar_fd: (Non printable)" RESET "\n");
		ft_putchar_fd(c, fd);
	}
    write(fd, "\n", 1);
}

int main(void)
{
    printf(GREEN SUCCESS "Starting ft_putchar_fd tests\n\n" RESET);

    test_putchar_fd('a', 1);
    test_putchar_fd('Z', 1);
    test_putchar_fd('0', 1);
    test_putchar_fd('9', 1);
    test_putchar_fd('0', 1);
    test_putchar_fd(' ', 1); 
    test_putchar_fd('!', 1);
    test_putchar_fd('@', 1);
    test_putchar_fd(127, 1); 
    test_putchar_fd('3', 1);

    printf("\n" GREEN SUCCESS " Finished ft_putchar_fd tests\n" RESET);

    return (0);
}
