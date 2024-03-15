#include <stdio.h>

int main() {
    
    int summ;
    
    printf("Zadaj sumu, ktorú si chceš požičať: ");
    scanf("%d", &summ);
    
    if(summ < 20000.00) {
        printf("\nPri schváleni pôžičky na %d,00 EUR je potrebné zaplatiť prvú splátku: %d", summ, 1*summ/100);
    } else if(summ < 50000.00) {
        printf("\nPri schváleni pôžičky na %d,00 EUR je potrebné zaplatiť prvú splátku: %d", summ, 200 + 2*(summ-20000)/100);
    } else if(summ < 150000.00) {
        printf("\nPri schváleni pôžičky na %d,00 EUR je potrebné zaplatiť prvú splátku: %d", summ, 800 + 3*(summ-50000)/100);
    } else {
        printf("\nBanka neschvaluje pôžičky nad 150 000 EUR.");
    }
    
    fflush(stdin);
    getchar();

    return 0;
}