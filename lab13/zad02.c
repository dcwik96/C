
//Napisać program, który
//* wczytuje trzy liczby całkowite n, m i k;
//* deklaruje trzy duże tablice rzeczywiste 1-wymiarowe a, b i c;
//* ,,udaje'', że tablice a, b i c są 2-wymiarowe, o wymiarach n×m, m×k i n×k;
//* wczytuje n·m liczb do tablicy a oraz m·k liczb do tablicy b;
//* wykonuje mnożenie macierzowe c=a×b;
//* drukuje wynik w n wierszach po k liczb.


#include <stdio.h>

int main()
{
    int m, n, p, q, y, x, k, sum = 0;

    printf("Wprowadz liczbe wierszy pierwszej macierzy!\n");
    scanf("%d", &m);
    printf("Wprowadz liczbe kolumn pierwszej macierzy!\n");
    scanf("%d", &n);
    int pierwsza[m][n];
    printf("Wprowadz elementy macierzy 1\n");

    for (y = 0; y < m; y++)
        for (x = 0; x < n; x++)
            scanf("%d", &pierwsza[y][x]);
    printf("\nTwoja macierz 1 to:\n");
    for (y = 0; y < m; y++)
    {
        for(x = 0; x < n; x++)
        {
            printf("%d ", pierwsza[y][x]);
        }
        printf("\n");
    }

    printf("Wprowadz liczbe wierszy drugiej macierzy!\n");
    scanf("%d", &p);
    printf("Wprowadz liczbe kolumn drugiej macierzy!\n");
    scanf("%d", &q);
    int druga[p][q];
    int mnozenie[m][q];



    if (n != p)
        printf("Macierze nie moga byc pomnozone! Kolumny macierzy 1 nie sa rowne liczbie wierszy macierzy 2!\n");
    else
    {
        printf("Wprowadz ilosc elementow macierzy 2\n");

        for (y = 0; y < p; y++)
            for (x = 0; x < q; x++)
                scanf("%d", &druga[y][x]);

        printf("\nTwoja macierz 2 to :\n");
        for (y = 0; y < p; y++)
        {
            for(x = 0; x < q; x++)
            {
                printf("%d ", druga[y][x]);
            }
            printf("\n");
        }

        for (y = 0; y < m; y++)
        {
            for (x = 0; x < q; x++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + pierwsza[y][k]*druga[k][x];
                }
                mnozenie[y][x] = sum;
                sum = 0;
            }
        }

    printf("Wynik mnozenia macierzy: \n");

    for (y = 0; y < m; y++) {
      for (x = 0; x < q; x++)
        printf("%d\t", mnozenie[y][x]);

      printf("\n");
    }
  }

  return 0;
}