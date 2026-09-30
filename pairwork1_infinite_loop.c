// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない

#include <stdio.h>

int main(void) {
    signed int i;
    if (i == 0){

        printf("%u\n", i);
    }else {
         for (i = 10; i >= 0; i--) {
        printf("%u\n", i);
         
    } 
    }

     return 0;
}
