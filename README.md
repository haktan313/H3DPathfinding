# H3DPathfinding
# H3DPathfinding Plugin Documentation
![plugin2](https://github.com/user-attachments/assets/0666c145-b0f7-412e-ae80-6483a3ec8195)

## Introduction
This plugin allows characters in Unreal Engine to navigate 3D environments, detecting and avoiding obstacles dynamically, and finding the shortest 3D path to their target, whether in flying or walking mode.

-In future updates, this system will be compatible with my custom AI system and Behavior Tree framework, which I developed in Unreal Engine.

## Contents

- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Workflow](#workflow)
  - [1. Volume and Grid Division](#1-volume-and-grid-division)
  - [2. Pathfinding and Obstacle Detection](#2-pathfinding-and-obstacle-detection)
  - [3. Movement Modes](#3-movement-modes)
- [Features](#features)
- [Architecture and Structure](#architecture-and-structure)
  - [Core Components](#core-components)
- [Dynamic Objects](#dynamic-objects)
- [Blueprint and C++ Setup Examples](#blueprint-and-c-setup-examples)
- [Tutorial Video](#tutorial-video)

## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and later and is designed to work in both Blueprint and C++ projects.

## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.2\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.

## Workflow

![volume](https://github.com/user-attachments/assets/b57a3671-9d01-4cd4-b261-46e5bbb11b5f)
### 1. Volume and Grid Division 
**AHVolume3D** divides the volume into grids, marking each as full or empty for efficient pathfinding calculations. 

![core](https://github.com/user-attachments/assets/4c82a512-78ea-4f48-b69d-63c8cbec5e9d)
### 2. Pathfinding and Obstacle Detection 
**AHPathCore** uses A* to find the shortest path, recalculating in real-time when obstacles appear.

### 3. Movement Modes ![moveto](https://github.com/user-attachments/assets/62e16a9e-ddf8-4298-a4ee-d1ab36a36276)
This plugin allows both walking and flying modes, customized through Character Movement Component.This makes it easy to adjust parameters such as speed, acceleration, and movement style. 

- **Walking Mode**: Moves character along same-level grids, navigating small obstacles and sloped surfaces.
- **Flying Mode**: The character can freely move in all directions within the 3D space, with no vertical limitations.

## Features

- **Dynamic Obstacle Detection**: The character detects nearby objects with DinamicObjectComponent and dynamically adjusts its route to avoid obstacles.
  This feature ensures smooth navigation, even in environments with moving obstacles.

- **Real-time Path Updates**: The A algorithm* recalculates the route in real-time if new obstacles appear in the path.
   Triggered by CheckAvailability from the DinamicObjectComponent, the character quickly adapts to environmental changes, maintaining the optimal route to the target.
  
- **Flexible Movement Modes**: Supports both walking and flying modes.
  
- **Character Movement Component** Integration: Parameters like speed, acceleration, and movement style are easily adjustable through Character Movement Component, allowing for custom movement settings for each mode.
  
- **Grid-based Volume Management**: Efficiently manages grid-based paths.
  
- **Smooth Path Optimization**: Reduces unnecessary nodes for smoother paths.

- **Alternative Target Selection**: If the end location is occupied, the system automatically selects the nearest available grid within a specified range as the new endpoint, ensuring the character can reach an accessible location close to the original target.

## Architecture and Structure

This plugin uses a **grid-based volume** for pathfinding and employs an advanced **A* algorithm** and **dynamic obstacle detection** system. It enables characters to navigate to their target in both flying and walking modes.

### Core Components



![volume](https://github.com/user-attachments/assets/b57a3671-9d01-4cd4-b261-46e5bbb11b5f)
- **Volume**: RRepresents the grid-based volume where pathfinding operations are performed. The volume’s grids can be subdivided based on surrounding objects, marking each grid as not free or free.
  
  -**Draw Debug Grids from Player**(varaible(bool)): When enabled, this variable visualizes grids around the player, showing nearby navigable areas for debugging purposes.

![core](https://github.com/user-attachments/assets/4c82a512-78ea-4f48-b69d-63c8cbec5e9d)
- **Core**: Calculates the shortest path to the target using the A* algorithm. When dynamic obstacles are detected and they are moving, the Core recalculates the path in real-time. It also smooths the path and selects an alternative nearby target if the original target is blocked.

![moveto](https://github.com/user-attachments/assets/62e16a9e-ddf8-4298-a4ee-d1ab36a36276)
- **MoveToComponent**: Manages pathfinding requests and movement for the character. It uses Unreal Engine's Character Movement Component to ensure smooth navigation.
  
  -**TargetLocation**(varaible(Vector)): Set the target location for the character to reach.
  
  -**Draw Debug Line**(varaible(bool)): When enabled, this variable displays the path line from the character to the target, useful for visualizing the calculated path.
  
  -**Debug Line Duration**(varaible(float)): Sets the duration (in seconds) for how long the debug line remains visible. A value of -1 makes the line persist indefinitely.

![component](https://github.com/user-attachments/assets/17d5948f-e075-4371-a704-0d91612a2f17)
- **DynamicObjectComponent**: Used to classify dynamic objects and allows them to mark grids they occupy as either full or empty. It automatically updates the pathfinding algorithm when objects move.

### Dynamic Objects

Objects or actors with the DynamicObjectComponent affect the grids within the volume as they move.
These objects update the status of grids they occupy, marking them as occupied or free based on their movement. To configure a dynamic object, follow these steps:

1. Ensure the object has a **DynamicObjectComponent**.  ![component](https://github.com/user-attachments/assets/c80a66ed-f54f-4f14-94b0-9934fc70cf46)

2. Set **Mobility** to **Movable**.![mobilitychange](https://github.com/user-attachments/assets/d06e51f0-b66b-4cee-8c5f-0c556698cc62)
3. In **Project Settings > Collision**, create a **Trace Channel** named "Dynamicbject" with **Default Response** set to **Ignore**.![trace1](https://github.com/user-attachments/assets/4c5266c4-28d0-40d6-8732-cee44ca6da6b)
![traceignore](https://github.com/user-attachments/assets/8040e26c-9a9b-46c5-b054-f3d578cb4ef7)


4. In the object's **Collision Presets**, set the DinamicObject channel to **Block**.![blıock](https://github.com/user-attachments/assets/134e5587-b5d0-4d53-89dd-067ee7466b7f)

5. Enable **Generate Overlap Events** for the object.![generateoverlapevents](https://github.com/user-attachments/assets/5965b8d6-ddf0-420b-a411-05150fa115a5)


When configured, dynamic objects update grid status as they move. The pathfinding system adjusts routes in real-time based on these updates.

## Blueprint and C++ Setup Examples

### Blueprint Usage
To move the character towards a target in Blueprint, call the `HMoveTo` function with the following parameters: `Target(HMoveToComponent)`, `Actor Ref`, `Volume Ref`, and `Tolerance Ref`.

![blueprint](https://github.com/user-attachments/assets/a16f0eab-6e16-426a-b5d2-c4278f6ba00a)

### C++ Usage
In C++, follow these steps:

1. **Declare Volume and MoveToComponent**:
    ```cpp
    UPROPERTY(EditAnywhere, Category = "PathFinding")
    class AHVolume3D* VolumeRef;

    UPROPERTY(VisibleAnywhere, Category = "PathFinding")
    class UHMoveToComponent* HMoveToComponent;
    ```

2. **Call `HMoveTo` Function in `BeginPlay`**:
    ```cpp
    if(VolumeRef)
    {
        HMoveToComponent->HMoveTo(this, VolumeRef, 50.f);
    }
    ```

3. **Set Module Dependencies**:
    Add `"H3DPathfinding"` to `Build.cs` dependencies:
    ```csharp
    PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "H3DPathfinding" });
    ```

## Tutorial Video
[![H3DPathfinding Plugin Tutorial](https://github.com/yourusername/yourrepositoryname/raw/main/images/plugin2_resized_thumbnail.png)](https://www.youtube.com/watch?v=51_4N3GaQ9c)





