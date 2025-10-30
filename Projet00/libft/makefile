NAME=libft
CC=cc
CFLAGS=-Wall -Wextra -Werror
INC_DIR=includes
SRC_DIR=srcs
SRCS=$(SRC_DIR)/ft_atoi.c \
$(SRC_DIR)/ft_isalpha.c \
$(SRC_DIR)/ft_isdigit.c \
$(SRC_DIR)/ft_isalnum.c \
$(SRC_DIR)/ft_isascii.c \
$(SRC_DIR)/ft_isprint.c \
$(SRC_DIR)/ft_toupper.c \
$(SRC_DIR)/ft_tolower.c \
$(SRC_DIR)/ft_strcmp.c \
$(SRC_DIR)/ft_strncmp.c \
$(SRC_DIR)/ft_memset.c \
$(SRC_DIR)/ft_bzero.c \
$(SRC_DIR)/ft_memcpy.c \
$(SRC_DIR)/ft_memccpy.c \
$(SRC_DIR)/ft_memmove.c \
$(SRC_DIR)/ft_memchr.c \
$(SRC_DIR)/ft_memcmp.c \
$(SRC_DIR)/ft_strlen.c \
$(SRC_DIR)/ft_strdup.c \
$(SRC_DIR)/ft_strcpy.c \
$(SRC_DIR)/ft_strncpy.c \
$(SRC_DIR)/ft_strcat.c \
$(SRC_DIR)/ft_strncat.c \
$(SRC_DIR)/ft_strlcat.c \
$(SRC_DIR)/ft_strchr.c \
$(SRC_DIR)/ft_strrchr.c \
$(SRC_DIR)/ft_strstr.c \
$(SRC_DIR)/ft_strnstr.c \

OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@.a $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME).a
	if [ -f **.out ]; then rm **.out; fi
	if [ -f **/**.out ]; then rm **/**.out; fi
re: fclean all
