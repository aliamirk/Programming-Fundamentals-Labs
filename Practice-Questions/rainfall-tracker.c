#include <stdio.h>

#define ROWS 7
#define COLS 7

void enterRainfallData(float rainfall[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter rainfall for district %d on day %d: ", i + 1, j + 1);
            scanf("%f", &rainfall[i][j]);
        }
    }
}

float calculateWeeklyTotal(float rainfall[ROWS][COLS]) {
    float total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += rainfall[i][j];
        }
    }
    return total;
}

void highestRainfallDay(float rainfall[ROWS][COLS]) {
    float maxRainfall, current;
    int week, day;
    maxRainfall = 0;
    for(int i=0; i<ROWS; i++){
        for (int j = 0; j < COLS; j++)
        {
            current = rainfall[i][j];
            if (current > maxRainfall)
            {
                maxRainfall = current;
                week = i;
                day = j;
            }
            
        }
        
    }
    printf("The day with the highest rainfall was Week: %d and Day: %d with %.2f units.\n", week, day, maxRainfall);
}

int main() {
    float rainfall[ROWS][COLS];
    
    enterRainfallData(rainfall);
    
    float total = calculateWeeklyTotal(rainfall);
    printf("Total weekly rainfall: %.2f\n", total);
    
    highestRainfallDay(rainfall);
    
    return 0;
}
