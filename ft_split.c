/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:18:21 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/25 14:37:11 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static	char *ft_newstr(char c)
{
	size_t   i;
	size_t	len;
	size_t	totallen;
	char	*str;
	
	i = 0;
	len = sizeof(c);
	str = malloc ((len + 1) * sizeof(char));
    if (str == NULL)
        return(NULL);
	totallen = ft_strlen(str);
	while (i < totallen)
	{
		str[i] = c;
		i++;
	}
	str[i] = '/0';
	return(str);
}

static int ft_newstrlen(const char *s, char c)
{
	size_t	len;
	size_t	tlen;
	size_t	clen;

	len = ft_strlen(s);
	clen = len - 1;
	tlen = len + clen;
	return(tlen);
}

char    **ft_split(char const *s, char c)
{
    char    **strout;
    size_t   tlen;
    char    *str;
	size_t	i;

	tlen = ft_newstrlen(s, c);
	strout = malloc((tlen + 1) * sizeof(char));
	if (strout == NULL)
		return(NULL);
	i = 0;
    while (i < tlen)
    {	
		str = ft_newstrlen(s[i], c);
        strout[i] = str;
        if (i < tlen)
        {
            i++;
            strout[i] = c;
        }
		free(str);
    }
    strout[i] = '\0';
    return (strout);
}

int    main(void)
{
    char    *str;
    char    c;
    char    **str_output;
	int	i;

    str = "splitthisstring";
    c = '_';
    str_output = ft_split(str,c);
	while (!str_output)
	{
		i = 0;
    	while(!str_output[i])
		{
			printf("Function result after split: %s", *str_output);
			i++;
		}
    }
	free(str_output);
    return (0);    
}
