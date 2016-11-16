/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:38:13 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/16 16:02:42 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	list = *alst;
	if (!alst || !del)
		return ;
	while (list)
	{
		del(list->content, list->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}
