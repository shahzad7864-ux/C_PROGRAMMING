// Drawing A with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=7; i++){
        for(j=1;j<=7;j++){
            if(i==4 || (j==1 && i>3) || (j==7 && i>3) || i+j==5 || (j==5 && i==2) || (j==6 && i==3)){
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