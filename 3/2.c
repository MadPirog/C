#include <stdio.h>

int main() {
  const int n = 3; 
  const int m = 10;
    char colors[n][m] = {"red", "blue", "green"};

    strcpy(colors[0], "yellow");

    
    for (int i = 0; i < n; i++) {
        printf("%s\n", colors[i]);
    }

    return 0;
}
