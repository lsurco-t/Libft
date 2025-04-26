/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:18:21 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/26 18:01:17 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*newstr(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	*str;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static size_t	cwords(const char *s, char c)
{
	size_t	i;
	int		counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (counter);
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

static void	cleanstr(char **str, size_t i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}
char	**ft_split(char const *s, char c)
{
	char	**strout;
	size_t	i;
	size_t	x;

	if (s == NULL)
		return (NULL);
	strout = malloc((cwords(s, c) + 1) * sizeof(char *));
	if (strout == NULL)
		return (NULL);
	x = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			strout[x] = newstr(&s[i], c);
			if (strout[x] == NULL)
			{
				cleanstr(strout, x);
				return (NULL);
			}
			x++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	strout[x] = NULL;
	return (strout);
}

int	main(void)
{
	char	*str;
	char	c;
	char	**str_output;
	int		i;

	str = "--1--2----3---4--";
	c = '-';
	str_output = ft_split(str, c);
	i = 0;
	printf("String to split: %s\n\n", str);
	while (str_output[i])
	{
		printf("Function result after split: %s\n", str_output[i]);
		free(str_output[i]);
		i++;
	}
	free(str_output);
	return (0);
}
