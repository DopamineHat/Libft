/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:03:40 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/18 17:12:12 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_is_space(char *str)
{
	while (*str && !(*str == ' '))
		++str;
	if (*str)
		return (str);
	else
		return (NULL);
}
