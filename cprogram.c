#include <stdio.h>

void calculateVelocity(double k, double time_values[], double velocities[], int num_time_points) {
    double previous_velocity = 0;

    for (int i = 0; i < num_time_points; i++) {
        double t = time_values[i];
        double velocity = (k / 2) * t * t + previous_velocity;
        velocities[i] = velocity;
        previous_velocity = velocity;
    }
}

int main() {
    double k = 2.0;
    double time_values[] = {0, 1, 2, 3, 4};
    int num_time_points = sizeof(time_values) / sizeof(time_values[0]);
    double velocities[num_time_points];

    calculateVelocity(k, time_values, velocities, num_time_points);

    printf("Time Values: ");
    for (int i = 0; i < num_time_points; i++) {
        printf("%.1lf ", time_values[i]);
    }

    printf("\nVelocities: ");
    for (int i = 0; i < num_time_points; i++) {
        printf("%.1lf ", velocities[i]);
    }

    return 0;
}

