# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/27 01:27:00 by zloo              #+#    #+#              #
#    Updated: 2026/03/11 12:35:36 by zloo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = push_swap

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes

# Directories
SRC_DIR = srcs
OBJ_DIR = objs
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Source files
SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/parser.c \
       $(SRC_DIR)/validate.c \
       $(SRC_DIR)/utils.c \
       $(SRC_DIR)/swap.c \
       $(SRC_DIR)/push.c \
       $(SRC_DIR)/rotate.c \
       $(SRC_DIR)/reverse_rotate.c \
       $(SRC_DIR)/sort_small_utils.c \
       $(SRC_DIR)/sort_small.c \
       $(SRC_DIR)/normalize.c \
	   $(SRC_DIR)/chunk_utils.c \
       $(SRC_DIR)/chunk_sort.c 

# Object files
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
BLUE = \033[0;34m
RESET = \033[0m

# Default rule
all: $(NAME)

# Compile final program
$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)✓ push_swap compiled successfully!$(RESET)"

# Compile libft
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "$(GREEN)✓ libft compiled successfully!$(RESET)"

# Create obj directory
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Compile .c to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(BLUE)Compiled: $<$(RESET)"

# Clean object files
clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "$(RED)✗ Object files removed$(RESET)"

# Clean everything
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "$(RED)✗ $(NAME) removed$(RESET)"

# Rebuild
re: fclean all

.PHONY: all clean fclean re