// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない

#include <stdio.h>

int main(void) {
    unsigned int i;
    for (i = 10; i >= 0; i--) {
        printf("%u\n", i);
    }
}

/*
unsigned int は 0 未満になれない
でも、条件でi >= 0（0になって）とある。
だからバグが発生する。
*/