#include <stdio.h>

int main(){

  int total, comp, i, cont = 0, temp;

  scanf("%d", &total);

  int fig[total];

  for (i = 0; i < total; i++)
  {
    fig[i] = 0;
  }

  scanf("%d", &comp);

  for (i = 0; i < comp; i++)
  {
    scanf("%d", &temp);
    if(fig[temp-1] == 0)
    {
      cont++;
      fig[temp-1] = 1;
    }
  }

  printf("%d\n", total-cont);

  return 0;
}
