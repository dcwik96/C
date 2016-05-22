#include<stdio.h>

int main()
{
	char* rzym[] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
	int arab[] = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };
	int  i, liczba,wybor,rzymska;


	do{
		printf("rzymski-arabski - 1\n");
		printf("rzymski-arabski - 2\n");
		printf("wyjdz - 3\n");
		scanf("%i",&wybor);
      switch(wybor)
      {
      case 1:
         {
            do {
               printf("\n  Liczba calkowita wieksza od 0: ");
               scanf("%i", &liczba);
            }  while (liczba <= 0);

				printf("  Rzymski odpowiednik: ");
            for (i=12; i>=0; i--) {
					while (liczba >= arab[i]) {
                  printf("%s", rzym[i]); liczba -= arab[i];
               }
            }
         }
      case 2:
         {
            //zamiana z rzymskich na arabskie ?
         }

      }

  printf("\n\n");
  }while (wybor!=3);
  
  return 0;
}