#include <stdio.h>
void vc(char str[]){
    int count1=0;
    int count2=0;
    for(int i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        count1++;
        }
        else{
            count2++;
        }
    }
    printf("No.of vowels: %d\n",count1);
    printf("No.of consonants: %d",count2);
}
int main(){
    char str[1000];
    scanf("%s",str);
    vc(str);
}