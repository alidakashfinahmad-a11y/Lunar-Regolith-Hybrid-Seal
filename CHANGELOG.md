# 📓 Engineering Log & Project Changelog

This log acts as a chronological record of research analysis, layout iterations, computational bugs, and structural modifications encountered throughout the development of the Environmental Isolation Sleeve (EIS).

---

### 🗓️ Week 1: Project Initialization & Theoretical Framing
## [Phase 1]
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
  ## [Phase 3] - Component Asset Acquisition & Pocket Empirical Optimization
### Added
* Completed the high-fidelity 3D STEP digital model download for the Round-Body Air Cylinder from the McMaster-Carr industrial catalog.
* Initialized real-time cross-sectional Slice diagnostics along the vertical origin plane to gain full internal spatial visibility of the piston shaft threshold.

### Changed
* Scrapped rigid metric textbook constraints (6mm x 12mm) due to severe hardware casing overlap and component clipping conflicts.
* Manually optimized the 2D boundary profile box, hand-fitting it directly into the dark open slot to match real physical clearance bounds.
* Isolated and derived the finalized non-overlapping 2D layout profile into a dedicated part modeling canvas (`Lunar Regolith Mitigation Seal`).

## [Phase 4] - 3D Revolve Solid Generation
### In Progress
* Configuring the 360-degree 3D Revolve sweep command around the central piston rod axis to transform the flat 2D profile into a solid circular shield sleeve collar.
* 3D Solid Revolve & Internal Multi-Channel Extraction
### Added
* Executed a full 360-degree 3D Revolve sweep command around the central piston rod shaft axis to transform the custom 2D layout profile into a solid circular collar sleeve component (`Body2`).
* Configured advanced programmatic parameters within the 'Objects to Cut' subsystem to isolate the geometry modification vector exclusively to the Teflon collar array, leaving the commercial cylinder manifold completely untouched.

### [Phase 5] - Commercial Component Integration & Inner Skeleton Verification

- Sourced an industrial-grade, all-in-one Canted-Coil Spring-Energized PTFE (Teflon) seal matrix from the McMaster-Carr engineering database (Part: 13125K83).
- Resolved assembly coordinate mismatches by executing a 90-degree 3D transform operation to align the native vertical orientation of the seal housing with the longitudinal axis of the cylinder manifold.
- Applied cross-component spatial constraints using the Fusion 360 Translate utility to position the hardware matrix coaxially onto the cylinder shaft.
- Utilized a programmatic Boolean Combine-Cut routine to carve out an automated internal seating cavity inside the circular sleeve collar (`Body2`) mapping the exact physical bounds of the factory hardware seal.
- Executed a non-destructive mid-plane Section Analysis to perform systematic visual tracking of the internal interlocking geometry and verify zero-clearance tolerance between the nested spring core and the actuator rod.
- Restored full solid geometry shading arrays post-verification and pushed version-controlled tracking markers to the cloud environment database repository.

### Changed
* Adjusted dimensional tracking metrics inside the active sketch canvas down to micro-pocket geometry bounds (`1.50mm x 2.00mm`) to preserve critical structural wall thickness and dielectric margins.
* Successfully executed a dual-profile 3D Revolve-Cut operation to hollow out the internal architecture, creating a precise interior cavity for the NASA-grade canted-coil spring matrix and a flush outer landing tray channel for the flexible active EDS skin tape.
