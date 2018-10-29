/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:47:18 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/28 15:43:19 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	const char *h_str;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		h_str = haystack;
		while (needle[i] && *haystack == needle[i])
		{
			h_str++;
			++i;
		}
		if (needle[i] == '\0')
			return ((char *)haystack - --i);
		haystack++;
	}
	return (NULL);
}

#include <stdio.h>
int		main()
{
	char str[] = "helhello";
	char str2[] = "hello";
	printf("%p\n", ft_strstr(str, str2));
	printf("%p\n", strstr(str, str2));
	char str3[] = "helhello";
	char str4[] = "hello";
	printf("%p\n", ft_strstr(str3, str4));
	printf("%p\n", strstr(str3, str4));

	const char *largestring = "Foo Bar BAz";
	const char *smallstring = "Bar";
	char *ptr;
	ptr = ft_strstr(largestring, smallstring);
	printf("%s", ptr);

	return (0);
}
