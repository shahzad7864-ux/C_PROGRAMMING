#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    printf("Enter array: ");
    gets(str);

    int count = 1;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            count += 1;
        }
    }
    printf("Total number of Words in array: %d\n",count);
    return 0;


}
