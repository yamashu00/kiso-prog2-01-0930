// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない
//回答 ；iがunsigned intなので0未満になれないため。iが0のときにi--しても-1にはならず、大きな正の値に戻るため、i >= 0が常に成立してしまい無限ループになる。

#include <stdio.h>

int main(void) {
    unsigned int i;
    for (i = 10; i >= 0; i--) {
        printf("%u\n", i);
    }
}
