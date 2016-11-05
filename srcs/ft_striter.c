/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:52:14 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/05 07:56:03 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	int index;

	index = 0;
	while (s[index])
	{
		f(&s[index]);
		index++;
	}
}
