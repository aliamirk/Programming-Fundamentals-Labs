#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    fclose(file);

    file = fopen("data.txt", "r");
    if (fgetc(file) == EOF) {
        printf("File is now empty.\n");
    } else {
        printf("File still contains data.\n");
    }
    fclose(file);

    return 0;
}
