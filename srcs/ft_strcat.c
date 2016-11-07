/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:36:21 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/07 07:44:47 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (s1[index])
		++index;
	while (s2[index2])
	{
		s1[index] = s2[index2];
		++index;
		++index2;
	}
	s1[index] = '\0';
	return (s1);
}
