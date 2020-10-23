/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 10:50:35 by obouykou          #+#    #+#             */
/*   Updated: 2020/10/23 14:45:29 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/asm.h"

//void		print();
size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, const void *buf, size_t nbyte);
char		*ft_strdup(const char *src);

int			main(void)
{
	char		*s = "\v\v\v\v\v\v\v\v\\";
	int			bz;
	int			n;
	char		*s1="";
	char		*s2="";
	
	bz = 13;

	/* strdup */
/* 	printf("|M| ==> string by ft_strdup is |%s|\n", ft_strdup(s));
	printf("|O| ==> string by    strdup is |%s|\n\n",  strdup(s)); */
	/* strlen */
/*  	printf("|M| ==> the length of |%s| = |%zu|\n", s, ft_strlen(s));
	printf("|O| ==> the length of |%s| = |%zu|\n\n", s, strlen(s)); */

	// /* strcpy */
	// printf("|M| ==> the dest1 is |%s|\n", ft_strcpy(s1, s));
	// printf("|O| ==> the dest2 is |%s|\n\n", strcpy(s2, s));

	// /* strcmp */
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp(s1, s2));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp(s1, s2));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("\xff\xff", "\xff"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n",  strcmp("\xff\xff", "\xff"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hello", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hello", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hello", "helloa"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hello", "helloa"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("helloa", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("helloa", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hella", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hella", "hello"));


	/* write */
/* 	int fd1 = open("test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	int fd2 = open("test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	n = ft_write(fd1, s, bz);
	printf("\n|M| ==> the return value of ft_write is |%d|\n", n);
	n =    write(fd2, s, bz);
	printf("\n|O| ==> the return value of    write is |%d|\n", n);
	close(fd1);
	close(fd2); */

	/* read */
	// int fd1 = open("test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	// int fd2 = open("test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	// n = ft_read(0, s, bz);
	// printf("\n|M| ==> the return value of ft_read is |%d| and s=|%s|\n", n, s);
	// n =    read(0, s, bz);
	// printf("\n|O| ==> the return value of    read is |%d| and s=|%s|\n", n, s);
	// close(fd1);
	// close(fd2);
	
	return (0);
}
