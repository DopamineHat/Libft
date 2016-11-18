/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:11:59 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/18 16:58:58 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_sort_tab(int *tab)
{
	int tmp;
	int i;
	int len;

	i = 0;
	while (*tab++)
		++i;
	tab = tab - i;
	len = i;
	while (i-- > 0)
	{
		while (*tab)
		{
			if (*(tab - 1) > *tab)
			{
				tmp = *tab;
				*tab = *(tab - 1);
				*(tab - 1) = tmp;
			}
			++tab;
		}
		tab -= i;
	}
	return (tab - len);
}
