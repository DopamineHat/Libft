/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 01:43:09 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/07 02:01:47 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int s;
	int x;

	i = 0;
	s = 1;
	x = 0;
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
            || str[i] == '\n' || str[i] == '\r' || str[i] == '+')
		++i;
	if (str[i] == '-')
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

int main()
{
	printf("%d", ft_atoi("987654321"));
	return (0);
}
