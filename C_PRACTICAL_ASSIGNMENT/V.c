// Drawing V with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if((j==1 && i<6) || (j==7 && i<6) || 
               (i==6 && (j==2 || j==6)) || (i==7 && j==4)){
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