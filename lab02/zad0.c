//Jakie będą wyniki następujących działań?
//    5&3
//    5|3
//    7<<2&7
//    7<<(2&7)
//    ((-1)<<8)>>16
//    13^9
//W każdym przypadku wyliczyć odpowiedź na kartce, a następnie sprawdzić jej poprawność przy pomocy prostego programu testującego. 

#include <stdio.h>

int main()
{
  printf("A. 5&3 = %i\n", 5&3);
  printf("B. 5|3 = %i\n", 5|3);
  printf("C. 7<<2&7 = %i\n", 7<<2&7);
  printf("D. 7<<(2&7) = %i\n", 7<<(2&7));
  printf("E. ((-1)<<8)>>16 = %i\n", ((-1)<<8)>>16);
  printf("F. 13^9 = %i\n", 13^9);
  return 0;
}
