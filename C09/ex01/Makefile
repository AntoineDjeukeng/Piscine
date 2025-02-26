# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = srcs
INCLUDE_DIR = includes

# Source and Object Files
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ_FILES = $(SRC_FILES:%.c=$(SRC_DIR)/%.o)

# Library Name
LIB_NAME = libft.a

# Default rule (Equivalent to 'make all')
all: $(LIB_NAME)

# Rule to create the static library
$(LIB_NAME): $(OBJ_FILES)
	ar rc $@ $^
	ranlib $@

# Compile source files to object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE_DIR)/ft.h
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ_FILES)

# Clean library and object files
fclean: clean
	rm -f $(LIB_NAME)

# Rebuild everything (clean + all)
re: fclean all

# Prevent unnecessary recompilation
.PHONY: all clean fclean re
