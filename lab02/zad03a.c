#include <stdio.h>
int key(int x)
{
  x+=64;
  x=-x;
  x-=96;
  return -x;
}
int code(int buf[4])
{
  int i, num=0;
  for(i=0;i<4;i++)
    num=(num<<8)|(buf[i]&255);
  return num;
}
int main()
{
  int buf[4];
  int i, counter=0;
  buf[counter]=(int)getchar();
  while(buf[counter]!=EOF)
  {
    counter++;
    if(counter==4)
    {
      printf("%i ", key(code(buf)));
      counter=0;
    }
    buf[counter]=(int)getchar();
  }
  if(counter>0)
  {
    for(i=counter;i<4;i++) buf[i]=' ';
    printf("%i ", key(code(buf)));
  }
  printf("\n");
  return 0;
}
