# H3DPathfinding
# H3DPathfinding Plugin Documentation
![plugin](https://github.com/user-attachments/assets/3e35d7ed-cd59-475a-b957-77b129184313)

## Introduction
This plugin allows characters in Unreal Engine to navigate 3D environments, detecting and avoiding obstacles dynamically, and finding the shortest 3D path to their target, whether in flying or walking mode.

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

- **Volume**: RRepresents the grid-based volume where pathfinding operations are performed. The volume’s grids can be subdivided based on surrounding objects, marking each grid as not free or free.

- **Core**: Calculates the shortest path to the target using the A* algorithm. When dynamic obstacles are detected and they are moving, the Core recalculates the path in real-time. It also smooths the path and selects an alternative nearby target if the original target is blocked.

- **MoveToComponent**: Manages pathfinding requests and movement for the character. It uses Unreal Engine's Character Movement Component to ensure smooth navigation.!!!!!!!!!

- **DinamicObjectComponent**: Used to classify dynamic objects and allows them to mark grids they occupy as either full or empty. It automatically updates the pathfinding algorithm when objects move.

### Dynamic Objects

Objects or actors with the DinamicObjectComponent affect the grids within the volume as they move.
These objects update the status of grids they occupy, marking them as occupied or free based on their movement. To configure a dynamic object, follow these steps:

1. Ensure the object has a **DinamicObjectComponent**.  ![dinamicobjectcomponent](https://github.com/user-attachments/assets/a9af3721-620f-4ede-9ba1-995c40b4c28a)

2. Set **Mobility** to **Movable**.![mobilitychange](https://github.com/user-attachments/assets/d06e51f0-b66b-4cee-8c5f-0c556698cc62)
3. In **Project Settings > Collision**, create a **Trace Channel** named "DinamicObject" with **Default Response** set to **Ignore**.![createtrace1](https://github.com/user-attachments/assets/f13d3fc7-f09b-4b1c-8391-f69cd91851d9)
![creastetrace2](https://github.com/user-attachments/assets/f2b4bea3-ec6f-46c9-9a4f-a3f96bb4bee1)


4. In the object's **Collision Presets**, set the DinamicObject channel to **Block**.![dinamic object trace open](https://github.com/user-attachments/assets/28e4657c-108c-47a6-a39b-16384c7e8fc8)

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


