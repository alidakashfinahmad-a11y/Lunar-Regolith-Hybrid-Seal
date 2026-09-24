Integrated Hybrid Dust Mitigation System for Lunar Articulated Joints

## 📝1. Abstract
This project presents the design, spatial modeling, and computational evaluation of a multi-layered hybrid mechanism engineered to protect mechanical joints from abrasive lunar regolith (dust). Recognizing the trade-offs of existing NASA theories, this system integrates an active Electrodynamic Dust Shield (EDS) with a passive, spring-loaded mechanical lip seal. The design was conceptualized via hand-drawn blueprints, prototyped physically using structural mockups, modeled in 3D using Onshape CAD, and validated through a physics-based C-programmed simulation evaluating component life-span during lunar ascent and escape velocity profiles.

---

## 🌌2. The Problem: Lunar Regolith Degradation
Lunar dust consists of sharp, glass-like, highly abrasive, and electrostatically charged particles. During historical Apollo missions, regolith exposure led to structural degradation of space-suit joints, seal failures in airlocks, and severe mechanical jamming. For upcoming long-duration Artemis missions, automated rovers and robotic arms require seals that can handle high friction and dust loading without experiencing sudden points of failure.

---

## ⚙️3. The Engineering Solution & Structural Design
This project utilizes a *System Integration* strategy to implement a two-layer defense mechanism:
* *Layer 1 (Active EDS):* Uses alternating electric fields to lift and repel up to 85% of electrostatically charged fine dust particles away from the joint entry point before they make physical contact.
* *Layer 2 (Passive Mechanical Seal):* A secondary fail-safe consisting of a spring-loaded resilient membrane that mechanically wipes away any coarse debris or unrepelled particles.

### Design Evolution Portfolio
(Uncomment these image tags on GitHub once you upload your photos to the repository!)

#### Phase 1: Hand-Drawn Blueprint Space Allocation
<!-- <img src="hand_sketch.jpg" width="400" alt="Hand Sketch Blueprint"> -->

#### Phase 2: Cardboard, Balloon, and PVC Physical Mockup
<!-- <img src="physical_mockup.jpg" width="400" alt="Physical Mockup"> -->

#### Phase 3: Onshape 3D CAD Production
<!-- <img src="onshape_cad.png" width="400" alt="Onshape 3D CAD Model"> -->

---

## 💻4. Computational Physics Model (C Simulation)
To evaluate the mathematical validity of the integrated system, a trajectory simulation was written in C. The algorithm tracks structural wear profiles alongside core orbital equations derived from Newton's Laws and gravitational mechanics, testing how long the joint remains operational when flying through atmospheric debris fields toward escape velocity thresholds.

### Mathematical Framework Utilized:
*1. Dynamic Gravitational Force:*  
$$g = \frac{G \cdot M_{earth}}{(R_{earth} + altitude)^2}$$
<br>

*2. Escape Velocity Threshold:*  
$$v_e = \sqrt{\frac{2 \cdot G \cdot M_{earth}}{R_{earth} + altitude}}$$
<br>

*3. Wear Accumulation Loop:*  
$$\Delta \text{Wear} = \text{Dust Density} \times \text{System Leakage Factor} \times \Delta t$$
<br>
## 📊5. Simulation Results & Engineering Analysis
By tweaking the configuration variables within the C sandbox compiler, the mechanism was tested under two critical conditions:

### Case A: Control Group (Systems Disabled / Power Failure)
* *Status:* Failed
* *Observation:* Without active repelling or sealing, abrasive wear exceeded the structural tolerance threshold within the debris zone. Resulted in mechanical lockup and catastrophic mission failure.

### Case B: Experimental Group (Hybrid Integrated Systems Active)
* *Status:* Passed / Mission Success
* *Observation:* The active electrostatic layer reduced the dust density load by 85%, significantly mitigating the friction wear curve on the secondary seal. The mechanism maintained complete mechanical integrity throughout the entire ascent profile, successfully surviving past Earth's escape velocity limits.

## 🚀6. Conclusion & Future Outlook
This project demonstrates that relying on a single, isolated engineering mechanism creates a fragile single point of failure in deep-space environments. By combining electronic fields with physical mechanical boundaries, component lifespans can be exponentially extended. Future work on this project will involve optimizing the specific convergence angles of the mechanical lips to lower rotational torque resistance.

_ _ _
## 6. Conclusion & Future Outlook
This project demonstrates that relying on a singl
