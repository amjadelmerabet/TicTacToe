#ifndef TICTACTOE_H
#define TICTACTOE_H

#define P1 1
#define P2 2

int * init_table(int tab[3][3]);
void  draw_table(int tab[3][3]);
int * play(int tab[3][3],int );
int   change_player(int );
int   game_over(int tab[3][3],int );

#endif
