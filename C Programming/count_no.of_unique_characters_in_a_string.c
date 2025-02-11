#include <stdio.h>
int  numberUniqueCharacters(char str[]){
  int uni[26]={0};
  int count=0;
  int i;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]>='a' && str[i]<='z')
    {
    uni[str[i]-'a']++;
    }
  }
  for(int i=0;i<26;i++)
  {
  if(uni[i]>=1)
  {
    count++;
  }
  }
  return count;
}
int main()
{
  char str[100000];
  scanf("%s",str);
  printf("%d",numberUniqueCharacters(str));
}