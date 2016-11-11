/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:35:25 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/11 16:39:39 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_size(int nb)
{
	int size;

	size = 0;
	if (nb < 0)
	{
		++size;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		++size;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*array;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	index = ft_count_size(n);
	if ((array = (char*)malloc((index + 2) * sizeof(char))) == NULL)
		return (NULL);
	array[index + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		array[0] = '-';
	}
	while (index >= 0 && array[index] != '-')
	{
		array[index] = (n % 10) + '0';
		n = n / 10;
		--index;
	}
	return (array);
}
