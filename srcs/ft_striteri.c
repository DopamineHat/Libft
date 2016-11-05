/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:37:31 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/05 07:51:36 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
