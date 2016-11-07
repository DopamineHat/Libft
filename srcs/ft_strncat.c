/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:29:50 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/07 07:56:02 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t index;
	size_t limit;
	size_t index2;

	index = 0;
	index2 = 0;
	limit = ft_strlen((char*)s2);
	while (s1[index])
		++index;
	while (index2 < n)
	{
		if (index2 < limit)
			s1[index] = s2[index2];
		else
			s1[index] = '\0';
		++index2;
		++index;
	}
	return (s1);
}
