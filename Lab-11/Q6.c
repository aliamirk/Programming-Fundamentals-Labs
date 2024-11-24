#include <stdio.h>
#include <time.h>

int main() {
    FILE *file = fopen("log.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open the log file.\n");
        return 1;
    }

    time_t now = time(NULL);
    fprintf(file, "Program executed at: %s", ctime(&now));

    fclose(file);
    printf("Execution time logged to 'log.txt'.\n");

    return 0;
}
