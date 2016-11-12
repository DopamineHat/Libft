/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:23:06 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/12 22:02:34 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	int		i;
	int		i2;
	size_t	trash;

	if (len > (unsigned long)ft_strlen(little))
		trash = (unsigned long)ft_strlen(little);
	i = 0;
	i2 = -1;
	if (!(little[i]))
		return ((char*)big);
	while (big[i] && (i + ft_strlen(little) <= (int)len))
	{
		if (big[i] == little[0])
			if (!(ft_strcmp(ft_strsub(big, i, trash),
						ft_strsub(little, 0, trash))) && i2 == -1)
				i2 = i;
		++i;
	}
	if (i2 == -1)
		return (NULL);
	return ((char*)(&big[i2]));
}
