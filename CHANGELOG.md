# 📓 Engineering Log & Project Changelog

This log acts as a chronological record of research analysis, layout iterations, computational bugs, and structural modifications encountered throughout the development of the Environmental Isolation Sleeve (EIS).

---

### 🗓️ Week 1: Project Initialization & Theoretical Framing
* *Activity:* Initialized remote GitHub workspace repository shell. Formatted textbook equations using LaTeX typography.
* *Literature Sources Analyzed:* 
  1. NASA Technical Reports Server (NTRS) Document ID 20100021943 — Preliminary Assessment of Seals for Dust Mitigation of Mechanical Components (Delgado & Handschuh, NASA Glenn).
  2. NASA Technical Reports Server (NTRS) Document ID 20160005317 — Electrodynamic Dust Shield for Space Applications (NASA Kennedy).
  3. Visual Reference: Dual-axis Thrust Vector Control (TVC) Rocket Gimbal Actuator Architecture profiles.
* *Core Design Discovery:* Discovered that pure Teflon undergoes mechanical *creep (cold flow)* under sustained pressures. Decided to counter this material degradation trait by mapping an internal mechanical spring-loaded system into the upcoming layout.
## [Phase 2] - Dynamic Telemetry & CAD Initialization (Current)
### Added
* Deployed an operational `eds_calculator.c` trajectory simulation code inside the `/src` directory.
* Structured algorithmic loops tracking Earth's variable gravitational scale, velocity accumulations, and dynamic altitude changes.
* Integrated numerical calculations modeling Case A (Control Group degradation failure) vs. Case B (Active Hybrid mitigation longevity profiles).
* Conducted deep-dive aerospace literature review utilizing NASA Technical Reports Server (NTRS), focusing on Delgado spring-loaded Teflon seal mechanics (NASA/TM-2010-216343) and flexible interdigitated EDS track geometries.
* Initialized the Autodesk Fusion 360 cloud environment with student license verification.

### In Progress
* Configuring the built-in McMaster-Carr component pipeline inside Fusion 360 to import a standard industrial actuator shaft for structural referencing.
