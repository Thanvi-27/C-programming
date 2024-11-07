#include <stdio.h>
#include <string.h>
int main() {
    char string[10];
    int i,length;
    int flag=0;
    printf("enter a string:");
    scanf("%s",string);
    for(i=0;i<length;i++){
        if(string[i]!=string[length-i-1]){
        flag=1;
        break;
    }
        }
    if(flag) {
            printf("%s is not a palindrome",string);
        }
        else {
            printf("%s is a palindrome",string);
        }
    }
       
