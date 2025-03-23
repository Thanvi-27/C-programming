#include <stdio.h>
#include <string.h>
void copy(char *str1,char *str2){
    if(str1==NULL){
        printf("String is empty");
    }
    while(*str1 !='\0'){
        *str2=*str1;
        *str1++;
        *str2++;
    }
    *str2='\0';    
}
int main(){
    char str1[1000];
    scanf("%s",str1);
    char str2[1000];
    copy(str1,str2);
    printf("%s",str2);
}