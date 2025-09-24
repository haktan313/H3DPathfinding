# H3DPathAIPro

UE5 async A* pathfinding on a 3D grid. Handles dynamic obstacles (live occupancy + prediction), start and end relocation, path smoothing, detailed debugging tools, and automatic repathing.

## ✨ Features
- **Async A on a true 3D grid** – Keeps the game thread free while computing paths.
- **Dynamic obstacle handling** – Live occupancy tracking and velocity based prediction with **UHDynamicObject** components.
- **Start & end relocation** – Automatically adjusts blocked or out of volume points.
- **Path smoothing** – Optional corner skipping and removes unnecessary nodes for cleaner movement.
- **Blueprint friendly** – UH3DMoveToAsyncAction lets you request a path without custom C++ code.
- **Debug tools** – In editor and in game grid visualization, player/camera draw distance controls.
- **Destination vector or target actor** – Choose a fixed destination or follow a moving target actor.

## 🚀 Basic Setup

***1.Add the Volume***<img width="111" height="25" alt="Screenshot 2025-09-25 002713" src="https://github.com/user-attachments/assets/205b65b5-cee3-4360-87dc-3239ea284580" />
- **Place an H3DVolume actor in your level**
- **Set Cell Size, Collision Channel, and other grid settings in the Details panel**<img width="808" height="541" alt="Screenshot 2025-09-25 002703" src="https://github.com/user-attachments/assets/2ea739bb-210a-436d-8564-9722e7c420f9" />
- **Click Divide Volume Into Grids to generate the 3D grid**
- ** Physic Tests Tolerance**: Adds a safety tolerance to collision checks during pathfinding to prevent cells from being unnecessarily marked as blocked, resulting in smoother movement.
- ** Cell Size Multiplier for Adjustment**: How many extra cell sizes the pathfinder will search if the start or end cell is not usable (default 2).
- ** Update Grids Rate**: How often (seconds) dynamic-object occupancy is refreshed (default 0.2 s).
  
***2.Mark Dynamic Obstacles (optional)***<img width="223" height="32" alt="Screenshot 2025-09-25 002634" src="https://github.com/user-attachments/assets/a6e5f25a-8f19-4416-aba2-d12b1d149fbc" />
- **Attach the UHDynamicObject component to any actor that should block or update the grid at runtime. The volume will automatically track movement and sets free or not free.**

***3. Request a Path***

<img width="365" height="403" alt="Screenshot 2025-09-25 002628" src="https://github.com/user-attachments/assets/3c52868a-8819-41d8-95d4-fae1373cce4d" />

 **Use the Blueprint node H3DMoveTo** (from UH3DMoveToAsyncAction):

- **World Context:** typically Self.
  
- **Pawn:** the actor you want to move.
  
- **Volume:** the H3DVolume in the level.
  
- **Destination:** a world‐space vector.
  
- **Optional:** tolerance, debug line, and update rate.

The node drives the Pawn along the computed path and broadcasts OnSuccess or OnFailed with an EFailureType reason if it cannot find a valid path.

## 🔍 Debugging & Visualization

- Enable bDrawDebugFromPlayer or bDrawSelectedActorsDebugGrids on the H3DVolume to see occupied/free cells.
- In the editor, enable bDrawCameraDebugGridsOnEditor to preview grids from the viewport camera.

##  Current Limitation
- The target actor tracking function is useful but still in an experimental phase and not as developed as the rest of the system.   I could not yet find enough time to improve it, so future updates will focus on improving it.
