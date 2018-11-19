NAME = libft.a
CPL = gcc -Wall -Wextra -Werror
HEADERS_FOLDER = ./includes/
HEADER =  includes/libft.h
INCDIRS = $(addprefix -I,$(HEADER_FOLDER))
SRCS= 	srcs/memory/ft_memset.c \
		srcs/memory/ft_bzero.c \
		srcs/memory/ft_memcpy.c \
		srcs/memory/ft_memccpy.c \
		srcs/memory/ft_memmove.c \
		srcs/memory/ft_memchr.c \
		srcs/memory/ft_memcmp.c \
		srcs/memory/ft_memalloc.c \
		srcs/memory/ft_memdel.c \
		srcs/string/ft_strlen.c \
		srcs/string/ft_strdup.c \
		srcs/string/ft_strcpy.c \
		srcs/string/ft_strncpy.c \
		srcs/string/ft_strcat.c \
		srcs/string/ft_strncat.c \
		srcs/string/ft_strlcat.c \
		srcs/string/ft_strchr.c \
		srcs/string/ft_strrchr.c \
		srcs/string/ft_strstr.c \
		srcs/string/ft_strnstr.c \
		srcs/string/ft_strcmp.c \
		srcs/string/ft_strncmp.c \
		srcs/string/ft_strnew.c \
		srcs/string/ft_strdel.c \
		srcs/string/ft_strclr.c \
		srcs/string/ft_striter.c \
		srcs/string/ft_striteri.c \
		srcs/string/ft_strmap.c \
		srcs/string/ft_strmapi.c \
		srcs/string/ft_strequ.c \
		srcs/string/ft_strnequ.c \
		srcs/string/ft_strsub.c \
		srcs/string/ft_strjoin.c \
		srcs/string/ft_strtrim.c \
		srcs/string/ft_strsplit.c \
		srcs/itoatoi/ft_itoa.c \
		srcs/itoatoi/ft_atoi.c \
		srcs/put/ft_putchar.c \
		srcs/put/ft_putstr.c \
		srcs/put/ft_putendl.c \
		srcs/put/ft_putnbr.c \
		srcs/put/ft_putchar_fd.c \
		srcs/put/ft_putstr_fd.c \
		srcs/put/ft_putendl_fd.c \
		srcs/put/ft_putnbr_fd.c \
		srcs/is/ft_isalpha.c \
		srcs/is/ft_isdigit.c \
		srcs/is/ft_isalnum.c \
		srcs/is/ft_isascii.c \
		srcs/is/ft_isprint.c \
		srcs/is/ft_toupper.c \
		srcs/is/ft_tolower.c

OBJECTS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJECTS)
	#$(CC) $(INCDIRS) $(CLIB) -o $@ $(OBJECTS)
	ar -rcv $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.c : %.s $(HEADER)
	$(CPL) -c $< -o $@ -I includes/
	#$(CPL) -I $(HEADERS_FOLDER) -c $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all
