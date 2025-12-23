// Writing my name in asterisk
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        // FOR S
        for(j=1;j<=7;j++){
            if(i==1 || i==4 || i==7 || (j==1 && i!=5 && i!=6) || (j==7 && i!=2 && i!=3) ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        // FOR GAP BETWEEN LETTERS
        for(j=1;j<=2;j++){
            printf(" ");
        }

        // FOR H 
        for(j=1;j<=7;j++){
            if(j==1 || j==7 || i==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        for(j=1;j<=2;j++){
            printf(" ");
        }
        
        // FOR A
        for(j=1;j<=7;j++){
            if(i==4 || (j==1 && i>3) || (j==7 && i>3) || i+j==5 || 
              (j==5 && i==2) || (j==6 && i==3)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        for(j=1;j<=2;j++){
            printf(" ");
        }
        
        // FOR H
        for(j=1;j<=7;j++){
            if(j==1 || j==7 || i==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        for(j=1;j<=2;j++){
            printf(" ");
        }
        
        // FOR Z
        for(j=1;j<=7;j++){
            if((i==2 && j!=6) || (i==3 && j!=5) || (i==4 && j!=4) || 
               (i==5 && j!=3) || (i==6 && j!=2) ){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        
        for(j=1;j<=2;j++){
            printf(" ");
        }
        
        // FOR A
        for(j=1;j<=7;j++){
            if(i==4 || (j==1 && i>3) || (j==7 && i>3) || i+j==5 || 
              (j==5 && i==2) || (j==6 && i==3)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        // FOR GAP BETWEEN LETTERS
        for(j=1;j<=2;j++){
            printf(" ");
        }
        
        // FOR D
        for(j=1;j<=7;j++){
            if((i==1 && j!=7) || (i==7 && j!=7) || j==1 || 
               (j==7 && i>1 && i<7) ){
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