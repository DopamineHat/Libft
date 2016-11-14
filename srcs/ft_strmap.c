/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:35:55 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/14 19:53:20 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		i;
	char	*array;

	i = 0;
	if (!(s) || !(f))
		return (NULL);
	while (s[i])
		++i;
	if (!(array = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	array[i] = '\0';
	i = 0;
	while (s[i])
	{
		array[i] = f(s[i]);
		++i;
	}
	return (array);
}
