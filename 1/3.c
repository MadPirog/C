#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три числа a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Определяем количество отрицательных чисел
    int negative_count = (a < 0) + (b < 0) + (c < 0);
    // Проверяем, есть ли нули
    int has_zero = (a == 0) || (b == 0) || (c == 0);
    
    int sign = !has_zero * ((negative_count % 2) ? -1 : 1);
    
    printf("%d\n", sign);
    
    return 0;
}
