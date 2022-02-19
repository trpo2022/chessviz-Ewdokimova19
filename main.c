#include <stdio.h>
#include <stdlib.h>

Show (char c[8][8]) {
	//a b c d e f g h - top
	printf("   ");
   for(int i=0;i<8;i++){
      printf(" %c",'a'+i);
   }
   printf(" \n");
   
   // _ _ _ _ _ _ _ _
   printf("   -");
   for(int i=0;i<8;i++){
      printf("--");
   }
   printf("\n");
   
   //1) 8-1+| 2) figur
   for(int i=7;i>=0;i--){
      printf("%d |",i+1);
      for(int j=0;j<8;j++){
         printf(" %c",c[i][j]);
      }
      printf(" | %d \n",i+1);
   }
    
   // _ _ _ _ _ _ _ _ 
   printf("   -");
   for(int i=0;i<8;i++){
      printf("--");
   }
   printf("\n");
   
	//a b c d e f g h - buttom
   printf("   ");
   for(int i=0;i<8;i++){
      printf(" %c",'a'+i);
   }
   printf(" \n");
}

main () {
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