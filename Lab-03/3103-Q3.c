#include <stdio.h>

int main(){
    int _x1,_x2,_y1,_y2;
    float slope;

    _x1 = 5;
    _x2 = 3;
    _y1 = 4;
    _y2 = 2;

    slope = (_x2-_x1)/(_y2-_y1);
    printf("The slope of the line is: %.3f\n", slope);
    return 0;

};