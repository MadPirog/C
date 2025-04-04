#include <stdio.h>

int main() {
    int number;
    
    printf("Введите целое число: ");
    scanf("%d", &number);
    
    // Используем битовую операцию & для проверки четности
    printf("Число %d %s\n", number, (number & 1) ? "нечетное" : "четное");
    
    return 0;
}
