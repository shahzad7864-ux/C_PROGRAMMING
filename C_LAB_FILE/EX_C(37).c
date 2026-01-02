#include <stdio.h>
int main() {
    int m,k,isfound=0;
    scanf("%d",&m);
    int arr[m];
    printf("ARRAY: "); 
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);   
    }
    printf("ENTER THE ELEMENT FOR SEARCHING: ");
    scanf("%d",&k);
    for(int i=0;i<m;i++){
        if(arr[i] == k){
            isfound = 1;
        }
    }
    if(isfound){
        printf("%d",k);
    }
    
    return 0;
}