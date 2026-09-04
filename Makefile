all:
		gcc src/desafio.c src/vetores.c -o programa

clean:
		rm -f programa
