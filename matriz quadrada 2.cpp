#include <stdio.h>
#include <stdlib.h>



int main(){
	int r[30], j = 0,i, n,d,k,l,c,g,e, tamanho;
	
	
while(r[j-1] != 0){
	scanf("%d", &r[j]);
	j++;
}
	tamanho = j - 1;
	
	
	
	
for(i = 0; i < tamanho; i++){
	
	d = r[i];
	int m[d][d];
	
	for(j = 0; j < r[i]; j++){// add 1 nas diagonais
		e = 1;
		k = j;
		
		m[k][j] = 1;	
		for(g = k + 1; g< r[i]; g++){
			e++;
			m[g][j] = e;
			m[j][g] = e;
		
		}
	}
	for(c = 0 ;c < r[i]; c++){//print da matriz
		for(l = 0 ; l < r[i]; l++){
			if (l == 0){
				printf("  ");
			}
			printf("%d" , m[c] [l]);
			if (l < r[i] - 1){
				printf("   ");
			}
			if (l == r[i] - 1){
				printf("\n");
			}	
		}
	}
	printf("\n");

}	
	system("pause");
	return 0;
}
