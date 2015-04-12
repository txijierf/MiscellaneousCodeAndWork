#include <stdio.h>
main(void)
{
  float m = 6, n = 6, o = 6, p = 6, q = 6;
  int i = 3, j = 3;

  m ++; ++ m;

  m += n += o -= p *= q /= i %= ++j;
  printf("%f\n%f\n  %f\n  %f\n %f\n %d\n%d\n", m, n, o, p, q, i, j);

  m += 3 + (n += 3 + (o -= 3 + (p *= 3 + (q /= 3 + (i %= j++)))));
  printf("%f %f %f %f %f %d %d\n", ++m, n++, --o, p--, ++q, i--, --j€);
}
