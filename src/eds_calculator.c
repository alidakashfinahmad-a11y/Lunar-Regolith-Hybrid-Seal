#include <stdio.h>
#include <math.h>

int main() {
    // --- CORE ASTRONOMICAL & LUNAR MATERIAL CONSTANTS ---
    const double G = 6.6743e-11;            // Universal Gravitational Constant (m^3 kg^-1 s^-2)
    const double M_MOON = 7.342e22;         // Exact mass of the Moon (kg)
    const double R_MOON = 1737400.0;        // Mean volumetric radius of the Moon (meters)
    
    // --- SIMULATION RUNTIME CONFIGURATION ---
    double altitude = 0.0;                  // Initial altitude tracking above surface bounds (m)
    double velocity = 0.0;                  // Ascent kinetic velocity tracker (m/s)
    double acceleration = 4.50;             // Constant lunar liftoff motor thrust acceleration (m/s^2)
    double time_step = 1.0;                 // Discrete step integration window (dt = 1 second)
    double elapsed_time = 0.0;              // Cumulative tracking timer array (seconds)
    
    // --- STRUCTURAL DEGRADATION & WEAR PROFILE PARAMETERS ---
    double wear_metric = 0.0;               // Abrasive friction wear damage accumulation metric
    double max_wear_tolerance = 100.0;      // Critical structural lockup wear ceiling limit
    double base_dust_density = 0.085;       // Volumetric density coefficient of levitated lunar regolith
    
    // --- ACTIVE / PASSIVE HYBRID SEAL MITIGATION PARAMETERS ---
    // 0 = Protective Systems Offline (Control) | 1 = Hybrid Teflon Spring + Active EDS Matrix Online
    int hybrid_system_active = 1;
    
    // Combined active traveling wave electrostatic repulsion and passive PTFE physical displacement
    // yields a total systemic leakage factor of only 8% (92% particle rejection efficiency profile).
    double leakage_factor = (hybrid_system_active == 1) ? 0.08 : 1.00;
    
    printf("=====================================================================\n");
    printf(" LUNAR REGOLITH ACTIVE/PASSIVE MITIGATION ACTUATOR SIMULATION\n");
    printf("=====================================================================\n");
    printf("Time(s) | Alt(km) | Vel(m/s) | EscVel(m/s) | Actuator Wear Status\n");
    printf("---------------------------------------------------------------------\n");
    
    // Core simulation loop running until vehicle hits escape velocity or hardware component jams
    while (wear_metric < max_wear_tolerance) {
        elapsed_time += time_step;
        
        // Classical kinematic equations of motion updates
        velocity += acceleration * time_step;
        altitude += (velocity * time_step) + (0.5 * acceleration * pow(time_step, 2));
        
        // Dynamically compute orbital escape velocity relative to current lunar altitude profile
        double current_radius = R_MOON + altitude;
        double escape_velocity = sqrt((2.0 * G * M_MOON) / current_radius);
        
        // Dynamic Environmental Dust Decay Function: Electrostatic levitated particulate concentrations
        // thin out exponentially as the ascending craft leaves the lowest 50 kilometers of the lunar sky.
        double altitude_density_decay = exp(-altitude / 50000.0);
        
        // Instantaneous wear is a dynamic product of speed velocity friction, material density, and mitigation efficiency
        double instantaneous_wear = base_dust_density * (velocity * 0.005) * altitude_density_decay * leakage_factor;
        wear_metric += instantaneous_wear;
        
        // Log telemetry lines to output matrix every 10 seconds of simulated timeline execution
        if ((int)elapsed_time % 10 == 0) {
            printf("%-8.0f| %-8.2f| %-9.1f| %-12.1f| %-5.2f / %.1f\n", 
                   elapsed_time, (altitude / 1000.0), velocity, escape_velocity, wear_metric, max_wear_tolerance);
        }
        
        // Break integration loop if vehicle successfully matches local escape velocity parameters
        if (velocity >= escape_velocity) {
            break;
        }
    }
    
    printf("---------------------------------------------------------------------\n");
    printf("Simulation terminated at execution time: %.1f seconds.\n", elapsed_time);
    printf("Final Mechanical Structural Metric: Wear Index = %.2f / %.1f\n", wear_metric, max_wear_tolerance);
    
    if (wear_metric >= max_wear_tolerance) {
        printf("\n[X] CRITICAL INSTABILITY: Actuator seal compromised! High-abrasion dust ingress triggered actuator lockup. Mission Status: FAILED.\n");
    } else {
        printf("\n[✓] MISSION SUCCESS: Vehicle reached Lunar Escape Velocity! Active EDS matrix and passive spring Teflon ring preserved mechanical alignment. Mission Status: PASSED.\n");
    }
    printf("=====================================================================\n");
    
    return 0;
}

