/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:19:59 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/23 18:25:24 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_strnlen(int n)
{
	int len;

	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	else
		len = 0;	
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long int nb;
		
	nb = n;
	len = ft_strnlen(nb);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (str);
}

int	main(void)
{
	int		n;
	char	*strn;

	n = -568;
	while (n <= -566)
	{
		strn = ft_itoa(n);
		if (strn == NULL)
		{
			printf("Invalid number!\n");
			return (1);
		}
		printf("Valid number %s\n\n", strn);
		n++;
		free(strn);
	}
	return (0);
}
