#include <stdio.h>

// ฝั่งคณิตศาสตร์: f(x) = x + 5
int f (int x) {
    return x + 5;
}

int main() {
    int y = f(10); // แทนค่า x = 10

    printf("Result is: %d\n", y); // ได้ 15

    return 0;
}