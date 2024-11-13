/*******************************************************************************
    Description: This code takes a string as input and checks if it is a palindrome or not
    Author: Thanvi
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    // Read the input string
    char string[10];
    printf("enter a string:");
    scanf("%s",string);

    // Check to see if the string is a Palindrome
    // We compare the characters at the same index from the beginning and at the end.
    // If they are not the same, then it is not a Palindrome
    int isPalindrome=1;
    int length=strlen(string);
    for(int i=0;i<length;i++){
        if(string[i]!=string[length-i-1]){
            isPalindrome=0;
            break;
        }
    }

    // Print the result
    if(isPalnidrome) {
        printf("%s is a palindrome",string);
    }
    else {
        printf("%s is not a palindrome",string);
    }
}
       
