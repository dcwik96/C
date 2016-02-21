#include <stdio.h>

int main(){
  char znak;
  scanf("%s",&znak);
  do{
    scanf("%s",&znak);
  }while(znak!=EOF);
  return 0;
}

