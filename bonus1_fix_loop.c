// 発展課題①（早く終わった人向け）
// 下のコードは無限ループになる。正しく10から0まで数え上げるように修正せよ。

#include <stdio.h>

int main(void) {
    unsigned int i;
    i = 10;
    do {
        printf("%u\n", i);
        i--;
    }while(i != -1);
    
}
