/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoddish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:11:48 by eoddish           #+#    #+#             */
/*   Updated: 2020/11/19 18:32:47 by eoddish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <sys/errno.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	extern int	errno;
	int			n;
	int			i;
	char		*s2;

	i = 0;
	n = ft_strlen(s1);
	s2 = malloc(n + 1);
	if (!s2)
	{
		errno = 12;
		return (0);
	}
	while (i < n + 1)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
