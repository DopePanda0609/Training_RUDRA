def calculate_velocity(k, time_values):
    velocities = []

    # Initial velocity is 0 at t=0
    previous_velocity = 0

    for t in time_values:
        velocity = (k / 2) * t**2 + previous_velocity
        velocities.append(velocity)
        previous_velocity = velocity

    return velocities




velocities = calculate_velocity(2, [5,6])

print("Time Values:", [5,6])
print("Velocities:", velocities)
