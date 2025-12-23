// Drawing Y with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=12;i++){
        for(j=1;j<=7;j++){
            if((j==1 && i<6) || (j==7 && i<6) || 
               (i==6 && (j==2 || j==6)) || (i==7 && j==4) || (j==4 && i>7)){
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