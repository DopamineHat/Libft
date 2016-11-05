/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:09:47 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/05 07:16:35 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		index;
	char	*array;

	index = 0;
	if (!(array = (char*)malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (len > 0)
	{
		array[index++] = s[start++];
		len--;
	}
	return (array);
}
