/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:25:11 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/05 07:43:21 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		index;
	char	*array;

	index = 0;
	while (s[index])
		++index;
	if (!(array = (char*)malloc(index * sizeof(char))))
		return (NULL);
	index = 0;
	while (s[index])
	{
		array[index] = f(index, s[index]);
		++index;
	}
	array[index] = '\0';
	return (array);
}
