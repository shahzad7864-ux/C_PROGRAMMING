// Drawing W with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=10;j++){
            if(j==1|| j==10 || (i+j==8 && i>2) || (j-i==2 && i>2)){
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