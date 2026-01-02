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
    int avg = sum/n;
    printf("Sum of elements of the given array is: %d\n",sum);
    printf("Average of element of the given array is: %d\n",avg);
    return 0;

}