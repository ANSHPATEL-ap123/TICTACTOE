 // TIC TAC TOE GAME
 /*
  #include <stdio.h>
  int main(){
    printf("WELCOME TO THE TIC TAC TOE GAME! \n");
    printf("IT IS TWO PLAYER GAME\n");
    
    char arr[3][3]={{' ',' ',' '},                 // 00 01 02
                    {' ',' ',' '},                 // 10 11 12
                    {' ',' ',' '}};                // 20 21 22
printf("LET'S START THE GAME!\n");
printf("ARE YOU READY!!\n");
printf("FIRST PLAYER WILL USE X AND SECOND PLAYER WILL USE O \n");
int x,y,z,w;   //x,yfor first player and w,z for second player.

// 1st move
printf("FIRST PLAYER PLZ ENTER THE PLACE YOU  WANT MARK:  ");
char*ptr=&arr[0][0];
scanf("%d\n", &x);
scanf("%d", &y);
char mark1='X';
arr[x][y]=mark1;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            
        }
        printf("\n");
        if(u>=2){
            
        }
    }
}
printf("\n");
// 2nd move
printf("SECOND  PLAYER PLZ ENTER THE PLACE YOU  WANT MARK: ");
scanf("%d\n", &z);
scanf("%d", &w);
char mark2='O';
arr[z][w]=mark2;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
          printf("\n");  
        }
        
        if(u>=2){
          printf("\n");  
        }
    }
}
printf("\n");
// 3rd move
printf("FIRST PLAYER PLZ ENTER THE PLACE YOU  WANT MARK:  ");
scanf("%d\n", &x);
scanf("%d", &y);
arr[x][y]=mark1;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            printf("\n");
        }
        
        if(u>=2){
        printf("\n");    
        }
    }
}
printf("\n");
// 4th move
printf("SECOND  PLAYER PLZ ENTER THE PLACE YOU  WANT MARK: ");
scanf("%d\n", &z);
scanf("%d", &w);
arr[z][w]=mark2;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            printf("\n");
        }
        
        if(u>=2){
          printf("\n");  
        }
    }
}
//5th move
printf("FIRST PLAYER PLZ ENTER THE PLACE YOU  WANT MARK:  ");
scanf("%d\n", &x);
scanf("%d", &y);
arr[x][y]=mark1;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            printf("\n");
        }
        
        if(u>=2){
          printf("\n");  
        }
    }
}
printf("\n");
// 6th move
printf("SECOND  PLAYER PLZ ENTER THE PLACE YOU  WANT MARK: ");
scanf("%d\n", &z);
scanf("%d", &w);
arr[z][w]=mark2;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            printf("\n");
        }
        
        if(u>=2){
           printf("\n"); 
        }
    }
}
printf("\n");
// 7th move
printf("FIRST PLAYER PLZ ENTER THE PLACE YOU  WANT MARK:  ");
scanf("%d\n", &x);
scanf("%d", &y);
arr[x][y]=mark1;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
         printf("\n");   
        }
        
        if(u>=2){
            printf("\n");
        }
    }
}
printf("\n");
// 8th move
printf("SECOND  PLAYER PLZ ENTER THE PLACE YOU  WANT MARK: ");
scanf("%d\n", &z);
scanf("%d", &w);
arr[z][w]=mark2;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
            printf("\n");
        }
        
        if(u>=2){
         printf("\n");   
        }
    }
}
printf("\n");
// 9th move
printf("FIRST PLAYER PLZ ENTER THE PLACE YOU  WANT MARK:  ");
scanf("%d\n", &x);
scanf("%d", &y);
arr[x][y]=mark1;
printf("\n");
for(int u=0;u<3;u++){
    for(int t=0;t<3;t++){
        printf("|%c|",arr[u][t]);
        if(t>=2){
          printf("\n");  
        }

        if(u>=2){
            printf("\n");            
        }
    }
}
//if else and result


//diagonals
if(arr[0][0]=arr[1][1]=arr[2][2]=mark2){
    printf("SECOND  PLAYER WON !");
}
else if(arr[0][0]=arr[1][1]=arr[2][2]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[1][1]=arr[0][2]=arr[2][0]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[1][1]=arr[0][2]=arr[2][0]=mark2){
    printf("SECOND PLAYER WON!");
}
//vertical lines
else if(arr[0][0]=arr[1][0]=arr[2][0]=mark2){
    printf("SECOND PLAYER WON!");
}
else if(arr[1][1]=arr[0][2]=arr[2][0]=mark1){
    printf("FRIST PLAYER WON!");
}
else if(arr[0][1]=arr[1][1]=arr[2][1]=mark2){
    printf("SECOND PLAYER WON!");
}
else if(arr[0][1]=arr[1][1]=arr[2][1]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[0][2]=arr[1][2]=arr[2][2]=mark2){
    printf("SECOND PLAYER WON!");
}
else if(arr[0][2]=arr[1][2]=arr[2][2]=mark1){
    printf("FRIST PLAYER WON!");
}
//horizontal lines
else if(arr[0][0]=arr[0][1]=arr[0][2]=mark2){
    printf("SECOND PLAYER WON!");
}
else if(arr[0][0]=arr[0][1]=arr[0][2]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[1][0]=arr[1][1]=arr[1][2]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[1][0]=arr[1][1]=arr[1][2]=mark2){
    printf("SECOND PLAYER WON!");
}
else if(arr[2][0]=arr[2][1]=arr[2][2]=mark1){
    printf("FIRST PLAYER WON!");
}
else if(arr[2][0]=arr[2][1]=arr[2][2]=mark1){
    printf("FIRST PLAYER WON!");
}
// draw
else{
    printf("IT'S A DRAW!");
}
printf("THANK YOU FOR PLAYING THE GAME!");
return 0;
}
*/












#include <stdio.h>

void printBoard(char arr[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf(" %c ", arr[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("---+---+---\n");
    }
}

int checkWinner(char arr[3][3], char mark) {
    // rows and cols
    for(int i=0; i<3; i++) {
        if(arr[i][0]==mark && arr[i][1]==mark && arr[i][2]==mark) return 1;
        if(arr[0][i]==mark && arr[1][i]==mark && arr[2][i]==mark) return 1;
    }
    // diagonals
    if(arr[0][0]==mark && arr[1][1]==mark && arr[2][2]==mark) return 1;
    if(arr[0][2]==mark && arr[1][1]==mark && arr[2][0]==mark) return 1;

    return 0;
}  




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
