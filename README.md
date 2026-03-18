# Drone Tracker

A real-time drone tracking system that simulates a drone's flight and visualizes its location, battery, and speed on a dashboard.

## 🚀 Features

- **Real-time Tracking**: Live updates of drone location using Socket.io.
- **Drone Simulator**: A script that simulates flight path, battery consumption, and speed variations.
- **Interactive Dashboard**: A web-based interface to visualize the drone's status.
- **REST API**: Endpoint for receiving GPS data updates.

## 🛠️ Tech Stack

- **Backend**: Node.js, Express, Socket.io
- **Frontend**: HTML5, Vanilla JavaScript, CSS
- **Communication**: WebSockets for real-time data flow

## 📦 Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Adrija-Saha2006/Drone_tracker.git
   cd Drone_tracker
   ```

2. **Install dependencies**:
   ```bash
   npm install
   ```

## 🚀 Usage

### 1. Start the Server
Run the backend server to listen for drone updates and serve the dashboard:
```bash
node server.js
```
The dashboard will be available at `http://localhost:4000`.

### 2. Run the Simulator
In a separate terminal, start the drone simulator to begin sending GPS data:
```bash
node simulator.js
```

## 📄 Project Structure

- `server.js`: Express server with Socket.io integration.
- `simulator.js`: Script to simulate drone movement and status.
- `public/`: Contains the frontend dashboard (`index.html`).
- `package.json`: Project dependencies and metadata.

## 👤 Author

**Adrija Saha**
- GitHub: [@Adrija-Saha2006](https://github.com/Adrija-Saha2006)
