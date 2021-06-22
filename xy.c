#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){

    int rastgele,i,j,k,l,ch,tut;
	char c[50];
	tut = 0;
	//--------------------------------------------
	srand(time(NULL));
	
	//-----------------------------------
    
	for(i=0;i<25;i++){
        c[i] = '-'; // c nin i ninci elemaný 'o' olacak 
    }
    //-----------------------------------------------------------------    
    while(1){
    	
	   	for(j=0;j < 20;j+=1+rastgele){
	   		rastgele = rand()%5;
	   		c[j] = '>';
	
	   		printf("|x| ");
		   	for(k = 0;k < 20;k++){
		   		printf("%c ",c[k]);
		   		c[k] = '-';
			   }
			printf("0 ");
			c[20-j-rastgele] = '<';

			for(l = 0;l < 20;l++){
				printf("%c ",c[l]);
				c[l] = '-';
			}

			printf("|y| ");
			printf("\n");
			sleep(1);
			system("cls");
			
			if(l == 1)
				printf("y kazandý...");
		}
		
    }
}

