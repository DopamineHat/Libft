/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:34:39 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 04:34:05 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	while (s1[index] && s2[index] && (index < n))
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (0);
	}
	return (1);
}
