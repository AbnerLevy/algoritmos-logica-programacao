# Eco Return: Smart Logistics & E-Waste Education Hub

> A digital ecosystem connecting residents to electronic waste collection points and empowering collectors through a vocational workshop school. Developed as a Capstone Project (*Projeto Integrador*) for the **Systems Analysis and Development Program** at **Senac College**.

[![Senac](https://img.shields.io/badge/-Senac%20College-blue)](https://www.pe.senac.br/)
[![Porto Digital](https://img.shields.io/badge/-Porto%20Digital-green)](https://www.portodigital.org/paginas-institucionais/pessoas/embarque-digital)
[![Embarque Digital](https://img.shields.io/badge/-Embarque%20Digital-red)](https://educ.rec.br/embarquedigital/#/)

---

## Project Overview
**Eco Return** is a digital platform designed to bridge the gap in the circular economy of electronics. It addresses two major bottlenecks: the difficulty citizens face when disposing of bulky e-waste and the lack of technical qualification for collectors. The project operates under the guidelines of the **National Solid Waste Policy (Law 12.305/2010)**, funded by manufacturers through extended producer responsibility.

### Key Features
*   **Web-Based Scheduling:** Residents request home pickups via a web interface, creating an inventory and generating a secure validation token.
*   **Self-Service Totem:** A physical terminal where collectors access optimized routes via geolocation and print physical work orders.
*   **Anti-Diversion Mechanism:** An integrated scale in the totem crosses the real weight deposited with the resident's estimate to prevent the diversion of high-value components.
*   **Educational Gamification:** Collected weight and material types are converted into points, redeemable for technical courses at the project's workshop school.

---

## LGPD & Data Privacy Compliance
Because this application processes residential location data and collector identification, privacy is a core requirement in compliance with Brazilian Federal Law nº 13.709/2018 (LGPD).

### Implemented Privacy Standards:
*   **Legal Basis for Processing (Art. 7°):** Data collection (address and waste inventory) is strictly bound to the **explicit consent** of the user for the execution of the collection service.
*   **Data Minimization:** The 4-digit validation token ensures the collector only accesses necessary data at the moment of retrieval.
*   **User Rights Panel (Art. 18):** Users can access, correct, or revoke consent, requesting the permanent deletion of their account and history.
*   **Security:** Passwords and biometric identifiers are hashed to ensure data integrity within the database.

---

## Tech Stack
*   **Frontend:** (Design System prototyped in Figma).
*   **Backend:** (Design System prototyped in Figma).
*   **Database:** (Design System prototyped in Figma).
*   **Creative Tools:** Figma for UI/UX, Notion for documentation.

---

## How to View and Interact (Prototype)

This project consists of a **Functional High-Fidelity Prototype** aimed at validating the user experience (UI/UX), automation flow, and hardware feasibility of the **EcoReturn** totem. Since this is a conception and design deliverable, there is no source code compilation or local backend setup required.

### Prerequisites
* A modern web browser of your choice (Google Chrome, Mozilla Firefox, Microsoft Edge, Safari, etc.).
* An active internet connection.

### Direct Environment Access
You can interact directly with the high-fidelity ecosystem by clicking the link below:

**[Launch Interactive EcoReturn Prototype (Figma)](https://www.figma.com/make/2GHMsMSmBQYxj4lBDAvedu/Ecoreturn-totem?code-node-id=0-9&p=f&t=UmCmaw5gJNofHuwa-0&fullscreen=1)**

---

### Usability Test Script (User Flow)

When opening the prototype link, you can simulate the full step-by-step journey of a Collector interacting with the hardware components engineered for the Totem:

* **Biometric Login:** Click on the fingerprint reader component area to simulate a secure login mapped to the collector's pre-registered profile.
* **Route Generation:** Follow the on-screen prompts on the vertical display (9:16 aspect ratio) and watch the simulation trigger a thermal ticket printout featuring an optimized collection route.
* **Weight Verification:** Interact with the side digital scale to confirm the real-time weight of the e-waste against the estimate provided in the initial user request.

### Project Stack & Tools

Instead of production codebases, this conceptual prototype is powered by a modern design and orchestration stack:

* **Figma:** High-fidelity interface design, interactive state transitions, and component animations.
* **Notion:** Requirements gathering, architecture documentation, and task management.
* **Markdown:** Documentation layout, repository indexing, and structural guidelines.

### Totem Hardware Specifications

To bridge digital design with physical engineering, the prototype directly maps out the physical constraints and components mapped for the final hardware setup:

* **Display/Monitor:** Professional vertical display orientation featuring a native 9:16 aspect ratio.
* **Authentication Module:** Integrated USB Biometric fingerprint scanner for rapid operator recognition.
* **Output Module:** Internal 80mm thermal receipt printer for printing out localized routing tickets.
* **Weight Input:** Industrial platform scale securely mounted to the lateral chassis of the totem.

---

### Future Improvements
IoT Sensor Integration: Implement direct communication between the totem scale and the database using ESP32.
AI Sorting: Use computer vision to automatically identify the type of waste deposited.
Collector Mobile App: An offline version of the work order for low-connectivity areas.

### Authors & Project Team
Abner Levy - Front-End Developer
Alerrandro Braz - Team Leader
Carlos Gabriel - Back-End Developer
Jamile Keiller - UI/UX Designer
Julia Lucena - UI/UX Designer

Academic Advisor: 
Tech English Professor: Prof. Leonardo Trevas
