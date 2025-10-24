

int main() {
    char arr[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int row, col, turn;
    char mark;

    printf("WELCOME TO THE TIC TAC TOE GAME!\n");
    printf("FIRST PLAYER = X, SECOND PLAYER = O\n\n");

    for(turn=0; turn<9; turn++) {
        printBoard(arr);
        if(turn % 2 == 0) {
            mark = 'X';
            printf("First player, enter row and col (0-2): ");
        } else {
            mark = 'O';
            printf("Second player, enter row and col (0-2): ");
        }
        scanf("%d %d", &row, &col);

        if(arr[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            turn--; 
            continue;
        }
        arr[row][col] = mark;

        if(checkWinner(arr, mark)) {
            printBoard(arr);
            printf("\nPlayer %c WON!\n", mark);
            return 0;
        }
    }

    printBoard(arr);
    printf("\nIt's a DRAW!\n");
    return 0;
}
