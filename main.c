/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 10:50:35 by obouykou          #+#    #+#             */
/*   Updated: 2020/10/22 14:50:56 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/asm.h"

//void		print();
size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);

int			main(void)
{
	char		*s;
	int			bz;
	int			n;
	char		*s1 = "\n\v";
	char		*s2 = "\n\vdddf";
	

//	print();
	s = "HELLO\n";
	bz = 6;
	/* strlen */
 	// printf("|M| ==> the length of |%s| = |%zu|\n", s, ft_strlen(s));
	// printf("|O| ==> the length of |%s| = |%zu|\n\n", s, strlen(s));

	// /* strcpy */
	// printf("|M| ==> the dest1 is |%s|\n", ft_strcpy(s1, s));
	// printf("|O| ==> the dest2 is |%s|\n\n", strcpy(s2, s));

	// /* strcmp */
	// printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp(s1, s2));
	// printf("|O| ==> the return value of strcmp is |%d|\n\n", strcmp(s1, s2));
	
	/* write */
	int fd1 = open("test1", O_CREAT|O_RDWR);
	int fd2 = open("test2", O_CREAT|O_RDWR);
	n = ft_write(fd1, s, bz);
	printf("|M| ==> the return value of ft_write is |%d|\n", n);
	n = write(fd2, s, bz);
	printf("|O| ==> the return value of    write is |%d|\n", n);
	close(fd1);
	close(fd2);
	return (0);
}
