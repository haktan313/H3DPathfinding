# H3DPathfinding
# H3DPathfinding Plugin Documentation
![plugin](https://github.com/user-attachments/assets/3e35d7ed-cd59-475a-b957-77b129184313)

## Introduction
This plugin enables characters in Unreal Engine to navigate 3D environments, reaching targets along the shortest path while dynamically detecting and updating for both static and moving obstacles in walk and fly modes.

## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and above, and is designed to work in both **Blueprint** and **C++** projects.

## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.2\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.

## Workflow

### 1. Volume and Grid Division
**AHVolume3D** divides the volume into grids, marking each as full or empty for efficient pathfinding calculations.

### 2. Pathfinding and Obstacle Detection
**AHPathCore** uses A* to find the shortest path, recalculating in real-time when obstacles appear.

### 3. Movement Modes
This plugin allows both walking and flying modes, customized through Character Movement Component.

- **Walking Mode**: Moves character along same-level grids, navigating small obstacles and sloped surfaces.
- **Flying Mode**: Enables unrestricted movement in 3D space, without vertical limitations.

## Features

- **Dynamic Obstacle Detection**: Detects nearby obstacles and recalculates paths as needed.
- **Real-time Path Updates**: Updates routes in real-time when obstacles appear.
- **Flexible Movement Modes**: Supports both walking and flying modes.
- **Grid-based Volume Management**: Efficiently manages grid-based paths.
- **Smooth Path Optimization**: Reduces unnecessary nodes for smoother paths.

## Architecture and Structure

This plugin uses a **grid-based volume** for pathfinding and employs an advanced **A* algorithm** and **dynamic obstacle detection** system. It enables characters to navigate to their target in both flying and walking modes.

### Core Components

- **Volume**: Represents the grid-based volume for pathfinding. The volume is subdivided based on the presence of objects, marking each grid as either full or empty.

- **Core**: Calculates the shortest path using the A* algorithm. When dynamic obstacles are detected, Core recalculates the route in real-time and finds the smoothest path possible.

- **MoveToComponent**: Initiates pathfinding requests for the character and manages movement. It uses Unreal Engine's Character Movement Component for seamless navigation.

- **DinamicObjectComponent**: Used to classify dynamic objects and updates the grids they occupy as full or empty. Automatically triggers pathfinding updates when objects move.

### Dynamic Objects

To configure dynamic objects that interact with the grid:
1. Ensure the object has a **DinamicObjectComponent**.
2. Set **Mobility** to **Movable**.
3. In **Project Settings > Collision**, create a **Trace Channel** named "DinamicObject" with **Default Response** set to **Ignore**.
4. In the object's **Collision Presets**, set the DinamicObject channel to **Block**.
5. Enable **Generate Overlap Events** for the object.

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


