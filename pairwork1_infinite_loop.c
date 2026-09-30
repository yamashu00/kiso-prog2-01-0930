// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない

#include <stdio.h>

int main(void) {
    unsigned int i;
    for (i = 10; i > 0; i--) {
        printf("%u\n", i);
    }
}
//o未満になれないのに。i >= 0の条件で0が含まれているからバグが起きている
//=を消したら10-1の数字が表示される