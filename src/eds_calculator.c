#include <stdio.h>
#include <math.h>

int main() {
    // --- CORE ASTRONOMICAL & MATERIAL CONSTANTS ---
    const double G = 6.6743e-11;          // Universal Gravitational Constant (m^3 kg^-1 s^-2)
    const double M_EARTH = 5.972e24;      // Mass of the Earth (kg)
    const double R_EARTH = 6.371e6;       // Radius of the Earth (meters)
    
    // --- SIMULATION CONFIGURATION ---
    double altitude = 0.0;                // Starting altitude at sea level (meters)
    double velocity = 0.0;                // Starting velocity (m/s)
    double acceleration = 25.5;           // Simulated constant rocket engine acceleration (m/s^2)
    double time_step = 1.0;               // Time increments (dt = 1 second)
    double elapsed_time = 0.0;            // Total elapsed time tracking (seconds)
    
    // --- STRUCTURAL WEAR PROFILE CONFIGURATION ---
    double wear_metric = 0.0;             // Cumulative wear damage index
    double max_wear_tolerance = 100.0;    // Maximum wear tolerance before mechanical lockup
    double base_dust_density = 0.005;     // Environmental debris concentration factor
    
    // CHANGE THIS VARIABLE TO SIMULATE CASE A vs CASE B
    // 0 = Systems Disabled (Control Group) | 1 = Hybrid System Active (Experimental Group)
    int hybrid_system_active = 1;         
    
    double leakage_factor = (hybrid_system_active == 1) ? 0.15 : 1.00; // 85% dust mitigation if active

    printf("--- Thrust Vector Actuator Dust Mitigation Simulation ---\n");
    printf("System Status: %s\n\n", (hybrid_system_active == 1) ? "HYBRID ACTIVE (Case B)" : "SYSTEMS DISABLED (Case A)");
    printf("Time(s)\tAltitude(km)\tVelocity(m/s)\tEscape_V(m/s)\tWear_Index\n");
    printf("------------------------------------------------------------------\n");

    // --- COMPUTATIONAL PHYSICS LOOP ---
    while (wear_metric < max_wear_tolerance) {
        
        double current_radius = R_EARTH + altitude;
        double g_dynamic = (G * M_EARTH) / (current_radius * current_radius);
        double escape_velocity = sqrt((2.0 * G * M_EARTH) / current_radius);
        
        velocity += (acceleration - g_dynamic) * time_step;
        altitude += velocity * time_step;
        elapsed_time += time_step;
        
        wear_metric += (base_dust_density * leakage_factor * (velocity * 0.01)) * time_step;
        
        if ((int)elapsed_time % 10 == 0) {
            printf("%.0fs\t%.2f km\t%.1f m/s\t%.1f m/s\t%.2f\n", 
                   elapsed_time, (altitude / 1000.0), velocity, escape_velocity, wear_metric);
        }
        
        if (velocity >= escape_velocity) {
            break;
        }
    }

    printf("------------------------------------------------------------------\n");
    printf("Simulation terminated at execution time: %.0f seconds.\n", elapsed_time);
    printf("Final Profile Metric: Wear = %.2f / %.0f\n", wear_metric, max_wear_tolerance);
    
    if (wear_metric >= max_wear_tolerance) {
        printf("\n[❌ CRITICAL INSTABILITY]: Actuator wear exceeded tolerance limit! Mechanical structural lockup occurred. Mission Status: FAILED.\n");
    } else {
        printf("\n[🚀 MISSION SUCCESS]: Vehicle safely exceeded Escape Velocity thresholds! Actuator structural integrity maintained. Mission Status: PASSED.\n");
    }
    
    return 0;
}

