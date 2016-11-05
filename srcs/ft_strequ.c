/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:23:49 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 00:08:51 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (0);
	}
	return (1);
}
