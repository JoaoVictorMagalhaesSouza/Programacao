/// Codigo feito 100% por Joao Victor Magalhaes Souza
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Conversor(int aux3){
    int aux3_int = aux3;
   int bin[16];	
   int aux;
   int vai_um=0;
   int adder[16] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
   int bin_negativo[16];
   


    for (aux = 15; aux >= 0; aux--)                 /// Sempre coverte o numero para binario. Depois que trata positivo ou neg.
    {
      if (aux3_int % 2 == 0)
         bin[aux] = 0;
      else
         bin[aux] = 1;
      aux3_int = aux3_int / 2;
   }
   for (aux = 0; aux < 16; aux++)
                    printf("%d", bin[aux]);
    printf("\n");


    if (aux3>0){
            printf("Positivo!\n");
             for (aux = 0; aux < 16; aux++)
                    printf("%d", bin[aux]);
    }
    else {
            printf("Negativo!\n");
            printf("Complemento de 2: ");
            for (aux=0;aux<16;aux++){
                if (bin[aux] == 1){
                    bin[aux] = 0;
                }
                else if (bin[aux] == 0){
                    bin[aux] = 1;
                }

                    printf("%d", bin[aux]);

            }
            printf("\n");

                for (aux=15;aux>=0;aux--){                              /// Casos especiais da soma.
                    if (bin[aux]+adder[aux]+vai_um == 0){
                        bin_negativo[aux] = 0 ;

                    }
                   else if (bin[aux]+adder[aux]+vai_um == 1){
                        bin_negativo[aux] = 1 ;
                        vai_um = 0;

                    }
                   else if (bin[aux]+adder[aux]+vai_um == 2){
                        vai_um = 1;
                      bin_negativo[aux] = 0;
                   }


                }
                for (aux=0;aux<16;aux++)
                    printf("%d",bin_negativo[aux]);






                }
















   printf("\n");
}
int main ()
{
    int aux3 = -80;
    Conversor(aux3);


    return 0;
}
