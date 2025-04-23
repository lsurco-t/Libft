/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:19:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/23 15:03:39 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	size_t	len;

	if (n > 2147483647 || n < -2147483648)
		return (NULL);
	len = ft_strlen((char *)n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (n / 10) * (n + 48);
		i++;
	}
	return (str);
}

int	main(void)
{
	int		n;
	char	*strn;

	n = 34;
	strn = ft_itoa(n);
	if (strn == NULL)
		printf("Invalid number!\n");
	free(strn);
	return (1);
	printf("Valid number %s", strn);
	free(strn);
	return (0);
}
