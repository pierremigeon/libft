/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 19:23:58 by pmigeon           #+#    #+#             */
/*   Updated: 2018/09/24 15:28:41 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}	
	return (0);
}

#include <stdio.h>

int		main()
{
	size_t i; 

	i = 5; 
	char str[] = "hell";
	char str2[] = "hello";
	printf("%d\n", ft_memcmp((void *)str, (void *)str2, i));
	printf("%d\n", memcmp((void *)str, (void *)str2, i));
	return (0);
}
