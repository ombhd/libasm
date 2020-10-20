# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 11:20:55 by obouykou          #+#    #+#              #
#    Updated: 2020/10/20 12:45:06 by obouykou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

FILES = $(wildcard ./srcs/*.s)

HEADER = ./includes/asm.h

OBJECT = $(FILES:.s=.o)

all: $(NAME)

$(NAME): $(OBJECT) $(HEADER)
	@ar -rcs $(NAME) $(OBJECT)
	@echo "\n\033[32m--------- $(NAME) has been created successfully ---------\033[0m"

bonus: all

%.o:%.s	$(HEADER)
	@nasm -f macho64 $<

clean:
	@rm -rf srcs/*.o
	@echo "\n\033[36mCleaning objects Done!\033[0m"

fclean: clean
	@rm -rf $(NAME) 

re : fclean all
