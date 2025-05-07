#include <stdio.h>
#include <string.h>
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }}
int main() {
    int result = max(5, 3);
    printf("максимум: %d\n", result);

    return 0;
}

