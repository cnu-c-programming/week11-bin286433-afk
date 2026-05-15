#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point{
    int x;
    int y;
} Point;

int main() {
    Point p = {1, 2};

    printf("%d %d\n", p.x, p.y);
    
    return 0;
}
