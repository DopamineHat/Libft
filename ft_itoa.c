/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:12:28 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/05 22:26:42 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	is_negative(int *n, int *mark)
{
	if (*n < 0)
		*mark = -1;
}

char	*ft_itoa(int n)
{
	int		mark;
	int		tmp;
	int		l;
	char	*str;

	mark = 1;
	l = 0;
	tmp = n;
	while ((tmp /= 10) != 0)
		++l;
	if ((str = (char *)malloc((++l - mark) * sizeof(char))) == NULL)
		str = NULL;
	*str = '\0';
	while ((n /= 10) != 0)
		*str-- = ('0' + (n % 10));
	is_negative(&n, &mark);
	if (mark == -1)
		*str = '-';
	return (str);
}

int		main(void)
{
	printf("%s", ft_itoa(23));
	return (0);
}
