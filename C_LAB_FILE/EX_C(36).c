#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    printf("Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter position value to delete the element: ");
    scanf("%d",&k);

    if(k < 1 || k>=n){
        printf("Invalid choice");
    }
    else{
        for(int i=k;i<n-1;i++){
            arr[i] = arr[i+1];
        }
    }

    printf("Array after deletion of element: ");
    for(int i=0;i<(n-1);i++){
        printf("%d ",arr[i]);
    }
    return 0;
}