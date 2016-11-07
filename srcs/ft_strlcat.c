/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:25:02 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/07 09:24:57 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t index;
	size_t limit;
	size_t index2;

	index = 0;
	index2 = 0;
	while (*src++)
		++limit;
	if (*src != '\0')
		return (0);
	while (dst[index])
		++index;
	if (dst[index] != '\0')
		return (0);
	while (index2 < n && dst[index + 1] == '\0')
	{
		if (index2 < limit)
			dst[index] = src[index2];
		else
			dst[index] = '\0';
		++index2;
		++index;
	}
	return (index);
}
