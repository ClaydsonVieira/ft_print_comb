#include <stdio.h>
#include <stdlib.h>

void ft_print_comb();

int main(int argc,char *argv[]){
    
	//chamada da função
	ft_print_comb();

    return 0;
}

void ft_print_comb(){

    //variáveis usadas para armazenar as unidades, centenas e dezenas
    int un, dez, cent;
    //variáveis para testar as possíveis combinações
    int comb1, comb2, comb3, comb4,comb5;

    //variável de controle
    int imprimir;

	//laço de 0 a 999
	for(int i = 0; i < 1000; i++){
        //armazena as unidades, dezenas e centenas do número
        un = i % 10; //armazena as unidades
        dez = i % 100 - un; //armazena as dezenas
        cent = i - dez - un; //armazena as centenas

        dez = dez / 10; //descobre o número das dezenas
        cent = cent / 100; //descobre o número das centenas

        //combinações possíveis
        comb1 = dez * 100 + un * 10 + cent;
        comb2 = dez * 100 + cent * 10 + un;
        comb3 = un * 100 + dez * 10 + cent;
        comb4 = cent * 100 + un * 10 + dez;
        comb5 = un * 100 + cent * 10 + dez;
        //primeiro, testamos se não há nenhum número repetido
        if(cent != dez && cent != un && un != dez){
            imprimir = 1; //usamos uma variável de controle
            for(int j = 0; j < i; j++){
                //testando as possíveis combinações
                if(comb1 == j || comb2 == j || comb3 == j || comb4 == j || comb5 == j){
                    imprimir = - 1; //caso entre aqui, setar a variável que interromperá a
                                    //impressão
                    break; //sair do laço de repetição
                }
    
            }
            //só irá imprimir se todos os testes possíveis derem verdadeiro
            if(imprimir == 1){
                printf("%d", cent);
                printf("%d", dez);
                printf("%d, ", un);
            }
        } 
    }
}
