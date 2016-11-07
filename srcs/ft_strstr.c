/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 04:33:22 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/06 05:33:18 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// #include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*here;
	int		mark;

	here = NULL;
	while (*big++)
		if (*big == *little)
		{
			mark = 1;
			++little;
		}
		if (mark == 1)
			*here++ = *big;
	return (here);
}

int		main(void)
{
	//printf("%s", strstr("yolololooo", "lol"));
	printf("%s", ft_strstr("yolololooo", "lol"));
}
