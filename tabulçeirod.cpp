#include<stdio.h>

int main()
{
    
    int dia, mes, ano;
    int resto;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    
    resto = (dia % 4) + 3;
    
    printf("%d", resto);

    return 0;
}
