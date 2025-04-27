/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:07:38 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 17:46:46 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define SUCCESS "✅"

void test_putstr_fd(char *s, int fd)
{
    printf(BLUE "Testing string: " RESET GREEN "\"%s\"\n" RESET, s);
    printf(GREEN "Output from ft_putstr_fd:" RESET "\n");
    ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

int main(void)
{
    int fd;
    char *s1 = "there is a string here";
    char *s2 = "&*^^(smth)";
    char *s3 = "ASKDO989?_";

    fd = 1;
    printf(GREEN SUCCESS " Starting ft_putstr_fd tests\n\n" RESET);
    test_putstr_fd(s1, fd);
	write(fd, "\n", 1);
    test_putstr_fd(s2, fd);
	write(fd, "\n", 1);
    test_putstr_fd(s3, fd);
    printf("\n" GREEN SUCCESS " Finished ft_putstr_fd tests\n" RESET);

    return (0);
}
