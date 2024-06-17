# Nom de l'exécutable final
NAME = test_multi_C

# Répertoires contenant les fichiers sources et les fichiers d'en-tête
SRC_DIR = src
INC_DIR = include

# Liste des fichiers source
SRC = $(SRC_DIR)/main.c $(SRC_DIR)/file1.c $(SRC_DIR)/file2.c

# Liste des fichiers objets générés à partir des fichiers source
OBJ = $(SRC:.c=.o)

# Compilateur utilisé
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -I $(INC_DIR)

# Cible par défaut à exécuter quand on tape 'make'
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Règle générique pour compiler les fichiers objets
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour supprimer les fichiers objets
clean:
	rm -f $(OBJ)

# Règle pour supprimer les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Règle pour recompiler tout de zéro
re: fclean all

# Spécifie que ces cibles ne correspondent pas à des fichiers réels
.PHONY: all clean fclean re

