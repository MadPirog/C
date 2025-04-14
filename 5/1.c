#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char letter = 'l'; 
    int index = -1;

    for (int i = 0; i < strlen(alphabet); i++) {
        if (alphabet[i] == letter) {
            index = i + 1; 
            break; 
        }
    }

    if (index != -1) {
        printf("Буква '%c' находится на позиции %d в алфавите\n", letter, index);
    } else {
        printf("Буква '%c' не найдена в алфавите\n", letter);
    }

    return 0;
}
