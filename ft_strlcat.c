/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:51:25 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/18 11:55:47 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*size_t	ft_strlcat(char *dst, const char *src, size_t n)
{


}*/

int	main(void)
{
	char	src[] = "test string";
	char	dst[20];
	size_t n;

	n = strlcat(dst, src, sizeof(dst));
	printf("Function returned value: %s\n", dst);
	return(0);
}