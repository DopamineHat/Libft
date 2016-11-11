/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:25:02 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/11 20:48:04 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t l1;
	size_t i2;

	i = 0;
	i2 = 0;
	l1 = ft_strlen(src);
	while (dst[i])
		++i;
	if (dst[i] != '\0' && !(dst[i + 1]))
		return (0);
	while (i2 < n)
	{
		if (i2 < l1)
			dst[i] = src[i2];
		else
			dst[i] = '\0';
		++i2;
		++i;
	}
	return (i);
}
