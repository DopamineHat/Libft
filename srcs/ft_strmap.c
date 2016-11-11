/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:35:55 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/11 17:40:45 by rpagot           ###   ########.fr       */
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
	if (!(array = (char*)malloc((index + 1) * sizeof(char))))
		return (NULL);
	array[index] = '\0';
	index = 0;
	while (s[index])
	{
		array[index] = f(s[index]);
		++index;
	}
	return (array);
}
