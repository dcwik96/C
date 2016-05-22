//Napisać program, który wczytuje datę (dzień, miesiąc, rok) i podaje wypadający wtedy dzień tygodnia. 

#include "stdio.h"

char *tydzien[] = {"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};

int liczbaDni[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

int przestepny(int rok) 
{
	return ((rok % 4 == 0  &&  rok % 100 != 0) || rok % 400 == 0);
}

int dzienTygodnia(int dzien, int miesiac, int rok)
{
	int dzienRoku;
	int yy, c, g;
	int wynik;

	dzienRoku = dzien + liczbaDni[miesiac-1];
	if ((miesiac > 2) && (przestepny(rok) == 1))
		dzienRoku++;

	yy = (rok - 1) % 100;
	c = (rok - 1) - yy;
	g = yy + (yy / 4);
	wynik = (((((c / 100) % 4) * 5) + g) % 7);
	wynik += dzienRoku - 1;
	wynik %= 7;

	return wynik;
}

int main() 
{
	int m, r, d, wynik;

	printf("Podaj dla jakiej daty obliczyc dzien tygodnia.\n");

	printf("Podaj dzien:\n");
	scanf("%d", &d);
	printf("Podaj miesiac:\n");
	scanf("%d", &m);
	printf("Podaj rok:\n");
	scanf("%d", &r);

	wynik = dzienTygodnia(d, m, r);
	printf("Dzien tygodnia dla podanej daty to %s.\n", tydzien[wynik]);

	return 0;
}
