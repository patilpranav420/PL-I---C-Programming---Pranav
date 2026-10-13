/*
Program (15) -> Write a program to calculate the area of a triangle by implementing the following four types of user-defined functions:
a) No Arguments, No Return Value
b) Arguments, No Return Value
c) No Arguments, Returns a Value
d) Arguments, Returns a Value
*/

#include <stdio.h>

void areaTypeA(void);
void areaTypeB(float b, float h);
float areaTypeC(void);
float areaTypeD(float b, float h);

int main() {
    float base, height, result;

    printf("--- testing type a: no arguments, no return value ---\n");
    areaTypeA();

    printf("\n--- testing type b: arguments, no return value ---\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    areaTypeB(base, height);

    printf("\n--- testing type c: no arguments, returns a value ---\n");
    result = areaTypeC();
    printf("Area of Triangle (Type C): %.2f\n", result);

    printf("\n--- testing type d: arguments, returns a value ---\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    result = areaTypeD(base, height);
    printf("Area of Triangle (Type D): %.2f\n", result);

    return 0;
}

void areaTypeA(void) {
    float b, h, area;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    area = 0.5 * b * h;
    printf("Area of Triangle (Type A): %.2f\n", area);
}

void areaTypeB(float b, float h) {
    float area;
    area = 0.5 * b * h;
    printf("Area of Triangle (Type B): %.2f\n", area);
}

float areaTypeC(void) {
    float b, h, area;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    area = 0.5 * b * h;
    return area;
}

float areaTypeD(float b, float h) {
    return 0.5 * b * h;
}
