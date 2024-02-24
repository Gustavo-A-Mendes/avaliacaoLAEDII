/*  Programa que converte um número decimal em algarismo romano */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* função para converter de decimais para romanos */
void converteRomano(int num, char* numRomano) {
    
    numRomano = strcpy(numRomano, "");
    while (num > 0) {
        if (num>=100) {
            numRomano = strcat(numRomano, "C");
            num -= 100;
        } 
        else if (num >= 90) {
            numRomano = strcat(numRomano, "XC");
            num -= 90;
        }
        else if (num>=50) {
            numRomano = strcat(numRomano, "L");
            num -= 50;
        }   
        else if (num >= 40) {
            numRomano = strcat(numRomano, "XL");
            num -= 40;
        }
        else if (num>=10) {
            numRomano = strcat(numRomano, "X");
            num -= 10;
        }
        else if (num == 9) {
            numRomano = strcat(numRomano, "IX");
            num -= 9;
        }
        else if (num>=5) {
            numRomano = strcat(numRomano, "V");
            num -= 5;
        }
        else if (num == 4) {
            numRomano = strcat(numRomano,"IV");
            num -= 4;
        }
        else if (num>=1) {
            numRomano = strcat(numRomano, "I");
            num -= 1;
        }

    }
    numRomano = strcat(numRomano, "");

}

int main(void) {

    int i;
    char* algRom = (char*)malloc(10*sizeof(char));

    for (i = 1; i <= 100; i++) {
        converteRomano(i, algRom);
        printf("%4d = %s\n", i, algRom);
    }    
    free(algRom);
    return 0;
}