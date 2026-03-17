# **************************************************************************** #
#                                  LIBFT MAKEFILE                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

# Mandatory part
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Bonus part
BONUS_SRCS = $(wildcard *_bonus.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

input:
	@echo $(SRCS)

output:
	@echo $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus input output clean fclean re

# make        = builds libft.a
# make clean  = removes .o files
# make fclean = removes .o files and libft.a
# make re     = deletes everything and rebuilds