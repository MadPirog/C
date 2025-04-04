#include <stdio.h>

int main() {
    int n;
    
    printf("Введите число n: ");
    scanf("%d", &n);
    
    // Число является степенью двойки, если оно больше 0 и (n & (n - 1)) == 0
    int is_power_of_two = n > 0 && (n & (n - 1)) == 0;
    
    printf("%d\n", is_power_of_two);
    
    return 0;
}
