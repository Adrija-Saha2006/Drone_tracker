<div align="center">
  <h1>🚁 Mission Command: Zero-Trust</h1>
  <p><b>Military-Grade Drone Tracking & Telemetry via the Stellar Blockchain</b></p>
</div>

## 🚨 The Problem
Modern consumer and enterprise drones rely on inherently vulnerable radio, Wi-Fi, and LTE protocols. If an attacker intercepts the frequency, they can spoof signals, hijack telemetry, or inject malicious flight paths. Ground control stations currently have no mathematical way to prove the drone on the other end is truly theirs, or that its firmware hasn't been maliciously altered.

## 💡 Our Solution
We built a **Zero-Trust Handshake Protocol** for Unmanned Aerial Vehicles (UAVs). By leveraging simulated Zero-Knowledge (ZK) proofs and the **Stellar Testnet Ledger**, our Ground Control Station physically *refuses* to talk to drone hardware unless:
1. The drone mathematically proves its identity using a simulated ZK circuit.
2. The drone's firmware SHA-256 footprint perfectly matches an anchored transaction on the Stellar Blockchain.

If both conditions pass, we drop an ephemeral AES-256 symmetric tunnel for all tracking and commands. If either fails, the drone is permanently logged out and blocked at the port level. 

---

## 🔥 Key Hackathon Features

- **🔐 ZK-Firmware Gating (`connectionVerified`)**: The system aggressively rejects telemetry arrays and cartography access unless the drone hardware can dynamically prove its firmware integrity, cross-referenced identically against the Horizon API.
- **⚓ Mission Integrity Anchoring (`missionAnchored`)**: You cannot even `ARM` the drone unless your designated geometric flight path (Waypoints) has been SHA-256 hashed and structurally anchored to the Stellar Blockchain. 
- **💼 Freighter Wallet Integration**: Command authority is tied directly to your browser extension, ensuring dynamic flight path anchors are natively logged to an authorized public key.
- **🛡️ AES-256 Websocket Tunnel**: Once the blockchain verifies the handshake, all coordinate data streams stream entirely obfuscated bridging the Node.js layer and React client.
- **🔎 Built-In Blockchain Evaluators**: We didn't just build a dashboard; we built an **Integrity Verification Panel** that allows Hackathon Judges to paste mission JSON arrays, raw hashes, or TxIDs directly into the UI to natively query Stellar nodes and prove our cryptographic anchors.
- **⏱️ Professional Monochrome HUD**: A completely custom, distraction-free aesthetic boasting interactive mapping tools, artificial horizon feedback, and dynamic live terminal readouts.

---

## 🏗️ Architecture Stack

- **Frontend Terminal**: React, Vite, TailwindCSS (Strict Monochrome Palette), Lucide React
- **Blockchain Oracle**: `@stellar/freighter-api`, `stellar-sdk` leveraging the active Horizon Testnet
- **Backend Node Engine**: Node.js, Express, Socket.io (WebSocket Gating)
- **Cryptography**: `crypto-js` (Symmetric AES Routing), Simulated ZK-Snarks Constraints

---

## 🚀 Quick Start Guide (For Judges)

### 1. Boot up the Middleware Gateway Server
This server handles AES encryption, Stellar Anchor matching, and drone hardware physics simulation.
```bash
cd backend
npm install
node server.js
```

### 2. Launch the Ground Control Station (GCS)
```bash
cd frontend
npm install
npm run dev
```

### 3. See the Zero-Trust Protocol in Action
1. Open up `http://localhost:5173`. You will instantly hit the complete **Lockout Shield**.
2. Assuming you have the **Freighter Extension** installed and dialed to the `TESTNET`, click **Connect Wallet**.
3. Hit **AUTHORIZE SECURE LINK**. Watch the terminal speed through the ZK and Stellar blockchain authentications to establish the AES arrays.
4. Try to click **ARM**. *It's disabled*. You must add waypoints to the map and click **Anchor Mission Integrity**.
5. Finally, hit **VERIFY PAYLOAD** in the top navigation, paste the resulting Hash or TxID, and watch the system physically confirm your anchored flight path against the active Stellar ledger natively.

## 🐳 Deployment with Docker

For a streamlined, containerized experience, you can launch the entire ecosystem (Frontend & Backend) using Docker Compose.

### 1. Requirements
Ensure you have **Docker** and **Docker Compose** installed on your system.

### 2. Launch the Stack
From the project root, run:
```bash
docker-compose up --build
```
This command will:
- Build the Node.js backend environment.
- Build the React/Vite frontend environment.
- Orchestrate the networking and port mapping automatically.

### 3. Access the Services
- **Ground Control Station (Frontend)**: `http://localhost:5173`
- **Middleware Gateway (Backend)**: `http://localhost:3000`

---
*Built to redefine aerial command boundaries.*
