#include<stdio.h>
#include<stdlib.h>
#include"tictactoe.h"

int tab[3][3];
int *T = &tab[0][0];
int P = P1;

int main(void) {

	T = init_table(tab);
	draw_table(tab);
	int gameOver = game_over(tab,P);
	while(gameOver != 1) {
	
		T = play(tab,P);
		draw_table(tab);
		gameOver = game_over(tab,P);
		P = change_player(P);

	}

	return 0;

}
