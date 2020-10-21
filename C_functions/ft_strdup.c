/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:25:43 by obouykou          #+#    #+#             */
/*   Updated: 2020/10/21 11:25:57 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *src)
{
	int		l;
	int		i;
	char	*dup;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	dup = (char*)malloc(sizeof(char) * (l + 1));
	if (!dup)
		return (NULL);
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
