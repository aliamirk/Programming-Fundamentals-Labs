#include <stdio.h>

#define ROWS 5
#define COLS 6

void initializeChart(int chart[ROWS][COLS]) {
    int seatNumber = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            chart[i][j] = seatNumber++;
        }
    }
}

void addStudent(int chart[ROWS][COLS], int seat) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (chart[i][j] == seat) {
                chart[i][j] = 0; // Seat is now occupied
                return;
            }
        }
    }
    printf("Seat %d is not available.\n", seat);
}

void removeStudent(int chart[ROWS][COLS], int seat) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (chart[i][j] == 0) {
                chart[i][j] = seat; // Seat is now free
                return;
            }
        }
    }
    printf("Seat %d is already empty.\n", seat);
}

void printChart(int chart[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d ", chart[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int chart[ROWS][COLS];
    initializeChart(chart);
    
    printf("Initial seating chart:\n");
    printChart(chart);
    
    addStudent(chart, 3);
    printf("\nSeating chart after adding a student to seat 3:\n");
    printChart(chart);
    
    removeStudent(chart, 3);
    printf("\nSeating chart after removing a student from seat 3:\n");
    printChart(chart);
    
    return 0;
}
