# Nom de la librairie à créer
NAME = libft.a

# Liste des fichiers sources
SOURCES =   ft_atoi.c \
            ft_bzero.c \
            ft_calloc.c \
            ft_isalnum.c \
            ft_isalpha.c \
            ft_isascii.c \
            ft_isdigit.c \
            ft_isprint.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_memset.c \
            ft_strchr.c \
            ft_strlcat.c \
            ft_strlcpy.c \
            ft_strlen.c \
            ft_strncmp.c \
            ft_strnstr.c \
            ft_strrchr.c \
            ft_tolower.c \
            ft_toupper.c \
            ft_strdup.c \
            ft_substr.c \
            ft_strjoin.c \
            ft_strtrim.c \
            ft_split.c \
            

# Génération automatique des fichiers objets correspondants (.o)
OBJECTS = $(SOURCES:.c=.o)

BONUS			=
BONUS_OBJS		= $(BONUS:.c=.o)

# Options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

# Règle principale (construction de la lib)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Règle pour compiler chaque fichier .c → .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des .o
clean:
	rm -f $(OBJECTS)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Recompilation totale
re: fclean $(NAME)

.PHONY: all re fclean clean
