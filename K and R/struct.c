#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point addpoints(struct point point1, struct point point2) {
    struct point newpoint;
    newpoint.x = point1.x + point2.x;
    newpoint.y = point1.y + point2.y;
    return newpoint;
};

int main(){
    struct point points[3] = {
        {4, 2},
        {-2, -7}
    };
    
    points[2] = addpoints(points[1], points[0]);

    printf("(%d,%d) + (%d,%d) = (%d,%d)\n",
        points[0].x, points[0].y,
        points[1].x, points[1].y,
        points[2].x, points[2].y
    );
};
