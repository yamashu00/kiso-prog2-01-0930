#include <stdio.h>

int main(void) {
    unsigned int i;
    i = 10;
    do {
        printf("%u\n", i);
        i--;
    }while(i < 11);
    
}