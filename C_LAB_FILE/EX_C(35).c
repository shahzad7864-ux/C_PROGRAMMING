#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Sum of all elements of arrays: %d\n",sum);
    return 0;
}