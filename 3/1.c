#include <stdio.h>

int main() {
    char colors[3][10] = {"red", "blue", "green"};

    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }
  
    return 0;
}
