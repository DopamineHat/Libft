/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 22:20:29 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/17 22:46:11 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char*)big);
	i = 0;
	while (*big && len)
	{
		if (*big == little[i])
			i++;
		else
		{
			big = big - i;
			len = len + i;
			i = 0;
		}
		if ((!little[i]))
			return ((char*)(big - i + 1));
		++big;
		--len;
	}
	return (NULL);
}
