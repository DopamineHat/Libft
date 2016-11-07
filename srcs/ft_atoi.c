/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:51:33 by adeletan          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/11/07 02:23:14 by adeletan         ###   ########.fr       */
=======
/*   Updated: 2016/11/07 02:26:38 by rpagot           ###   ########.fr       */
>>>>>>> 49fd4ed92aef20b979447581212dd9cc4f4396a8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int i;
	int s;
	int x;

	i = 0;
	s = 1;
	x = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '+')
		++i;
	while (str[i] == '-')
	{
		s = -1;
		++i;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		x *= 10;
		x += (str[i] - '0');
		++i;
	}
	return (x * s);
}
