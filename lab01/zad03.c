#include <stdio.h>

void dziwne_for(int tab[], int size)
{
	int i;
	for(i=0;i<size;)
		printf("%i ",tab[i++]);
}

void dziwne2_for(int tab[], int size)
{
	int i;
	for(i=0;i<size;)
		printf("%i ",tab[++i]);
}

int main()
{
	int tab[4]={10,11,12,13};

	for(int i=0;i<4;i++)
		printf("%i ",tab[i]);

	printf("\n");

	dziwne_for(tab,4);
	printf("\n\n");

  dziwne2_for(tab,4);
  printf("\n\n");
  
	return 0;
}
