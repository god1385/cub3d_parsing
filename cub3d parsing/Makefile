NAME		=	cub3d
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -I
LIB			= 	libft/libft.a
INC			=	-I ./include/cub3d.h -I ./include/ft_printf.h -I ./libft
HEADER		= 	./include/cub3d.h
OBJ_BONUS	=	$(patsubst src%, obj%, $(SRC_BONUS:.c=.o))
OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))
SRC 		= main.c map.c util.c color.c north_south.c coordinates.c util2.c util3.c util4.c gnl/get_next_line.c gnl/get_next_line_utils.c pf/ft_printf.c pf/ft_itoabase.c pf/ft_char.c pf/ft_hex.c pf/ft_int.c pf/ft_isdigit.c pf/ft_itoa.c pf/ft_putnbr_base.c pf/ft_strdup.c pf/ft_unsigned.c
all:		$(LIB) $(PFT) obj $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(LIB)  -o $@ $^ $(LIB)

$(LIB):
	@echo " [ .. ] | Compiling libft.."
	@make -s -C libft
	@echo " [ OK ] | Minilibx ready!"

obj:
			@mkdir -p obj

%.o:	%.c ./include/cub3d.h
			$(CC) $(FLAGS) -I$(HEADER) -c $< -o $@

clean:
			@${MAKE} -C ./libft clean
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@${MAKE} -C ./libft fclean
			@rm -rf $(NAME)
			@echo "binary file removed."

re:			fclean all

.PHONY:		all clean fclean re
