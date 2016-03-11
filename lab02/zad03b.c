
#include <stdio.h>
int ret_key(int x)
{
  x-=96;
  x=-x;
  x+=64;
  return -x;
}
void decode(int x)
{
  int i, buf[4];
  for(i=0;i<4;i++)
  {
    buf[i]=x&255;
    x>>=8;
  }
  for(i=3;i>=0;i--)
    printf("%c", (char)buf[i]);
}
int main()
{
  int x, pass;
  pass=scanf("%i", &x);
  while(pass==1)
  {
    decode(ret_key(x));
    pass=scanf("%i", &x);
  }
  printf("\n");
  return 0;
}
