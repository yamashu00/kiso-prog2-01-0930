// ペアワーク①: このコードを動かして、なぜ無限ループになるか2人で議論しよう
// ヒント: unsigned int は 0 未満になれない
// 10~0まで正しく数え上げて終了する

#include <stdio.h>

int main(void)
{
    unsigned int i;
    for (i = 10; i >= 0; i--)
    {
        printf("%u\n", i);
        if (i == 0)
        {
            break;
        }
    }
    return 0;
}

// unsignedのunを消しても良かったかも？