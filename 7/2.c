#include <stdio.h>
#include <string.h>

int indexOf(char text[], char word[]) {
    int text_len = strlen(text);
    int word_len = strlen(word);

    if (word_len == 0) {
        return 0;
    }
   
    for (int i = 0; i <= text_len - word_len; i++) {
        int j;
      
        for (j = 0; j < word_len; j++) {
            if (text[i + j] != word[j]) {
                break;
            }
        }
        if (j == word_len) {
            return i;
        }
    }
    return -1;
}

int main() {
    char sentence[] = "The quick brown cat jumps over the lazy dog";
    char word[] = "cat";

    int pos = indexOf(sentence, word);

    if (pos != -1) {
        printf("Слово \"%s\" найдено на позиции %d.\n", word, pos);
    } else {
        printf("Слово \"%s\" не найдено.\n", word);
    }

    return 0;
}
