/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:09:39 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/05 17:10:12 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (!f)
		return;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

#include <stdio.h>

int		main()
{
	char str[] = "hello";
	printf("%s\n", str);
	ft_striteri(str, ft_strclr);
	printf("%s\n", str);
	return (0);
}
