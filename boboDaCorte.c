#include <stdio.h>

int main(){

  int volunt, carlos, rest, i;
  char resp = 'S';

  scanf("%d", &volunt);
  scanf("%d", &carlos);

  for(i = 1; i < volunt; i++)
  {
    scanf("%d", &rest);
    if(rest > carlos)
    {
      resp = 'N';
    }
  }

  printf("%c\n", resp);

  return 0;
}
