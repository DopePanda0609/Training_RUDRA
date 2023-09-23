#include <iostream>
#include <vector>

void calculateVelocity(double k, const std::vector<double>& time_values, std::vector<double>& velocities) {
    double previous_velocity = 0;

    for (size_t i = 0; i < time_values.size(); i++) {
        double t = time_values[i];
        double velocity = (k / 2) * t * t + previous_velocity;
        velocities.push_back(velocity);
        previous_velocity = velocity;
    }
}

int main() {
    double k = 2.0;
    std::vector<double> time_values = {0, 1, 2, 3, 4};
    std::vector<double> velocities;

    calculateVelocity(k, time_values, velocities);

    std::cout << "Time Values: ";
    for (size_t i = 0; i < time_values.size(); i++) {
        std::cout << time_values[i] << " ";
    }

    std::cout << "\nVelocities: ";
    for (size_t i = 0; i < velocities.size(); i++) {
        std::cout << velocities[i] << " ";
    }

    return 0;
}

