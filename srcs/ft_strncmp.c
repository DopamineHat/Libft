/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 02:56:31 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/12 21:55:25 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (((unsigned char)*s1++ == (unsigned char)*s2++) &&
			(*s1 && *s2) && (n-- > 0))
		;
	return ((unsigned char)*--s1 - (unsigned char)*--s2);
}
