#include <stdio.h>
#include <string.h>

char FirstNonRepeat(char str[]) {
    int i, j;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        int count = 0;
        for (j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            return str[i];
        }
    }
    return '\0'; 
}

int main() {
    char str[1000];
    scanf("%s", str);
     printf("%c",FirstNonRepeat(str));
}