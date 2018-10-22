/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:40:59 by pmigeon           #+#    #+#             */
/*   Updated: 2018/10/05 16:31:15 by pmigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		(*f)(s++);

}

#include <stdio.h>

int		main()
{
	char str[] = "";
	printf("%s\n", str);
	ft_striter(str, ft_strclr);
	printf("%s\n", str);
	return (0);
}
