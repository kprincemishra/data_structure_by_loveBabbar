import numpy as np

def fuel_efficiency(pressure):
    """
    Function to calculate the fuel efficiency of a car with a given tire pressure.
    """
    # Assuming a linear relationship between tire pressure and fuel efficiency.
    # The coefficients are obtained from the historical data.
    # The coefficients are in the form of (slope, intercept)
    coefficients = [(-0.00001, 100), (-0.00002, 90), (-0.00003, 80), (-0.00004, 70), (-0.00005, 60), (-0.00006, 50), (-0.00007, 40), (-0.00008, 30), (-0.00009, 20), (-0.0001, 10)]
    for slope, intercept in coefficients:
        efficiency = slope * pressure + intercept
        if efficiency < 0:
            efficiency = 0
        elif efficiency > 100:
            efficiency = 100
    return efficiency

def secant_method(pressure1, pressure2, tolerance=1e-6, max_iterations=100):
    """
    Function to find the optimal tire pressure using the secant method.
    """
    for _ in range(max_iterations):
        efficiency1 = fuel_efficiency(pressure1)
        efficiency2 = fuel_efficiency(pressure2)
        if abs(efficiency2 - efficiency1) < tolerance:
            break
        pressure = pressure2 - (pressure2 - pressure1) * (efficiency2 - efficiency1) / (efficiency2 - efficiency1)
        pressure1, pressure2 = pressure2, pressure
    return pressure2

pressure1 = 30
pressure2 = 40
optimal_pressure = secant_method(pressure1, pressure2)
print(f"The optimal tire pressure is {optimal_pressure:.6f}")