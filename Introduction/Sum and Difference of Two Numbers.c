#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b;
  float a1, b2;
  scanf("%d %d\n", &a, &b);
  scanf("%f %f\n", &a1, &b2);
  printf("%d %d\n", a + b, a - b);
  printf("%.1f %.1f\n", a1 + b2, a1 - b2);
  return 0;
}

