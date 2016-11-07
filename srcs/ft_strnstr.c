/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:23:06 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/07 06:31:52 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	int		index;
	int		index2;
	size_t	poubelle;

	if (len > (unsigned long)ft_strlen(little))
		poubelle = (unsigned long)ft_strlen(little);
	index = 0;
	index2 = -1;
	if (!(little[index]))
		return ((char*)big);
	while (big[index] && (index + ft_strlen(little) <= (int)len))
	{
		if (big[index] == little[0])
			if (!(ft_strcmp(ft_strsub(big, index, poubelle),
						ft_strsub(little, 0, poubelle))) && index2 == -1)
				index2 = index;
		++index;
	}
	if (index2 == -1)
		return (NULL);
	return ((char*)(&big[index2]));
}
