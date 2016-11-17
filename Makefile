# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 10:17:46 by rmonnier          #+#    #+#              #
#    Updated: 2016/11/17 18:52:44 by rmonnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_NAME	= main.c\
						file_checker.c\
						check_is_valid.c\
						is_one_block.c\
						get_pieces_list.c\
						fillit.c\
						add_and_remove_pieces.c\
						print_solution.c\

SRCS_PATH = srcs/
SRCS			= $(addprefix $(SRCS_PATH), $(SRCS_NAME))
NAME			= fillit
FLAG			= -Wall -Werror -Wextra
INC				= ./includes/
OBJ				= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc $(FLAG) -I $(INC) $(OBJ) -L ./libft -lft -o $(NAME)

%.o: %.c
	gcc -c $(FLAGS) -I includes $< -o $@

clean:
	make -C libft/ fclean
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
