#include <stdio.h>
#include <stdlib.h>

void Show(char c[8][8]){
    printf("   ");
    for(int i=0;i<8;i++){
            printf(" %c",'a'+i);
        }
    printf(" \n");

    printf("   -");
    for(int i=0;i<8;i++){
           printf("--");
        }
    printf("\n");

    for(int i=7;i>=0;i--){
        printf("%d |",i+1);
        for(int j=0;j<8;j++){
            printf(" %c",c[i][j]);
        }
        printf(" | %d \n",i+1);
    }

    printf("   -");
    for(int i=0;i<8;i++){
            printf("--");
        }
    printf("\n");

    printf("   ");
    for(int i=0;i<8;i++){
            printf(" %c",'a'+i);
        }
    printf("\n");

}

int main()
{
    char board[8][8]={
    {'R','N','B','Q','K','B','N','R'},
    {'P','P','P','P','P','P','P','P'},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {'p','p','p','p','p','p','p','p'},
    {'r','n','b','q','k','b','n','r'}
    };
    Show(board);
    return 0;
}