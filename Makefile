# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llefevre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/07 20:31:18 by llefevre          #+#    #+#              #
#    Updated: 2017/08/25 00:38:51 by llefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all libfclean libclean fclean clean re

NAME = fractol

FLAGS = -lmlx -L ./minilibx_macos2 -framework OpenGL -framework AppKit

C_FOLDER = ./

H_FOLDER = ./

LIB_FOLD = ./libft/

LIB = libft/libft.a

SRC = main mandelbrot put_cub put_keycode julia buddhabrot color interface_burn put_mousse zoom

C_FILE = $(addsuffix .c,$(addprefix $(C_FOLDER),$(SRC)))

O_FILE = $(addsuffix .o,$(SRC))

all: $(NAME)

$(NAME): $(LIB) $(O_FILE)
	@gcc -Wall -Werror -Wextra -O3 -o $@ $^ $(FLAGS) -L$(LIB_FOLD) -I$(LIB_FOLD) -lft
	@echo "\033[32mexecutable OK\033[0m"
	@echo "\033[33;40m.................................................................................oooo.................................................................\n\
	............................................................................ooooooooo....................ooo..........................................\n\
	.........................................................................oooooooooooo.................ooooooo.........................................\n\
	.....................................................................oooooooooooooooo..............ooooooooooo........................................\n\
	......................................................ooo.........ooooooooooooooooooo...ooo......oooooooooooooo.......................................\n\
	......................................................ooo......ooooooooooooooooooooo.oooooooo...ooooooooooooooo.......................................\n\
	....................................................oooooo...oooooooooooooooooooooooooooooooo.oooooooooooooooooo......................................\n\
	....................................................ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.....................................\n\
	....................................................ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.....................................\n\
	..............................................oooo.oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.....................................\n\
	..............................................ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo...........................\n\
	.....................................o......oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo............................\n\
	....................................ooooo.ooooooooo.ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.............................\n\
	...................................ooooooo.oooooo.oooo.ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo..............................\n\
	...................................oooooooo.ooo..oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo...............................\n\
	...................................ooooooooo.o.oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.........................\n\
	.................................o.oooooooooo.ooooooooooooooooooooooooooooooooooooooooooooooo..oooooooooooooooooooooooooooooo.........................\n\
	..............................o.ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.oooo.oooooooooooooooooooooooooooo...........................\n\
	..............................ooooooooooooooooooooooooooooooooooooooooooooooooooooooo..oooooo.oooooo....ooooooooooooooooo.o...........................\n\
	...........................o.oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.....ooooooooooooo.ooooooooooooo...........................\n\
	...........................ooo.oo.oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo.ooooooooooooooo..........................\n\
	...........................ooooo..oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo..........................\n\
	.....................oooo...oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo..........................\n\
	.................ooooooo.oo.oooooooooooooooooooooo...ooooooooooooooooooooooooooooooooooooooooooooooooooooo.ooooooooooooooooo..........................\n\
	..............oo....ooooooooooooooooooooooooooooo.oo..oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo...oooo...................\n\
	.............oooooooooooooooooooooooo.....oooooo..oo...oooooooooooooooooo..ooooooooooooooooooooooooooooo.oooooooooooooooooooooooo.....................\n\
	............oo..ooooooooooooooooooo.oo......oooo.......oooooooooooooo.ooo..oooooooooooooooooooooooooooo.oooooooooooooooooooooooo......................\n\
	...........ooooo.oooooooooooooooo.ooooo......ooo......ooooooooooooo........ooooooooo..oooooooooooooooo...ooooo.ooooooooooooooooooooo..................\n\
	........oooooooooooooooooooooooo..ooooo......oooooooo.ooooooooooooo.......oooooo.........oooooooooooooooooooo.oooooooooooooooooooooooooo..............\n\
	........ooooooooo..ooooooooooooo..oooo........ooo.oo.ooooooooooooo.......ooooo.oooo.......ooooooooooooooooo.oooooooooooooo.oooooooooooooooo...........\n\
	.......oooooooooooo.oooooooooooo..ooo.........oooooooooooooooooooo.ooo..oooo..oooooo.......oooooooooooooo..ooooooooooooooo.oooooooooooooooooo.........\n\
	.............o...ooo.oooooooooo...............ooooooooooooooooooooooooooooo..oooooo........ooooooooooooooooooooo....oooo..oooooooooooooooooooooo......\n\
	..............ooooooo.ooooooooo...............oooooooooooooooooooooooooooo...ooooo.........ooooooooooooooooooooooooooo....ooooooooooooooooooooooooooo.\n\
	...........ooooooooooo.oooooooo..............oooooooooooooooooooooooooooo.....oo...........ooooooooooooooooooooooooooooooo..oooooooooooooooooooooooo..\n\
	.........ooooooooooooooo.ooooooo.............oooooooooooooooooooooooooooo..................ooooooooooooooooooooooooooooo..oooooooooooooooooooooo......\n\
	.....oooooooooooooooooooo.oooooo.....oooooo.ooooooooooooooooooooooooooooo.................ooooooooooooooooooooooooooooo.ooooooooooooooooooooooooo.....\n\
	..oooooooooooooooooooooooo..oooooo.ooooooo.oooooooooooooooooooooooooooooo.................ooooooooooooooooooooooooooo.ooo..ooooooooooooooooooooooo....\n\
	.....oooooooooooooooooooooo.ooooooo......oooooooooooooooooooooooooooooooo...............ooooooooooooooooooooooooo..ooooooooo..ooooooooooooooo.........\n\
	....oooooooooooooooooooooo..ooooooooooooooooooooooooooooooooooooooooooooo...oooooo.....oooooooooooooooooooooooo..ooooooooooooo...ooo..oooo............\n\
	.o.ooooooooooooooooooooooo.ooooooooooooo.ooooooooooooooooooooooooooooooooo.ooooooooo..oooooooooooooooooooooo..oooooooooooooooooo......................\n\
	..ooooooooooooooooooooooo.ooooooo.oooooo.ooooooooooooooooooooooooooooooooooo..o....oooooooooooooooooooooo..ooooooooooooooooooooooo....................\n\
	.oooooooooooooooooooooooo.oooooooo.ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo..ooooooooooooooooooooooooooo...................\n\
	.............oooooooooooooooooooooo..oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo..ooooooooooooooooooooooooooooooo..................\n\
	..............oooooo....................oooooooooooo.oooooooooooooooo.oooooooooooooooooooooooooooo.ooooooooooooooooooooooooooooooooo..................\n\
	................ooo.....................oooooooooooo.oooooooooooooooo.ooooooooooooooooooooooooooooo.ooooooooooooooooooooooooooooooooo.................\n\
	........................................oooooooooo...oooooooooooooo..ooooooooooooooooooooooooooooo..ooooooooooooooooooooooooooooooooooo...............\n\
	.........................................oooooooo.....oooooooooooo.ooooooooooooo..........oooooooo....ooooooooooooooooooooooooooooooooooooo...........\n\
	.........................................ooooooo......ooooooooooo.ooooooo....................ooooo......ooooooooooooooooooooooooooooooooo.............\n\
	..........................................oooo........ooooooooo..........................................oooooooooooooooooooooooooooooo...............\n\
	.......................................................oooooo................................................oooooooooooooooooooooooooo...............\n\
	.......................................................oooo..................................................ooooooooooooooooo..oooooooo..............\n\
	.............................................................................................................ooooooooo...ooooo........o...............\n\
	.............................................................................................................ooooo....................................\033[0m"

./%.o: ./%.c
	@gcc -c  $< -I$(LIB_FOLD) -o $@
	@echo "\033[32m$@\033[0m"

$(LIB):
	@$(MAKE) -C libft

libclean:
	@$(MAKE) -C libft clean

clean: libclean
	@/bin/rm -f $(O_FILE)
	@echo "\033[32mrm .o files\033[0m"

libfclean:
	@$(MAKE) -C libft fclean

fclean: clean libfclean
	@/bin/rm -f $(NAME)
	@echo "\033[32mrm $(NAME)\033[0m"

re: fclean all
