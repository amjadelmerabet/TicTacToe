#include<stdio.h>
#include<stdlib.h>
#include"tictactoe.h"

int * init_table(int tab[3][3]) {
	
	for(int i = 0;i< 3;i++) {

		for(int j = 0;j < 3;j++) {

			tab[i][j] = 0;

		}
	
	}

}

void draw_table(int tab[3][3]) {

	for(int i = 0;i < 3;i++) {

		printf("+---+---+---+\n|");

		for(int j = 0;j < 3;j++) {

			if(tab[i][j] == 0)

				printf("   |");

			else {

				if(tab[i][j] == 1)

					printf(" X |");

				else

					printf(" O |");

			}
				
		}
		printf("\n");

	}
	printf("+---+---+---+\n");

}

int * play(int tab[3][3],int P) {

	int x,y;
	if(P == P1)
		printf("Player 1 turn\n");
	else
		printf("Player 2 turn\n");	
	printf("Enter the number of the line : ");
	scanf("%d",&x);
	printf("Enter the number of the column : ");
	scanf("%d",&y);

	if(P == 1)
		tab[x-1][y-1] = P1;
	else
		tab[x-1][y-1] = P2;

	return tab;

}

int change_player(int P) {

	if(P == P1)
		return P2;
	else
		return P1;

}

int game_over(int tab[3][3],int P) {

	int gameOver = 0;

	for(int i = 0;i < 3;i++) {

		for(int j = 0;j < 3;j++) {

			if(tab[i][j] == P) {

				if(i == 0) {
					
					if(j == 0) {

						if(tab[i][j+1] == P && tab[i][j+2] == P)
							
							gameOver = 1;

						else {
						
							if(tab[i+1][j+1] == P && tab[i+2][j+2] == P)
						
								gameOver = 1;

							else {	
						
								if(tab[i+1][j] == P && tab[i+2][j] == P)
									
									gameOver = 1;

							}
						
						}

					}

					if(j == 1) {

						if(tab[i+1][j] == P && tab[i+2][j] == P)

							gameOver = 1;

					}

					if(j == 2) {

						if(tab[i][j-1] == P && tab[i][j-2] == P)

							gameOver = 1;

						else {

							if(tab[i+1][j-1] == P && tab[i+2][j-2] == P)
								
								gameOver = 1;

							else {

								if(tab[i+1][j] == P && tab[i+2][j] == P)
								
									gameOver = 1;

							}

						}

					}

				}

				if(i == 1)

					if(tab[i][0] == P && tab[i][1] == P && tab[i][2] == P)
					
						gameOver = 1;

				if(i == 2)

					if(tab[i][0] == P && tab[i][1] == P && tab[i][2] == P)
					
						gameOver = 1;

				if(gameOver == 1) {

					if(P == P1)

						printf("Player 1 won\n");

					else

						printf("Player 2 won\n");

					return 1;

				}

			}

		}

	}

	for(int i = 0;i < 3;i++) {

		for(int j = 0;j < 3;j++) {

			if(tab[i][j] == 0)

				return 0;
		
		}

	}

	printf("Draw\n");
	return 1;

}
