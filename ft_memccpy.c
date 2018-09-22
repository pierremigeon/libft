/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:42:27 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/21 16:55:30 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *c_dst;
	unsigned char *c_src;

	if (!(ft_isascii(c)))
		return (NULL);
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		++i;
		if (c_dst[i - 1] == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	char dst[5] = "heAlo";
	char src[5] = "world";
	int c;
	size_t i;

	c = 65; 
	i = 5;
	
	printf("%p", ft_memccpy((void *)dst, (void *)src, c, i));
	printf("%p", memccpy((void *)dst, (void *)src, c, i));

	dst[5] = "heAlo";
	src[5] = "world";

	c = 65;
	i = 5;

	printf("%p", ft_memccpy((void *)dst, (void *)src, c, i));
	printf("%p", memccpy((void *)dst, (void *)src, c, i));

	return (0);
}
