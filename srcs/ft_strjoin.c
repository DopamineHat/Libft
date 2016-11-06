/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 06:56:57 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 04:33:22 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		index2;
	char	*array;

	index = 0;
	index2 = 0;
	while (s1[index])
		index++;
	while (s2[index2])
		++index2;
	if (!(array = (char*)malloc(index + index2 * sizeof(char))))
		return (NULL);
	index2 = 0;
	while (s1[index2])
	{
		array[index2] = s1[index2];
		++index2;
	}
	index2 = 0;
	while (s2[index2])
		array[index++] = s2[index2++];
	array[index] = '\0';
	return (array);
}
