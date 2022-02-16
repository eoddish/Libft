/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoddish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:23:23 by eoddish           #+#    #+#             */
/*   Updated: 2020/11/23 19:09:44 by eoddish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *res;

	if (!lst)
		return (0);
	res = lst;
	while (res->next)
		res = res->next;
	return (res);
}
