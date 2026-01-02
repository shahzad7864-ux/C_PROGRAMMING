#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int a[m][n];
    int add[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            add[i][j] = arr[i][j] + a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",add[i][j]);
        }
    }
    return 0;
    
}