//Napisać programy testujące działanie operatorów z efektami ubocznymi w różnych sytuacjach, od których może zależeć wynik działania. Np.
//    a[i++] = 0;   oraz   a[++i] = 0;
//    y = (x += 2);
//    z = (x %= 3) + (x %= 4);


#include <stdio.h>

void petla_for_i_plus_plus(int tab[], int size)
{
	int i;
	for(i=0;i<size;)
		printf("%i ",tab[i++]);
    printf("\n Wartosci i : \t");
    for(i=0;i<size;)
        printf("%i ",i++);
}

void petla_for_plus_plus_i(int tab[], int size)
{
	int i;
	for(i=0;i<size;)
		printf("%i ",tab[++i]);
    printf("\n Wartosci i : \t");
    for(i=0;i<size;)
        printf("%i ",++i);
}

void zmienne ( int x )
{
    int z=0,y=0,g=0;
    printf("\t--test 2\n");
    printf("y=%i x=%i",y,x); //przed dzialaniem
    y = (x+=2);
    printf("\ny= %i x=%i\n",y,x); //po dzialaniu

    printf("\t--test 3\n");
    printf("z=%i x=%i",z,x); //przed dzialaniem
    z = (x %= 3) + (x %= 4);
    printf("\nz= %i x=%i\n",z,x); //po dzialaniu

    printf("\t--test 4*\n");
    printf("g=%i x=%i",g,x); //przed dzialaniem
    g = (x*=2);
    printf("\ng= %i x=%i\n",g,x); //po dzialaniu
}



int main()
{
    int tab[5] = {1,2,3,4,5};

    printf("Roznica w dzialaniu i++ / ++i :\n");
    petla_for_i_plus_plus(tab,5);
    printf("\n");
    petla_for_plus_plus_i(tab,5);

    printf("\n\nRoznica w przypisywaniu wartosci zmiennym : \n");
    zmienne(5);

	return 0;
}

