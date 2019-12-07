#include <stdio.h>

int main()
{
  int n,x=0,y=1,z,i;
  scanf("%d",&n);
  printf("%d%d",x,y);
  i=1;
  do
  {
      z=x+y;
      printf("%d",z);
      x=y;
      y=z;
      i++;
  }while(i<=n-2);

    return 0;
}


