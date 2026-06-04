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

## Getting Started (Local Development)

### 1. Prerequisites
Ensure you have installed:
*   [Git](https://git-scm.com)
*   [Node.js](https://nodejs.org/) (v18.0.0 or higher)
*   [Java JDK 17+](https://www.oracle.com/java/)

### 2. Configuration
Clone the repository and navigate to the project folder:
```bash
git clone [https://github.com/AbnerLevy/algoritmos-logica-programacao.git](https://github.com/AbnerLevy/algoritmos-logica-programacao.git)
cd semestre-1/projeto-integrador-eco-return
```
---

### Future Improvements
IoT Sensor Integration: Implement direct communication between the totem scale and the database using ESP32.
AI Sorting: Use computer vision to automatically identify the type of waste deposited.
Collector Mobile App: An offline version of the work order for low-connectivity areas.

### Authors & Project Team
Abner Levy - Lead Developer & UI/UX Designer - GitHub
Alerrandro Braz -
Carlos Gabriel -
Jamile Keiller -
Julia Lucena -

Academic Advisor: (To be defined)

Tech English Professor: Prof. Leonardo Trevas
