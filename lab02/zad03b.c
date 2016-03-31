//T.zw. ,,blokowe'' algorytmy szyfrujące kodują jednocześnie całe bloki tekstu, znacznie dłuższe niż pojedyncze litery.
//Napisać program szyfrujący oraz współpracujący z nim program odszyfrowujący, działające w następujący sposób:
//    wczytany tekst jest dzielony na grupy po 4 kolejne znaki; każda taka grupa szyfrowana jest oddzielnie;
//    taką grupę traktuje się jak pojedynczą liczbę całkowitą; poddaje się ją jakiejś różnowartościowej funkcji matematycznej (,,kluczowi'' szyfru); np.
//        n → −n     albo
//        n → (n+k)%232   gdzie k jest ustaloną liczbą całkowitą;
//    otrzymany ciąg liczb przesyła się adresatowi;
//    każdą otrzymaną liczbę adresat odszyfrowuje funkcją odwrotną do klucza, a następnie rozbija na 4 znaki; te znaki drukuje.

#include <stdio.h>
int ret_key(int x)
{
  x-=96;
  x=-x;
  x+=64;
  return -x;
}
void decode(int x)
{
  int i, buf[4];
  for(i=0;i<4;i++)
  {
    buf[i]=x&255;
    x>>=8;
  }
  for(i=3;i>=0;i--)
    printf("%c", (char)buf[i]);
}
int main()
{
  int x, pass;
  pass=scanf("%i", &x);
  while(pass==1)
  {
    decode(ret_key(x));
    pass=scanf("%i", &x);
  }
  printf("\n");
  return 0;
}
