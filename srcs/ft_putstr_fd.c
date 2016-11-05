/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:39:56 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/04 23:56:28 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int index;

	index = 0;
	while (s[index])
		ft_putchar_fd(s[index++], fd);
}
