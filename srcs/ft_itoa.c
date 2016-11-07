/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:35:25 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/07 00:14:40 by adeletan         ###   ########.fr       */
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
	int		negative;

	if (n == -2147483648)
		return ("-2147483648");
	index = ft_count_size(n);
	if ((array = (char*)malloc((index + 1) * sizeof(char))) == NULL)
		return (NULL);
	array[index + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		negative = 1;
	}
	while (index >= 0)
	{
		array[index] = (n % 10) + '0';
		n = n / 10;
		--index;
	}
	if (negative == 1)
		array[0] = '-';
	return (array);
}
