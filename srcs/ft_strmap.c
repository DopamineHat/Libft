/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:35:55 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 04:33:38 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
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
		array[index] = f(s[index]);
		++index;
	}
	array[index] = '\0';
	return (array);
}
