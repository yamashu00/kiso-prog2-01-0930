// 発展課題②（早く終わった人向け）
// 配列を末尾から先頭まで出力したいが、このコードは動かない（無限ループ＋配列外参照）。
// なぜダメか説明し、正しく直せ。

#include <stdio.h>

int main(void) {
    unsigned int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 4; i >= 0; i--) {
        printf("%u\n", arr[i]);
    }
}
