/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:49:19 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/05 19:22:37 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int len;
	int i;
	
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));	
	while(s[i])
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}

char	ft_returnchar(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return ('A');
	}
	return (0);
}

int		main()
{
	char str[] = "hello";
	char *str2 = ft_strmap(str, ft_returnchar);
	printf("%s", str2);
	return (0);
}
