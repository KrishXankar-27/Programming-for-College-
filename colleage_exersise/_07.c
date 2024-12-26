/*

#include <stdio.h>

#define PI 3.14159265358979323846

// Function to convert degrees to radians
double degrees_to_radians(double degrees) {
    return degrees * (PI / 180.0);
}

// Simplified cosine approximation: cos(x) ≈ 1 - x^2 / 2
double cosine(double x) {
    // Normalize x to the range [0, 2PI)
    while (x > 2 * PI) x -= 2 * PI;
    while (x < 0) x += 2 * PI;

    // Use the simplified cosine approximation
    return 1 - (x * x) / 2;
}

int main() {
    double angle_deg = 60;  // Example angle in degrees
    double angle_rad = degrees_to_radians(angle_deg);  // Convert to radians

    // Calculate the cosine of the angle
    double cos_value = cosine(angle_rad);

    // Print the result
    printf("Cosine of %.2f degrees: %.4f\n", angle_deg, cos_value);
    
    return 0;
}
*/
