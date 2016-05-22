// program, który :
// wczytuje dwie liczby całkowite n i k;
// deklaruje dwie tablice rzeczywiste 1-wymiarowe a i b o długości n·k;
// ,,udaje'', że obie tablice są 2-wymiarowe -- że tablica a jest 2-wymiarowa n×k, i że tablica b jest 2-wymiarowa k×n;
// wczytuje n·k liczb do tablicy a;
// wykonuje transpozycję macierzy a do tablicy b;
// drukuje tablicę b w k wierszach po n liczb.
#include <stdio.h>

int main ()
{
  int n,k,column,row,i;
  printf ("Podaj dwie liczby całkowite(a,b): \n");
  scanf  ("%i,%i",&n,&k);
  float  a[n*k], b[n*k];

  printf ("Wprowadź %i liczb: ",n*k);
  for (i = 0; i < n*k; ++i)
  {
    scanf("%f",&a[i]);
  }

  for(column = 0; column < k; column++)
  {
    for(row = 0; row < n; row++)
    {
      printf("%.2f ", a[column*k+row]);
    }
  printf("\n");
  }
  // przekopiowanie tablicy a do tablicy b z zaminą wiersz == kolumna
  for(row = 0; row < n; row++)
  {
    for(column = 0; column < k; column++)
    {
      b[row * k + column] = a[column * k + row];
    }
  }
  // wydrukowanie tablicy b
  printf("Wynik : \n");
  for(column = 0; column < k; column++)
  {
    for(row = 0; row < n; row++)
    {
      printf("%.2f ", b[column * k + row]);
    }
    printf("\n");
  }
}