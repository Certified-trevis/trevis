#include <stdio.h>

// Function to calculate the volume of a sphere
float sphereVolume(float radius) {
    float volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
    return volume;
}

int main() {
    float radius, volume;
    
    // Input radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    // Calculate volume of the sphere using function
    volume = sphereVolume(radius);
    
    // Output volume of the sphere
    printf("The volume of the sphere with radius %f is %f.\n", radius, volume);
    
    return 0;
}
