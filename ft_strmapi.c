/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:32:23 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/23 23:27:17 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned 	int, char))
{
	unsigned int	i;
	char	*str;
	size_t	len;
		
	i = 0;
	if (!s)
		return(NULL);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return(NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
static char test_function(unsigned int i, char c)
{
	(void)	i;
	return(ft_toupper(c));
}

static char test_function2(unsigned int i, char c)
{
	(void)	i;
	if (ft_isalpha(c))
		return('1');
	else
		return('0');
}
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "this is the string";
	str2 = ft_strmapi(str1, test_function);
	printf("Result of function: %s\n", str2);
	free(str2);

	str2 = ft_strmapi(str1, test_function2);
	printf("Result of function: %s\n", str2);
	free(str2);

	return (0);
}
