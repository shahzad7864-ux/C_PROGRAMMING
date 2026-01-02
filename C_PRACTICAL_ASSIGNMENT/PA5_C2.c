#include <stdio.h>
#include <string.h>

int main() {
    char str[40];
    int i,len,flag=1;

    printf("Enter a string: ");
    scanf("%s", str);   

    len = strlen(str);

    for (i=0; i<len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
