#include <stdio.h>
#include <stdlib.h>

void ft_print_comb2();

int main(int argc,char *argv[]){
    
	//chamada da função
	ft_print_comb2();

    return 0;
}

void ft_print_comb2(){

	//laço de 0 a 100 do primeiro número
	for(int i = 0; i < 100; i++){
        //laço de 0 a 100 do segundo número
        for(int j = 0; j < 100; j++){
            printf("%02d %02d, ",i,j);
        }
    }
}
