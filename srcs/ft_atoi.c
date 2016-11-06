/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:51:33 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 04:36:07 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int nb;
	int index;

	nb = 0;
	index = 0;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if ((str[index] == '-' || str[index] == '+') ||
		(str[index] >= '0' && str[index] <= '9'))
	{
		if (str[index] == '-'
			&& str[index + 1] >= '0' && str[index + 1] <= '9')
		{
			++index;
		}
		else if (str[index] == '+' &&
				str[index + 1] >= '0' && str[index + 1] <= '9')
			++index;
		while (str[index] >= '0' && str[index] <= '9')
			nb = (nb * 10) + str[index++] - '0';
	}
	if (str[0] == '-')
		nb = -nb;
	return (nb);
}
