CFLAGS = -std=c99 -Wall -w

output: obj/tictactoe.o obj/main.o
	gcc $(CFLAGS) obj/tictactoe.o obj/main.o -o tictactoe

obj/tictactoe.o: src/tictactoe.c src/tictactoe.h
	gcc $(CFLAGS) -c src/tictactoe.c -o obj/tictactoe.o

obj/main.o: src/main.c src/tictactoe.h
	gcc $(CFALGS) -c src/main.c -o obj/main.o

clean:
	rm *.o tictactoe
