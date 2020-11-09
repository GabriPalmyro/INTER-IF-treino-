#include<stdio.h>

int main()
{
    
    int dia, mes, ano;
    int resto;
    int i, j;
    int temp;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    
    resto = (dia % 5) + 3;
    
    int tab[resto][resto];
    
    tab[0][0] = ano;
    tab[1][0] = dia;
    tab[0][1] = mes;
    
    for(i = 0; i < resto; i++){
    	for(j = 0; j < resto; j++){
    		
			if((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0)) continue;
			else if(i == 0){
				tab[i][j] = tab[i][j-1] + i + j;
			} else if(j == 0){
				tab[i][j] = tab[i - 1][j] + i + j;
			} else {
				tab[i][j] = tab[i][j-1] + tab[i-1][j] + tab[i-1][j-1];
			}
		}
	}
    
    
    printf("%d\n", tab[resto-1][resto-1]);

    return 0;
}
