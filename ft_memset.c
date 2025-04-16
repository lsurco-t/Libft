/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:36:56 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/16 21:36:56 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	<stdio.h>

/*void	*ft_memset(void	)
{


}*/

int	main(void)
{
	//char	*str1;
	char	*str2;
	int	count;

	count = 3;
	//str1 = "firststring";
	str2 = "secondstring";
	memset(str2, count, 4);
	return(0);
}
