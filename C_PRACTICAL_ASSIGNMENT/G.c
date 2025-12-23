// Drawing G with asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=10;j++){
            if(i==1 || j==1 || (i==7 && j<6) || 
              (j==5 && i>3) ||(i==4 && j>5) ||(j==10 && i>3) ){
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