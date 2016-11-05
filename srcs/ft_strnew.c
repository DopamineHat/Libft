/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 08:00:07 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 00:09:45 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strnew(size_t size)
{
	char	*array;
	size_t	index;

	index = 0;
	if (!(array = (char*)malloc(size + 1 * sizeof(char))))
		return (NULL);
	array[size + 1] = '\0';
	while (index < size)
	{
		array[index] = '\0';
		--index;
	}
	return (array);
}
