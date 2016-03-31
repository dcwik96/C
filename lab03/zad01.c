//Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala
//    ilość bajtów, przeznaczonych na zmienną (operator sizeof),
//    największą i najmniejszą wartość liczby,
//    ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
//    ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("Typ\t\tBajty\t\tDolnaWartosc\t\t\tGornaWartosc\t\t\tZiarno\t\t\tPrecyzja\n");
  printf("short\t\t%li\t\t%i\t\t\t%i\t\t\t-\t\t\t-\n",sizeof(short),SHRT_MIN,SHRT_MAX);
  printf("int\t\t%li\t\t%i\t\t\t%i\t\t\t-\t\t\t-\n",sizeof(int),INT_MIN,INT_MAX);
  printf("long\t\t%li\t\t%li\t\t\t%li\t\t\t-\t\t\t-\n",sizeof(long),LONG_MIN,LONG_MAX);
  printf("long long\t\t%li\t\t%lli\t\t\t%lli\t\t\t-\t\t\t-\n",sizeof(long long),LLONG_MIN,LLONG_MAX);

  printf("float\t\t%e\t\t%e\t\t\t%e\t\t\t%e\t\t\t%e\n",sizeof(float),LLONG_MIN,LLONG_MAX,FLT_EPSILON,FLT_DIG);
  printf("double\t\t%le\t\t%le\t\t\t%le\t\t\t%le\t\t\t%le\n",sizeof(double),LLONG_MIN,LLONG_MAX,DBL_EPSILON,DBL_DIG);
  printf("long double\t\t%Le\t\t%Le\t\t\t%Le\t\t\t%Le\t\t\t%Le\n",sizeof(long double),LLONG_MIN,LLONG_MAX,LDBL_EPSILON,LDBL_DIG);

return 0;
}
