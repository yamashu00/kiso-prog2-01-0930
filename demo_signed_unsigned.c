// やましゅうデモ: signed / unsigned のオーバーフロー
// 127 に 1 を足すと、signed と unsigned でどう違う？

#include <stdio.h>

int main(void) {
    signed char a = 127;
    a++;
    printf("signed char: %d\n", a);   // → -128になる！

    unsigned char b = 127;
    b++;
    printf("unsigned char: %u\n", b); // → 128になる！

    return 0;
}
