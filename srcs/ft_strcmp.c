/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 02:09:53 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/06 06:14:08 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while (((unsigned char)s1[index] == (unsigned char)s2[index]) &&
			(s1[index] && s2[index]))
		++index;
	if (s1[index] == '\0' && s2[index] == '\0')
		return (0);
	return (s1[index] - s2[index]);
}
