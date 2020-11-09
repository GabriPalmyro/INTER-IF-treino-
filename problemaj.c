#include<stdio.h>

int main()
{
    int pas, kil, prest;
    int i, j, k;
    char cab[1][7];
    float preco;
    scanf("%d %d", &pas, &kil);
    prest = kil;
	
	
	//vazios
	for(i = 0; i <= 1; i++){
		for(j = 0; j <= 7; j++){
			cab[i][j] = 'V';
		}
	}
	// CERTO
	
	//pass
	k = pas;
	i = 0;
	j = 0;
	while(k--){
		cab[i][j] = 'P';
		i++;
		if(i > 1){
			i = 0;
			j++;
		}
	}
	
	if(pas != 16) cab[0][7] = 'V';
	
	//cargas
	prest = kil;
	
	while(prest > 0){
		cab[i][j] = 'C';
		prest = prest - 100;
		i++;
		if(i > 1){
			i = 0;
			j++;
		}
	}
	
	if(kil < 500) cab[0][7] = 'V';
	
	preco = (pas * 498) + (6.35 * kil);
    printf("%.2f\n", preco);
    for(i = 0; i < 2; i++){
		for(j = 0; j < 8; j++){
			printf("%c", cab[i][j]);
		}
		printf("\n");
	}
    
    return 0;
}
