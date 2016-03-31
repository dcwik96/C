// Napisać funkcję typu void, która ma:
// * dwa całkowite parametry wejściowe n i k, k≠0,
// * dwa całkowite parametry wyjściowe:
//  + q równy ilorazowi całkowitemu n przez k, oraz
//  + r równy reszcie z dzielenia n przez k.
// Ta funkcja nie może mieć żadnych innych parametrów, nie może odwoływać się do zmiennych globalnych i oczywiście nie może niczego czytać ani pisać;
// jej jedyna komunikacja z resztą programu odbywa się przez parametry.
// Napisać program, który wczytuje dwie liczby całkowite i wywołuje powyższą funkcję, a następnie drukuje iloraz całkowity oraz resztę z dzielenia wczytanych liczb.

#include <stdio.h>
void test(int n, int k, int *q, int *r)
{
  *q=n/k;
  *r=n-k*(*q);
}
int main()
{
  int lp1, lp2, iloraz, reszta;
  scanf("%i %i", &lp1, &lp2);
  test(lp1, lp2, &iloraz, &reszta);
  printf("Iloraz i reszta:\n");
  printf("%d %d\n", iloraz, reszta);
  return 0;
}
