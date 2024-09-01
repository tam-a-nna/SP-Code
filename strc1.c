#include <stdio.h>
// Define the Rectangle structure
struct Rectangle {
    float length;
    float width;
    float area;
};
int main() {
    // Declare a variable of type Rectangle
    struct Rectangle rect;

    // Prompt the user to enter the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    // Compute the area of the rectangl e
    rect.area = rect.length * rect.width;

    printf("\nDetails of the Rectangle:\n");
    printf("Length: %.2f\n", rect.length);
    printf("Width: %.2f\n", rect.width);
    printf("Area: %.2f\n", rect.area);

    return 0;
}
