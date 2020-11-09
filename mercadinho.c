#include<stdio.h>

int main()
{
    int itens;
    double  valor, valorF, promo = 0, pidade, idade;
    
    scanf("%lf", &idade);
    scanf("%d", &itens);
    scanf("%lf", &valor);
    
    if(itens != 0) promo = (itens * 2) + (idade / 4);
	
    valorF = valor - ((valor/100 * promo));
    
    printf("%.2lf\n%.2lf%%\n", valorF, promo);
    

    return 0;
}
