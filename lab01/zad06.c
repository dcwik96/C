//Sprawdzić i wyjaśnić działanie następujących fragmentów programów:
//      a = b = c = d = 0;
//      for (i=0; i<N; a[i++]=i);
//      for (i=0; i<N; a[++i]=i);
//      i=1; while ((i*=2)<N);


int main()
{
        int a,b,c,d;
        a=b=c=d=0;
        printf("A. Wartosci: %d %d %d %d\n",a,b,c,d);
        //Zmiennym a,b,c,d przypisano wartosc 0
        int i,N=5,tab[5]={0,1,2,3,4};
        for(i=0;i<N;tab[i++]=i)
                printf("%d ",tab[i]);
        //i-ty indeks tab[] przyjmuje wartosc i oraz zwieksza sie o jeden
        printf("\n");
        for(i=0;i<N;tab[++i]=i)
                printf("%d ",tab[i]);
        //i-ty indeks tab[] zwieksza sie o jeden i przyjmuje wartosc i
        i=1;
        while((i*=2)<N);
        printf("\n%d\n",i);
        //i jest mnozone przez 2 dopoki jest mniejsze od N
        return 0;
}
