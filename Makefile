FLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

SRC = ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c \
    ft_memcpy.c ft_memset.c ft_strchr.c ft_strcpy.c ft_strlcat.c \
    ft_strncat.c ft_strncpy.c ft_strrchr.c ft_tolower.c ft_bzero.c \
    ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c ft_memmove.c \
    ft_strcat.c ft_strcmp.c ft_strdup.c ft_strlen.c ft_strncmp.c \
    ft_strstr.c ft_toupper.c

OUT = ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_memchr.o \
    ft_memcpy.o ft_memset.o ft_strchr.o ft_strcpy.o ft_strlcat.o \
    ft_strncat.o ft_strncpy.o ft_strrchr.o ft_tolower.o ft_bzero.o \
    ft_isalpha.o ft_isdigit.o ft_memccpy.o ft_memcmp.o ft_memmove.o \
    ft_strcat.o ft_strcmp.o ft_strdup.o ft_strlen.o ft_strncmp.o \
    ft_strstr.o ft_toupper.o

LIB = libft.a

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(FLAGS) $(SRC)
	ar -cvq $(LIB) $(OUT)

clean:
	rm -f $(OUT)

fclean:
	rm -f $(LIB)

re: clean fclean all
