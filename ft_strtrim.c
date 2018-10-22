/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 15:30:22 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/21 15:44:58 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_countspaces(char const *s)
{
	int i; 

	i = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n')
			i++;
		s++;
	}
	return (i);
}




char	*ft_strtrim(char const *s)
{
	char *trimmed;
	int len;
	int i; 

	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	if (!(trimmed = (char *)malloc(sizeof(char) * (len - spaces)))
		return (NULL);
	

	return (trimmed);
}
