// Napisać program, który bada poznane typy liczbowe w C, tzn. ustala:
// * ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// * największą i najmniejszą wartość liczby,
// * ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
//* ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce.

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  printf("|%11s|%8s|%21s|%21s|%13s|%10s|\n","TYP","DOL_WART","GOR_WART","ZIARNO","PRECYZJA","FORMAT");
  printf("|%11s|%8i|%21i|%21i|%13i|%10s|\n","short",(short)SHRT_MIN,(short)SHRT_MAX,' ',' ',"%i");
  printf("|%11s|%8i|%21i|%21i|%13i|%10s|\n","int",(int)INT_MIN,(int)INT_MAX,' ',' ',"%i");
  printf("|%11s|%8li|%21li|%21li|%13li|%10s|\n","long",(long)LONG_MIN,(long)LONG_MAX,' ',' ',"%li");
  printf("|%11s|%8lli|%21lli|%21lli|%13lli|%10s|\n","long long",(long long)LLONG_MIN,(long long)LLONG_MAX,' ',' ',"%lli");
  printf("|%11s|%8e|%21e|%21e|%13e|%10s|\n","float", (float)FLT_MIN, (float)FLT_MAX,FLT_EPSILON,(float)FLT_DIG,"%e");
  printf("|%11s|%8le|%21le|%21le|%13le|%10s|\n","double", (double)DBL_MIN, (double)DBL_MAX,DBL_EPSILON,(double)DBL_DIG,"%le");
  printf("|%11s|%8Le|%21Le|%21Le|%13Le|%10s|\n","long double",(long double)LDBL_MIN,(long double)LDBL_MAX,LDBL_EPSILON,(long double)LDBL_DIG,"%Le");
}
//ERROR
