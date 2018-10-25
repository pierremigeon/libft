/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:47:18 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/23 13:14:39 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == needle[i])
			++i;
		else
		{
			i = 0;
			if (*haystack == needle[i])
				haystack--;
		}
		if (needle[i] == '\0')
			return ((char *)haystack - --i);
		haystack++;
	}
	return (NULL);
}
