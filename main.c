/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 10:50:35 by obouykou          #+#    #+#             */
/*   Updated: 2020/10/21 14:09:34 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/asm.h"

//void		print();
size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);

int			main(void)
{
	char	*s;
	char	dst[60];

//	print();
	s = NULL;
	
	/* strlen */
	printf("|M| ==> the length of |%s| = |%zu|\n", s, ft_strlen(s));
	//printf("|O| ==> the length of |%s| = |%zu|\n\n", s, strlen(s));

	/* strcpy */
	printf("|M| ==> the dest is |%s|\n", ft_strcpy(dst, s));
	//printf("|O| ==> the dest is |%s|\n\n", strcpy(dst, s));
	return (0);
}
