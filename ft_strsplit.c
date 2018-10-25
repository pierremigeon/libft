/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:33:36 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/24 19:37:31 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int		ft_count_delim(const char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == c && str[j + 1] != c && str[j + 1] != '\0')
			i++;
		j++;
	}
	return (i + 1);
}

static int		ft_wordlen(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	if (!(split = (char **)malloc(sizeof(char *) * ft_count_delim(s, c))) || !s || !c)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if ((*(s - 1) == c || !*(s - 1)) && *(s + 1))
		{
			split[i++] = ft_strnew(ft_wordlen(s, c));
			j = 0;
		}
		split[i - 1][j++] = *s;
		s++;
	}
	split[i] = NULL;
	return (split);
}
