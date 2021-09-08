#include "fun.h"
#include <stdlib.h>
#include <stdio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void drawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("player1 (x) - player(o) \n\n\n");
	printf("    |    |    |   \n");
	printf(" %c  |   %c|  %c | \n",square[1],square[2],square[3]);
	printf("____|____|____|\n");
	printf("    |    |    |\n");
	printf(" %c  |   %c|  %c | \n",square[4],square[5],square[6]);
	printf("____|____|____|\n");
	printf("    |    |    |\n");
	printf(" %c  |   %c|  %c |\n",square[7],square[8],square[9]);
	printf("    |    |    |   \n");
}