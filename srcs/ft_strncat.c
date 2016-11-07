/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:29:50 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/07 05:38:25 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2, size_t n)
{
	while (*s1++)
		;
	while (*s2 && n-- >= 0)
		*s1++ = *s2++;
	return (s1);
}
