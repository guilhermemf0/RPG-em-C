# Nome do executável
EXEC = programa

# Arquivos fonte
SRC = main.c funcoes.c

# Arquivos objeto
OBJ = $(SRC:.c=.o)

# Compilador
CC = gcc

# Flags de compilação (opcional: -Wall mostra warnings)
CFLAGS = -Wall

# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Como gerar os arquivos .o a partir dos .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	rm -f *.o $(EXEC)
