/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:07:39 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 04:34:27 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int index;
	int total;

	index = 0;
	total = 0;
	while (s[index])
	{
		if (total == 0 && (s[index] != c && s[index] != '\0'))
			++total;
		if (s[index] == c && (s[index + 1] != c && s[index + 1] != '\0'))
			++total;
		++index;
	}
	return (total);
}

static void		ft_trouver_mots(char const *s, int *index, int *index2, char c)
{
	while (s[*index] == c)
		++*index;
	*index2 = *index;
	while (s[*index2 + 1] != c && s[*index2 + 1] != '\0')
		++*index2;
}

char			**ft_strsplit(char const *s, char c)
{
	int		index;
	int		index2;
	int		index3;
	int		index4;
	char	**array;

	index = 0;
	index2 = 0;
	index3 = 0;
	index4 = 0;
	if ((array = (char**)malloc(ft_count_words(s, c) * sizeof(char*))) == NULL)
		return (NULL);
	while (array[index3])
	{
		ft_trouver_mots(s, &index, &index2, c);
		if (!(array[index3] = (char*)malloc((index2 - index) * sizeof(char))))
			return (NULL);
		while (index <= index2)
		{
			array[index3][index4++] = s[index++];
		}
		array[index3++][index4] = '\0';
		index4 = 0;
	}
	return (array);
}
