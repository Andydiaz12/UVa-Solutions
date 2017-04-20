#include <stdio.h>
#include <stdlib.h>

int main(){

	int jugadores, juegos, mesa, Dae, otros, suma_otros, suma_total, diferencia, MAX, perdidos, i;

	while(scanf("%d %d", &jugadores, &juegos) != EOF){

	perdidos = 0;
	

		while(juegos--){
		MAX = 10000;
		suma_otros = 0;
		scanf("%d %d", &mesa, &Dae);
		
		for(i = 0 ; i < (jugadores-1) ; i++){
			scanf("%d", &otros);
			suma_otros+= otros;
		}

		suma_total = suma_otros + Dae;

		if(suma_total < mesa){
			for(i = 0 ; i < 5 ; i++){
				if((suma_otros + MAX) > mesa)
					MAX/=10;
				
				else if((suma_otros + MAX) <= mesa){
					
					if((MAX-Dae) >= 0)
						perdidos+= (MAX-Dae);
					i = 5;
				}
			}
		}

		else if(suma_total > mesa){
			if(suma_otros < mesa){
				for(i = 0 ; i < 5 ; i++){
					if((suma_otros + MAX) > mesa)
						MAX/=10;
					else if((suma_otros + MAX) <= mesa){				
						
							perdidos+= MAX;
						i = 5;
					}
				}
			}
		}

	  }	
printf("%d\n", perdidos);
	}


	return 0;
}