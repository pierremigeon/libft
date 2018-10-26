/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:33:36 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/26 15:58:53 by pmigeon          ###   ########.fr       */
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
		
		if (str[j] == c && str[j + 1] != c)
			i++;
		j++;
	}
	if (i == 0 && j > 0)
		i = 1;
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

#include <stdio.h>
char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = -1;
	if (!(split = (char **)malloc(sizeof(char *) * ft_count_delim(s, c))) || !s || !c)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(split[++i] = ft_strnew(ft_wordlen(s, c))))
			split[i] = NULL;
		j = 0;
		while (*s && *s != c)
			split[i][j++] = *s++;
	}
	split[++i] = NULL;
	return (split);
}

#include <unistd.h>
int		main()
{
	char **split;
	char str[] ="hello*fellow***students*";
	split = ft_strsplit(str, '*');

	int i = 0;
	while (split[i])
	{
		ft_putstr(split[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
