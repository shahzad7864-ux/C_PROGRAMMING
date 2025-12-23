// Drawing Q with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=7;j++){
            if((i==1 && j>1 && j<7) || (i==7 && j>1 && j<7) ||  
               (j==1 && i>1 && i<7) || (j==7 && i>1 && i<7) ||  
               (j==6 && i==8) || (j==7 && i==9)){               
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}