/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:19:21 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/13 20:56:28 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d; 
	const char *s;

	d = (char *)dst;
	s = (const char *)src;
	while (n--)
	{
		*d++ = *s++;
	}	
	return ((void *)dst);
}


#include <stdio.h>
#include <stdlib.h>
int		main(int argc, char **argv)
{
	size_t len;

	len = atoi(argv[3]);
	if (argc == 4)
	{
		printf("%s\n", ft_memcpy(argv[1], argv[2], len));
		//printf("%s\n", strncpy(argv[1], argv[2], len));
	}
	return (0);
}

