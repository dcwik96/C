#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "drugi.h"
#include "globalne.h"


void instrukcja(){
    FILE *zw;
    char zp;

    zw=fopen("instrukcja.txt","r");

    while(zp!=EOF)
    {
        zp=fgetc(zw);
        printf("%c",zp);
    }

    fclose(zw);
}

void menu(){
    int wybor;

    printf("\n\n\n####################\n");
    printf("####GRY LOGICZNE####\n");
    printf("####################\n\n");

    do{
        printf("Witam w swiecie gier\n\n");
        printf("1. Zgadywanie liczby..\n");
        printf("2. Papier kamien nozyce..\n");
        printf("3. Tabliczka mnozenia..\n");
        printf("4. Moje statystyki..\n");
        printf("5. Zresetuj moje statystyki..\n");
        printf("6. Wyjdz\n\n");
        scanf("%d",&wybor);

        switch(wybor)
        {
            case 1: {
                gry_zgadywanie++;
                zgadywanie_liczby();
                counter_zgadywanie=0;
                break;
            }
            case 2: {
                gry_pkn++;
                pkn();
                counter_pkn=0;
                break;
            }
            case 3: {
                gry_mnozenie++;
                tabliczka_mnozenia();
                counter_mnozenie=0;
                break;
            }
            case 4: moje_statystyki(); break;
            case 5: reset(); break;
        }
    }while (wybor != 6);
}
