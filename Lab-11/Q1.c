#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\n') words++;
        if (ch == '\n') lines++;
    }
    fclose(file);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
