/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:22:51 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/18 11:50:31 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize);

/*size_t	ft_strlcpy(char *dst, const char * src, size_t n)
{
	char	src[] = "Stringtocopy";
	char	dst[20];
	size_t	n;

}*/
int	main(void)
{
	n = strlcpy(dst, src, sizeof(dst));
	printf("Result function is: %s\n", dst);
	return (0);
}
