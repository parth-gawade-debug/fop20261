#include <stdio.h>
#include <stdlib.h>

/* Board: indices 1-9, index 0 is unused */
char board[10];

/* ─── Initialise board with position numbers ─── */
void init_board() {
    for (int i = 1; i <= 9; i++)
        board[i] = '0' + i;   /* '1' … '9' */
    board[0] = ' ';            /* unused sentinel */
}

/* ─── Draw the current board state ─── */
void draw_board() {
    printf("\n");
    printf("  %c | %c | %c \n", board[7], board[8], board[9]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n", board[4], board[5], board[6]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n", board[1], board[2], board[3]);
    printf("\n");
}

/* ─── Check if a player has won ─── */
/* Returns 1 if mark (X or O) has three in a row, else 0 */
int check_for_win(char mark) {
    /* Rows */
    if (board[7]==mark && board[8]==mark && board[9]==mark) return 1;
    if (board[4]==mark && board[5]==mark && board[6]==mark) return 1;
    if (board[1]==mark && board[2]==mark && board[3]==mark) return 1;
    /* Columns */
    if (board[7]==mark && board[4]==mark && board[1]==mark) return 1;
    if (board[8]==mark && board[5]==mark && board[2]==mark) return 1;
    if (board[9]==mark && board[6]==mark && board[3]==mark) return 1;
    /* Diagonals */
    if (board[7]==mark && board[5]==mark && board[3]==mark) return 1;
    if (board[9]==mark && board[5]==mark && board[1]==mark) return 1;
    return 0;
}

/* ─── Mark the board ─── */
/* Returns 1 on success, 0 on invalid selection */
int mark_board(int position, char mark) {
    /* Check range */
    if (position < 1 || position > 9) {
        printf("  [!] Invalid choice. Enter a number between 1 and 9.\n");
        return 0;
    }
    /* Check if already taken */
    if (board[position] == 'X' || board[position] == 'O') {
        printf("  [!] Position %d is already taken. Choose another.\n", position);
        return 0;
    }
    board[position] = mark;
    return 1;
}

/* ─── Check for a full board (draw) ─── */
int is_draw() {
    for (int i = 1; i <= 9; i++)
        if (board[i] != 'X' && board[i] != 'O')
            return 0;
    return 1;
}

/* ─── Main game loop ─── */
int main() {
    int  current_player = 1;   /* 1 or 2 */
    char mark;
    int  position;
    int  moves = 0;

    printf("=========================\n");
    printf("     TIC - TAC - TOE     \n");
    printf("=========================\n");
    printf("  Player 1 = X\n");
    printf("  Player 2 = O\n");
    printf("\n  Board positions:\n");
    printf("   7 | 8 | 9 \n");
    printf("  ---|---|---\n");
    printf("   4 | 5 | 6 \n");
    printf("  ---|---|---\n");
    printf("   1 | 2 | 3 \n\n");

    init_board();

    while (1) {
        draw_board();

        mark = (current_player == 1) ? 'X' : 'O';

        printf("  Player %d (%c), enter position (1-9): ", current_player, mark);
        if (scanf("%d", &position) != 1) {
            /* Clear bad input */
            while (getchar() != '\n');
            printf("  [!] Please enter a valid number.\n");
            continue;
        }

        if (!mark_board(position, mark))
            continue;   /* invalid — retry same player */

        moves++;

        if (check_for_win(mark)) {
            draw_board();
            printf("  *** Player %d (%c) wins! Congratulations! ***\n\n",
                   current_player, mark);
            break;
        }

        if (is_draw()) {
            draw_board();
            printf("  *** It's a draw! Well played both! ***\n\n");
            break;
        }

        /* Switch player */
        current_player = (current_player == 1) ? 2 : 1;
    }

    return 0;
}