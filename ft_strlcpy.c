/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:22:51 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/18 10:45:35 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*size_t	ft_strlcpy(char *dst, const char * src, size_t n)
{


}*/

int	main(void)
{
	const char	src[20] = "Stringtocopy";
	char	dst[20];
	size_t	n;

	
	n = strlcpy(dst, src, sizeof(src));
	printf("Result function is: %s\n", dst);
	return(0);
}