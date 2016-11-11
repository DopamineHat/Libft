/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 06:33:10 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/11 09:03:24 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_space(char const *s, int *index2, int *index3)
{
	int index;

	index = 0;
	while (s[index])
		++index;
	--index;
	while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
		--index;
	*index3 = index;
	index = 0;
	while (s[index] == '\n' || s[index] == ' ' || s[index] == '\t')
		++index;
	*index2 = index;
	return (*index3 - *index2);
}

char		*ft_strtrim(char const *s)
{
	char	*array;
	int		index;
	int		index2;
	int		index3;

	index3 = ft_count_space(s, &index, &index2);
	if (!(array = (char*)malloc(index3 + 1 * sizeof(char))))
		return (NULL);
	index3 = 0;
	while (index <= index2)
		array[index3++] = s[index++];
	array[index3] = '\0';
	return (array);
}
