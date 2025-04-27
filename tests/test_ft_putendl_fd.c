/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:06:38 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 17:47:13 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define SUCCESS "✅"

void test_putendl_fd(const char *s, int fd)
{
    printf(BLUE "Testing string: \"" RESET);
    if (s)
        printf(GREEN "%s" RESET, s);
    else
        printf(RED "(null)" RESET);
    printf(BLUE "\"\n" RESET);

    printf(GREEN "Output from ft_putendl_fd:" RESET "\n");
    ft_putendl_fd((char *)s, fd);
	write(1, "\n" , 1);
}

int main(void)
{
    printf(GREEN SUCCESS " Starting ft_putendl_fd tests\n\n" RESET);

    test_putendl_fd("there is a string here", 1);
    test_putendl_fd("Hello, world!", 1);
    test_putendl_fd("", 1);                  
    test_putendl_fd("1234567890", 1);       
    test_putendl_fd("Special chars: !@#$^&*", 1);
    test_putendl_fd("Newline?\nNope, new line is added by ft_putendl_fd!", 1);
    test_putendl_fd(NULL, 1);                  

    printf("\n" GREEN SUCCESS " Finished ft_putendl_fd tests\n" RESET);

    return (0);
}
