#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "trzeci.h"
#include "globalne.h"


void zgadywanie_liczby(){
	int wybor, proby,liczba;
	srand(time(0));
	liczba=rand()%100+1;
	printf("Zgadnij liczbe");
	scanf("%d",&wybor);
	counter_zgadywanie++;
	while(wybor!=liczba)
	{
		if(wybor>liczba) printf("Podales za duza liczbe");
		else if(wybor<liczba) printf("Podales za mala liczbe");
		scanf("%d",&wybor);
		counter_zgadywanie++;
	}
	printf("BRAWO ! Zgadles - %d  Potrzebowales do tego %d ruchu/ow, moze byc lepiej?\n",liczba,counter_zgadywanie);
	zapis(1);
}

void pkn(){
    srand(time(0));
    int odp,kompodp;
    int pknwynik1=0,pknwynik2=0;

    while (pknwynik1<3 && pknwynik2<3){
    kompodp=rand()%3+1;
    printf("Kamien-1  Papier-2  Nozyce-3 ???\n");
    scanf("%d",&odp);
    if (odp < 1 || odp > 3)
    {
        printf("ZLY WYBOR, Wulkany czy studzienki nie wchodza w gre\nZ automatu przegrales, za brak inteligencji sie placi xd\n");
        pknwynik2++;
    }
    else if (odp==kompodp)
    {
        printf("REMIS!\n");
    }
    else
    {
        if ((3+odp-kompodp)%3 == 1){
            pknwynik1++;
            printf("Wygrana!\n");
        }
        else if((3+odp-kompodp)%3 == 2){
            pknwynik2++;
            printf("Przegrana!\n");
        }
    }
    printf("Ty: %d\tKomputer: %d\n",pknwynik1 ,pknwynik2);
    if (pknwynik1==3)
    {
        printf("WYGRALES\n");
        counter_pkn++;
    }
    else if (pknwynik2==3) printf("PRZEGRALES\n");
    }
    zapis(2);
}


void tabliczka_mnozenia(){
    srand(time(0));
    int a,b,iloczyn,odpowiedz;
    do{
        a=rand()%10+1;
        b=rand()%10+1;
        iloczyn=a*b;
        printf("Podaj iloczyn ( wynik mnozenia ) liczb %d * %d = ",a,b);
        scanf("%d",&odpowiedz);
        if (odpowiedz == iloczyn)  counter_mnozenie++;
    }while (odpowiedz == iloczyn);
    printf("Bledna odpowiedz, zakonczyles swoja rozgrywke z %d poprawnymi odpowiedziami. Gratuluje!\n",counter_mnozenie);
    zapis(3);

}

void moje_statystyki(){

    FILE *zw;

    char a,b,c;
    printf("Nr gry|\twygrane/ilosc ruchow|\tdata\n");
    printf("\t\t\t\t\tZgadywanie\n");
    zw=fopen("statystyka1.txt","r");

    if(zw==NULL)
    printf("Nie zagrales/as jeszcze zadnej gry\n");

    while(a!=EOF)
    {
        a=fgetc(zw);
        printf("%c",a);
    }
    fclose(zw);
    printf("\t\t\t\t\tP-K-N\n");
    zw=fopen("statystyka2.txt","r");

    if(zw==NULL)
    printf("Nie zagrales/as jeszcze zadnej gry\n");

    while(b!=EOF)
    {
        b=fgetc(zw);
        printf("%c",b);
    }
    fclose(zw);
    printf("\t\t\t\t\tMnozenie\n");
    zw=fopen("statystyka3.txt","r");

    if(zw==NULL)
    printf("Nie zagrales/as jeszcze zadnej gry\n");

    while(c!=EOF)
    {
        c=fgetc(zw);
        printf("%c",c);
    }
    fclose(zw);
}

void reset(){

    if( remove( "statystyka1.txt" ) == 0 && remove("statystyka2.txt") == 0 && remove("statystyka3.txt") == 0 )
         printf( "Usunieto pomyslnie plik.\n" );
    else
         printf( "Nie udalo sie skasowac pliku lub nie zagrales jeszcze we wszystkie gry\nSprobuj wszystkiego !\n\n" );

    return 0;

}

