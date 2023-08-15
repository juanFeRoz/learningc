#include <stdio.h>

float absolute(float n);
float square_root(float n);
void roots(float a, float b, float c);

int main(void) {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    roots(a, b, c);
}

float absolute(float n) {
    if (n < 0)
        n = -n;
    return n;
}

float square_root(float n) {
    const float epsilon = .00001;
    float guess = 1.0;

    while (absolute(guess * guess - n) >= epsilon) 
        guess = (n / guess + guess) / 2.0;
    
    return guess;
}

void roots(float a, float b, float c) {
    float discriminant, roots[2];

    discriminant = b*b - 4.0*a*c;

    if (discriminant < 0)
        printf("Imaginary roots \n");
    else {
        roots[0] = (-b + square_root(discriminant)) / 2 * a;
        roots[1] = (-b - square_root(discriminant)) / 2 * a;
        printf("%f %f \n", roots[0], roots[1]);
    }
}
