#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

// Function to calculate distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    float distance = calculateDistance(point1, point2);

    printf("Distance between Point 1 and Point 2: %.2f\n", distance);

    return 0;
}
