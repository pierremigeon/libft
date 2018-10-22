/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:07:23 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/21 15:20:17 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *merge; 
	size_t len;

	len = 0;
	len += ft_strlen(s1);
	len += ft_strlen(s2);
	if (!(merge = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_strcpy(merge, s1);
	ft_strcat(merge, s2);
	return (merge);
}
