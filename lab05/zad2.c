// Ten program obsługuje duży spis osób opisanych strukturą:
// typedef struct{
//    char imie[IMIE_MAX+1];
//    char nazwisko[NAZW_MAX+1];
//    int pensja;
// } osoba;
// osoba spis[IL_OSOB];

// Jego inicjalizacja składa się z wywołania funkcji:
// * utworz_spis -- napisanej przeze mnie, można do niej nie zaglądać;
// * sortuj_spis -- którą trzeba napisać samemu.
// Po inicjalizacji program pyta o nazwisko lub imię osoby i znajduje w spisie brakujące dane na jej temat: imię, nazwisko i pensję.
// Należy napisać ciała funkcji znajdz_nazwisko oraz znajdz_imie -- ich nagłówki i komentarze opisujące sposób działania są w programie podane.
// W pierwszej wersji można nie realizować funkcji sortuj_spis, a wyszukiwanie zorganizować jakkolwiek.
// W drugiej (lepszej) wersji zrobić funkcję sortuj_spis i w wyszukiwaniu wg nazwisk wykorzystać fakt, że spis jest uporządkowany.

//qsort

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define IMIE_MAX 10
#define NAZW_MAX 15
#define IL_OSOB 10
typedef struct{
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;
osoba spis[IL_OSOB];
//=======================================================
void utworz_spis(char *nazwapliku)
{
  FILE* baza = fopen("nieposortowane.txt", "r");
  if(baza==NULL) printf("\n ZLE\n\n");
  int i;
  for( i=0;i<IL_OSOB;i++)
  {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}
//=======================================================
int porownanie(const void  * a, const void * b)
{
    osoba *osoba_a, *osoba_b;
    osoba_a=(osoba*) a;
    osoba_b=(osoba*) b;
    return strcmp(osoba_a->nazwisko, osoba_b->nazwisko);
}

void sortuj_spis(void)
{
  /* sortuje  spis  alfabetycznie wg nazwisk,
     a w przypadku rownych nazwisk wg imion */
     //zerknij do jentszeja
     //coderay
     qsort(spis, IL_OSOB, sizeof(osoba), porownanie);
     FILE *baza = fopen("posortowane.txt", "w");
     int i;
     for(i = 0; i < IL_OSOB; i++)
     {
       fprintf(baza, "%20s", spis[i].imie);
       fprintf(baza, "%20s", spis[i].nazwisko);
       fprintf(baza, "%20i\n", spis[i].pensja);
     }
    fclose(baza);
}
//=======================================================
int znajdz_nazwisko(char na[NAZW_MAX+1], char im[IMIE_MAX+1], int *p)
{
  /* do danego nazwiska  na  znajduje w spisie imie  im  oraz pensje  p
     jesli znajdzie, to zwraca 1, jesli nie, to 0 */
  /*  int *a;
    a = bsearch(na, spis, IL_OSOB, sizeof(osoba), porownanie);//bsearch jeszcze nie dziala walczymy
	    osoba *osoba_a;
	    osoba_a = (osoba *) a;
      int i;
      for(i=0; i<IL_OSOB; i++)
      {
        if(strcmp(spis[i].nazwisko,na) == 0)
        {
          strcpy(im, spis[i].imie);
	        *p = spis[i].pensja;
        }
      }
	    return 1; */
      int i=0;
      while(i<IL_OSOB && strcmp(na, spis[i].nazwisko) != 0)
        i++;
      if(i == IL_OSOB) return 0;
      else if(strcmp(na, spis[i].nazwisko)==0)
        strcpy(im, spis[i].imie);
      *p = spis[i].pensja;
      return 1;
}
//=======================================================
int znajdz_imie(char im[NAZW_MAX+1], char na[IMIE_MAX+1], int *p)
{
  /* do danego imienia  im  znajduje w spisie nazwisko  na  oraz pensje  p
     jesli znajdzie, to zwraca 1, jesli nie, to 0 */

   	int i;
   	for(i=0; i<IL_OSOB; i++)
   	{
   		if(strcmp(spis[i].imie,im) == 0){
   		strcpy(na,spis[i].nazwisko);
   		*p = spis[i].pensja;
   		return 1;
   		}
   	}

   	return 0;
}

int main(int argc, char *argv[])
{
  char odpowiedz, im[NAZW_MAX+1], na[IMIE_MAX+1];
  int p;
  utworz_spis(argv[1]);
  sortuj_spis();
  do
  {
    printf("\n Znalezc wg imienia (I), nazwiska (N), czy zakonczyc (Q)? ");
    do{odpowiedz = getchar();}
    while(isspace(odpowiedz));
    odpowiedz = tolower(odpowiedz);
    switch(odpowiedz)
    {
    case 'i':
      printf("\n szukane imie: ");
      scanf("%s", im);
      if(znajdz_imie(im, na, &p)) printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else printf(" nie ma imienia %s\n", im);
    break;
    case 'n':
      printf("\n szukane nazwisko: ");
      scanf("%s", na);
      if(znajdz_nazwisko(na, im, &p)) printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else printf(" nie ma nazwiska %s\n", na);
    break;
    case 'q':
    break;
    default:
      printf(" Poprawne odpowiedzi: N, I, Q.\n");
    }
  }
  while(tolower(odpowiedz) != 'q');
  printf("\n DZIEKUJE.\n\n");
  return 0;
}
