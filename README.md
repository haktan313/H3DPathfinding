# H3DPathAIPro
**Unreal Engine 5.2: [https://www.mediafire.com/file/3infrscv27foclx/H3DPathAIPro_5.2.zip/file](https://www.mediafire.com/file/9wz1si44fapemvc/H3DPathAIPro_5.2.zip/file)**

**Unreal Engine 5.3: https://www.mediafire.com/file/wkenlod690axhnt/H3DPathAIPro_5.3.zip/file**

**Unreal Engine 5.4: [https://www.mediafire.com/file/tjmfc2n38vlymaq/H3DPathAIPro_5.4.zip/file](https://www.mediafire.com/file/tjmfc2n38vlymaq/H3DPathAIPro_5.4.zip/file)**

**Unreal Engine 5.5: [https://www.mediafire.com/file/rfigf7uvqrrlpz9/H3DPathAIPro_5.5.zip/file](https://www.mediafire.com/file/8ke1kr70nm5klp6/H3DPathAIPro_5.5.zip/file)**

## Tutorial Video
[H3DPathAIPro Tutorial](https://youtu.be/wuCLwcgQxt4)

## H3DPathAIPro Showcase Video
[H3DPathAIPro Showcase](https://youtu.be/w4L8tLv-wZw)

# H3DPathAIPro Plugin Documentation
![Image](https://github.com/user-attachments/assets/5f709e5a-d4b2-43c5-8f56-c3e6ae4e4e42)

## Introduction 
This plugin brings together 3D pathfinding and advanced AI plugin(HAIPro). Characters can walk/fly through 3D spaces, while the AI management model with features like token based task prioritization for NPCs, integration with an Advanced AIController using the CrowdFollowing, and flexible multi-action support through the DoAction task.

⚠️This plugin has several advanced AI managment tools and features and those whole tools adjusted for working with 3DPathfinding like you will see a new MoveTo function and behavior tree task which design just for this and other several things like this. Basiclly a merged version of HAIPro and H3DPathfinding⚠️

-This plugin is actually a merged version of HAIPro and H3DPathfinding


## Contents
- [Supported Versions](#supported-versions)
- [Installation Instructions](#installation-instructions)
- [Some Features](#some-features)
     - [General](#general)
     - [AI Managment Features](#ai-managment-features)
     - [3D Pathfinding Features](#3d-pathfinding-features)
- [AI Managment: Basic Setup and Usage](#ai-managment-basic-setup-and-usage)
     - [Assigning the HAI AIController](#1-assigning-the-hai-aicontroller)
     - [Adding the HAI Base Component & Configuring Perception](#2-adding-the-hai-base-component--configuring-perception)
     - [Setting Up the Behavior Tree](#3-setting-up-the-behavior-tree)
     - [Configuring Patrol Behavior](#4-configuring-patrol-behavior)
     - [Using the Token System](#5-using-the-token-system)
- [3DPathfinding: Architecture, Basic Setup and Usage](#3dpathfinding-architecture-basic-setup-and-usage)
     - [HVolume3D](#hvolume3d)
     - [HPathCore](#hpathcore)
     - [HMoveTo-MoveTo3DVolume](#hmoveto-moveto3dvolume)
     - [DynamicObjectComponent](#dynamicobjectcomponent)
- [Blueprint/C++ Usage Examples](#blueprintc-usage-examples)
     - [HAI Base Component Events and Functions](#hai-base-component-events-and-functions)
     - [HAI Varaibles](#hai-varaibles)
     - [HVolume3D Functions](#hvolume3d-functions)
     - [HToken System](#htoken-system)
     - [HAI Controller (with Crowd Following Component)](#hai-controller-with-crowd-following-component)
     - [Tasks](#tasks)
     - [Decorator & Service](#decorator--service)
     - [EQS](#eqs)
     - [Behavior Tree & Blackboard](#behavior-tree--blackboard)

## Supported Versions
This plugin is compatible with Unreal Engine 5.2 and later and is designed to work in both Blueprint and C++ projects.

## Installation Instructions

1. **Extract the Plugin File**  
   Extract the downloaded `.zip` file to a folder.

2. **Move the Plugin Folder**  
   Move the extracted plugin folder to the `Engine/Plugins/Marketplace` directory of your Unreal Engine installation. The path is usually:  
   `C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\Marketplace`

3. **Activate the Plugin**  
   Open Unreal Engine, go to `Edit > Plugins`, and enable the plugin.

# Some Features

### General
**⚠️This plugin has several advanced AI managment tools and features and those whole tools adjusted for working with 3DPathfinding like you will see a new MoveTo function and behavior tree task which design just for this and other several things like this. Basiclly a merged version of HAIPro and H3DPathfinding⚠️**

- **HMoveTo Function**: It is basically the version of AIMoveTo designed for 3D Pathfinding.
  
![Image](https://github.com/user-attachments/assets/5b5c5b00-2444-4cef-9203-6d4adc1ab4fe)
![Image](https://github.com/user-attachments/assets/0e84c80d-e249-4ee0-b293-386b3686d6b0)

  ### **AI Managment Features:**
   
- **Token-Based Task Prioritization**: NPCs can use tokens to dynamically prioritize tasks. Both the giver and receiver of tokens must have the **HTokenSystem Component** for this system to work.
  
  ![Image](https://github.com/user-attachments/assets/d09f21d3-abb3-4796-a1bc-668717eaded8) 

- **Advanced AIController**: Includes AI Perception for sight, hearing, and damage detection, integrated with the Crowd Following Component for smooth pathfinding and collision avoidance in crowded environments.

![Ekran görüntüsü 2024-11-22 143644](https://github.com/user-attachments/assets/bbe7f24f-5051-4fac-95be-0c77914dd73f)

- **Flexible Multi-Action Support**: The **DoAction Task** allows NPCs to perform multiple actions dynamically using Action IDs. This system can be used both in behavior trees or independently for custom setups.

  ![Image](https://github.com/user-attachments/assets/48596977-3425-481f-a99c-b3e4b248eed8)
  ![Image](https://github.com/user-attachments/assets/a2a7f320-1c7c-4ae0-a9f3-caaec9c148c7)

- **Customizable Perception System**: Adjust sight, hearing, and damage detection values for each NPC individually via the HAI Base Component.

- **Dynamic Patrol System**: NPCs can follow splines for patrol routes or perform random patrols within a defined area, offering flexible pathing behavior.

- **Behavior Tree & AI Management Integration with 3D Pathfinding**: Built-in tasks, services, and decorators let you control AI behavior through Behavior Trees with dynamic decision-making. The system also supports 3D pathfinding, allowing nodes like MoveTo3DVolume to be used directly within Behavior Trees.

### **3D Pathfinding Features:**

- **Dynamic Obstacle Detection**: Characters respond to paths blocked by objects with the DynamicObjectComponent, dynamically recalculating new routes to avoid them. This allows smooth and adaptive navigation in environments with moving or changing obstacles.

- **Real-time Path Updates**: The A algorithm* recalculates the route in real-time if new obstacles appear in the path.
  
- **Flexible Movement Modes**: Supports both walking and flying modes.
  
- **Character Movement Component** Integration: Parameters like speed, acceleration, and movement style are easily adjustable through Character Movement Component, allowing for custom movement settings for each mode.
  
- **Grid-based Volume Management**: Efficiently manages grid-based paths.
  
- **Smooth Path Optimization**: Reduces unnecessary nodes for smoother paths.

- **Alternative Target Selection**: If the end location is occupied, the system automatically selects the nearest available grid within a specified range as the new endpoint, ensuring the character can reach an accessible location close to the original target.

- **Finding Random Point on HVolume3D**: Returns a random point of the desired dimension on HVolume3D.

![Image](https://github.com/user-attachments/assets/990aa93c-1c5a-4c94-b23a-36f22fefc050)

# **AI Managment: Basic Setup and Usage**

This part will help you set up and use the **AI Managment** within Unreal Engine for advanced NPC behaviors, patrols, and task management.

---

   ## **1. Assigning the HAIController**

![Ekran görüntüsü 2024-11-22 143644](https://github.com/user-attachments/assets/bbe7f24f-5051-4fac-95be-0c77914dd73f)

To use the HAIController for your NPCs:

1. Open the NPC Blueprint.
2. In the **Class Defaults**, locate the **AI Controller Class** property.
3. Select **HAIController** from the dropdown list.
4. Save the Blueprint.

---

   ## **2. Adding the HAI Base Component & Configuring Perception**

   ### **Adding the HAI Base Component**
1. Open your NPC Blueprint.
2. Add the **HAI Base Component** through the **Components** panel.

   ![Ekran görüntüsü 2024-11-22 143655](https://github.com/user-attachments/assets/b1d86dfc-5abf-4a7d-a0a8-7d3274ed1230)

   ### **Configuring**

![Image](https://github.com/user-attachments/assets/58e6b256-f1cd-4fde-a8e2-831ba8429a2e)

1. Using 3DPathfinding:
   - `Volume Ref`: To use 3D Pathfinding you need to assign the proper HVolume3D for your NPC.
   
2. Adjust detection variables in the **HAI Base Component**, such as:
   - `Targets Tag`: To filter who the NPC can see
   - `Sight Radius`: Maximum range for sight detection.
   - `Peripheral Vision Angle Degrees`: Field of view for sight.
   - `Hearing Range`: Maximum range for sound detection.
   - `Dominant Sense`: Primary detection method (e.g., Sight).

4. Toggle specific senses using:
   - `Open Sight`, `Open Hear`, `Open Damage` (enable/disable sight, hearing, and damage detection).
  
5. ⚠️ Important Note About Blackboard Key Names
   - When filling out the BlackboardKeyValuesName section in the HAI Base Component, the following fields must exactly match the names of the keys created in your Blackboard asset:
     
     - **Target Actor Key Name → e.g., targetActor**
     - **Location Vector Key Name → e.g., pointOfInterest**
     - **Enum on Possess State Key Name → e.g., OnPossessState**
     - **Bool Can Do Action Key Name → e.g., canDoAction**

❗️These names are case-sensitive and must be identical to ensure correct blackboard communication.

✅ It's highly recommended to copy-paste the key names from the Blackboard into the component to avoid typos.

---

  ## **3. Setting Up the Behavior Tree**

  ### **Using Example Files**
- The plugin includes 2 different **behavior tree examples**. One made for **3DPathfinding** and one for **default**, two **EQS setups**, and a **Blackboard** in the plugin’s **Content** folder.
- Enable **Show Engine Content** and **Show Plugin Content** in the Content Browser to access these files.

  ### **Building Your Own Behavior Tree**
1. Use the example Behavior Tree as a reference.
2. Add plugin tasks, decorators, and services such as:

   ![Image](https://github.com/user-attachments/assets/c60275b2-be05-4ff3-a63b-c57d8e4f764b)
   ![Image](https://github.com/user-attachments/assets/b1d5e262-074a-4fc2-91c2-2843e28ebd04)
   
   - **Tasks**: `DoAction`, `MoveTo3DVolume`, `Set Focus`, `Clear Focus`, `Set Movement State`, `Find RandomPointOnNavMesh`, `Find Next Patrol Node`, `Set State Passive`, `Set State Investigate`, `Set State Active`
   - **Services**: `CanTookToken`
   - **Decorators**: `Has Patrol Route`, `Is In The Range`, `Blacboard Base Condition(OnPossessState)` `Blackboard Base Condition(canDoAction)`

  ### **Blackboard Setup**

  ![blackboard](https://github.com/user-attachments/assets/9703c3aa-d855-4d85-8ee6-60ccad7c1379)
  
1. Add required keys like:
   - `targetActor`: Focused target for the NPC.
   - `OnPossessState`: Current state (e.g., Passive, Active, Investigating).
   - `pointOfInterest`: Location of interest.
   - `canDoAction`: Boolean indicating if an action can be performed.
     
🔒 **Important Note**:
- The key names entered here (e.g., targetActor, OnPossessState, pointOfInterest, canDoAction) must exactly match the names assigned in the HAIBaseComponent settings (e.g., Target Actor Key Name, Enum on Possess State Key Name, etc.).
Even a small mismatch (such as case sensitivity) will cause the AI logic to fail. ✅

📌 Tip: To avoid mistakes, copy the key names directly from the Blackboard when assigning them in the component.

  ### **EQS Queries**

  ![eqs](https://github.com/user-attachments/assets/82871d8a-c587-48c5-a97f-3035d4922fd6)
  
- Use the included EQS setups:
  - `FindIdealRange_Example`: Finds optimal positions based on visibility and distance.
  - `Strafe_Example`: Generates strafing positions around the target actor.

---

  ## **4. Configuring Patrol Behavior**

  ### **Setting Up Patrols**
1. Add a **Spline Component** in your NPC Blueprint and define patrol points.
2. Assign the spline to the **Patrol Spline** property in the **HAI Base Component**.

   ![Image](https://github.com/user-attachments/assets/a89868b6-0be6-4f4c-8a7d-98f88ba4fa3d)

  ### **Behavior Tree Integration**
- Use the **Find Next Patrol Node** task to make the NPC follow the patrol path.

  ### **Dynamic Patrol Management**
- Manage how many NPCs can perform a patrol or action simultaneously.
- Adjust token settings in the **HToken System Component** to control task limits.

---

  ## **5. Using the Token System**

  ### **Purpose**
The **HToken System** manages task prioritization, ensuring smooth execution of tasks for NPCs or other entities (e.g., players, objects).

![388136577-f456656e-03a2-41f5-89c4-01bb8393fcba](https://github.com/user-attachments/assets/38566b03-e552-4d68-bb63-f6c522e7602d)
![388183765-cb45a7ce-bb78-4359-a582-c96b60da620e](https://github.com/user-attachments/assets/5bde07b6-c9e6-457a-af50-1513809110dc)
![388136567-0519b55e-b7c2-4bea-83f9-d4faf7d54dea](https://github.com/user-attachments/assets/3e0b49b2-d1b2-40db-9171-7e0233348d43)

  ### **Requirements**
1. Both the giver (e.g., NPC, player, or object) and the receiver (e.g., NPC or another entity) must have the **HToken System Component**.

  ### **Behavior Tree Integration**
1. Use the **CanTookToken** service in the Behavior Tree:
   - It checks if a token can be taken and updates a Blackboard boolean to `true`.
2. Combine with the **DoAction** task:
   - Assign the Blackboard boolean (e.g., `canDoAction`) to the task.
   - The task marks the token as taken and resets the boolean to `false` after completion.

  ### **Direct Token Management**
1. Use functions in the **HToken System Component**:
   - `Took Token From Target`: Takes a token from the target.
   - `Give Token To Target`: Gives a token to the target.

  ### **Managing Simultaneous Actions**
- Use tokens to limit how many NPCs or entities can perform a task at the same time.
- Adjust the number of tokens available to fine-tune task management.


# **3DPathfinding: Architecture, Basic Setup and Usage**

This plugin uses a **grid-based volume** for pathfinding and employs an advanced **A* algorithm** and **dynamic obstacle detection** system. It enables characters to navigate to their target in both flying and walking modes.

### **HVolume3D**: 
Defines the 3D grid space used for pathfinding and manages cell generation, division, and occupancy. It includes asynchronous grid updates triggered by moving actors with the DynamicObjectComponent, ensuring real-time responsiveness to environmental changes.

- **Draw Distance:** Distance used to determine how far from the player or target objects the debug grids should be drawn.
- **Draw Debug Grids from Player:** If enabled, the system will draw debug grids around the player based on the specified draw distance.
- **Target Objects:** A list of actors. Debug grids will be drawn around each of these objects based on the Draw Distance.

![volume](https://github.com/user-attachments/assets/b57a3671-9d01-4cd4-b261-46e5bbb11b5f)
![image](https://github.com/user-attachments/assets/8da09158-be23-46a0-98f4-b32b4e8ad559)

  
### **HPathCore**:
Processes pathfinding requests asynchronously using the A* algorithm. Automatically recalculates paths in response to dynamic obstacles and adjusts blocked target positions.

![core](https://github.com/user-attachments/assets/4c82a512-78ea-4f48-b69d-63c8cbec5e9d)

### **HMoveTo-MoveTo3DVolume**:
HMoveTo is an async node usable in both Blueprint and C++. It moves a character to a target location or actor using the 3D grid-based pathfinding system. The main execution pin fires immediately on activation, while OnSuccess and OnFailed notify the result. For Behavior Trees, the same logic is available via the MoveTo3DVolume task.

![Image](https://github.com/user-attachments/assets/42ca192d-a4d0-431d-b372-415c31c55bff)
![Image](https://github.com/user-attachments/assets/2d1168ac-cd7a-4082-8996-00180f38540a)
  
### **DynamicObjectComponent**:
Used to classify dynamic objects and allows them to mark grids they occupy as either full or empty. It automatically updates the pathfinding algorithm when objects move.

![component](https://github.com/user-attachments/assets/17d5948f-e075-4371-a704-0d91612a2f17)

- ### Dynamic Objects

Objects or actors with the DynamicObjectComponent affect the grids within the volume as they move, not only at their current location but also in the direction of their velocity, filling extra grids ahead of them. To configure a dynamic object, follow these steps:

1. Ensure the object has a **DynamicObjectComponent**.  ![component](https://github.com/user-attachments/assets/c80a66ed-f54f-4f14-94b0-9934fc70cf46)

2. Set **Mobility** to **Movable**.![mobilitychange](https://github.com/user-attachments/assets/d06e51f0-b66b-4cee-8c5f-0c556698cc62)
3. In **Project Settings > Collision**, create a **Trace Channel** named "Dynamicbject" with **Default Response** set to **Ignore**.![trace1](https://github.com/user-attachments/assets/4c5266c4-28d0-40d6-8732-cee44ca6da6b)
![traceignore](https://github.com/user-attachments/assets/8040e26c-9a9b-46c5-b054-f3d578cb4ef7)


4. In the object's **Collision Presets**, set the DinamicObject channel to **Block**.![blıock](https://github.com/user-attachments/assets/134e5587-b5d0-4d53-89dd-067ee7466b7f)

5. Enable **Generate Overlap Events** for the object.![generateoverlapevents](https://github.com/user-attachments/assets/5965b8d6-ddf0-420b-a411-05150fa115a5)


When configured, dynamic objects update grid status as they move. The pathfinding system adjusts routes in real-time based on these updates.


# **Blueprint/C++ Usage Examples**

- ### HAI Base Component:![aibase](https://github.com/user-attachments/assets/03bb5dd0-c482-40d8-9d74-f8ac236ebe58)
- The HAI Base Component is the core of NPC behavior, integrating seamlessly with AI Perception for sight, hearing, and damage detection. It supports DoAction events, allowing dynamic tasks and smooth behavior tree integration for flexible and adaptive NPC actions.
  ## HAI Base Component Events and Functions
 
  ![all haibase](https://github.com/user-attachments/assets/d651468d-e47a-48d9-aff8-f1d38791e862)   ![Ekran görüntüsü 2024-11-20 174008](https://github.com/user-attachments/assets/5d176721-4b58-4fc5-8472-87ce6a98172a)   ![ondoActionc++](https://github.com/user-attachments/assets/3cfc090a-1cb9-4fac-9338-7e766ba1b2d1)  ![Ekran görüntüsü 2024-11-20 174700](https://github.com/user-attachments/assets/c8335686-7144-40cb-890d-fa2db061a25a)
       
     - **!!! 1.On Do Action**: It is triggered when the NPC performs a specific action and carries an Action ID, which indicates the type or purpose of that action. Defined as a delegate in HAIBase, this triggering process can work with the DoAction task in the Behavior Tree or with a custom system you create.
          
     - **!!!! 2.Call On Action End**: Call On Action End works in conjunction with OnDoAction. It must be called at the end of the events triggered by OnDoAction to mark the action as complete. Additionally, it finalizes the currently running DoAction task in the Behavior Tree. The provided Success value determines whether the action was successful or not.
          
     - **!!!! 3.Bind Event to On Do Action (Assign On Do Action)**: It performs the same function as OnDoAction by responding to specific actions triggered by the NPC with an Action ID. However, the difference is that this node allows you to bind a custom event to the OnDoAction delegate. When OnDoAction is triggered, the assigned custom event is automatically executed, enabling you to define specific behaviors or additional logic for each action.
          
     - **4.Dead**: It simply kills the npc, cleans up any focus the npc has, returns any tokens the npc has taken from someone, and stops the behaviour tree.
          
     - **5.Stop Behavior Tree**: stops the behaviour tree
          
     - **6.Set Movement State Walk**: Sets the npc's walk speed
          
     - **7.Set Movement State Fly**: Sets the npc's fly speed
          
     - **8.GetPossessState**: Returns the OnPossessState of the NPC
          
     - **9.Set State Active**: Sets the NPC's OnPossessState to Active after the specified duration provided in the task.
          
     - **10.Set State Investigate**: Sets the NPC's OnPossessState to Investigate after the specified duration provided in the task.
          
     - **11.Set State Passive**: Sets the NPC's OnPossessState to Passive after the specified duration provided in the task.
      
   ## HAI Varaibles
      
  ![Image](https://github.com/user-attachments/assets/a7b1ca4b-8c43-405a-80d8-bc1972c25459)
      
     - **1.Behavior Tree**: The behavior tree asset assigned to the NPC.
  
     - **2.Volume Ref**: To use 3D Pathfinding you need to assign the proper HVolume3D for your NPC.

     - **3.Targets Tag**: A list of tags representing potential targets the NPC can detect. If left empty, the NPC detects all characters.

     - **4.Walk Speed**: The NPC's walking speed, used for ground movement.

     - **5.Run Speed**: The NPC's running speed, used for faster ground movement.

     - **6.Normal Fly Speed**: The NPC's default flying speed during regular movement.

     - **7.Fast Fly Speed**: The NPC's fast flying speed for high-speed aerial movement.

     - **8.Patrol Spline**: A spline component used to define the NPC's patrol path.
     
     - **9.Target Actor Key Name**: The blackboard key name used to store the current target actor detected by the AI. ⚠️ This key name must exactly match the name used in the Blackboard asset.
     
     - **10.Location Vector Key Name**: The blackboard key name used to store a point of interest (vector), such as where a noise was heard or damage was taken, or where the player was last seen. ⚠️ This key name must exactly match the name used in the Blackboard asset.
     
     - **11.Enum on Possess State Key Name**: The blackboard key name that represents the AI’s current behavior state (passive, investigate, active). ⚠️ This key name must exactly match the name used in the Blackboard asset.
     
     - **12.Bool Can Do Action Key Name**: The blackboard key name used to check whether the AI is currently allowed to perform an action (e.g., attack or interact). ⚠️ This key name must exactly match the name used in the Blackboard asset.
     
        ![blackboard](https://github.com/user-attachments/assets/dcf9ed70-e6dc-401c-8f28-71a12e456339)

     - **13.Open Sight**: Enables or disables the sight sense in the AI Perception component.

     - **14.Open Hear**: Enables or disables the hearing sense in the AI Perception component.

     - **15.Open Damage**: Enables or disables the damage sense in the AI Perception component.

     - **16.Dominant Sense**: The primary sense of the AI Perception component, typically used for prioritizing detection (e.g., sight).

     - **17.Sight Radius**: The maximum range within which the AI Perception's sight sense can detect targets.

     - **18.Lose Sight Radius**: The range at which the AI Perception's sight sense loses track of a target.

     - **19.Peripheral Vision Angle Degrees**: The AI Perception's field of view angle for detecting targets with sight.

     - **20.Max Age for Sight**: The maximum duration the AI Perception retains sight information about a target.

     - **21.Hearing Range**: The maximum range within which the AI Perception's hearing sense can detect sounds.

     - **22.Max Age Hear**: The maximum duration the AI Perception retains hearing information.

     - **23.Max Age Damage**: The maximum duration the AI Perception retains damage information.
 
  ## HVolume3D Functions:

  ![Image](https://github.com/user-attachments/assets/e3fc55aa-e5ed-43a6-928a-80c3d2237a80)
  ![Image](https://github.com/user-attachments/assets/2272db0e-b7f0-4246-9c4a-611792a591c6)

  ## HToken System:![token](https://github.com/user-attachments/assets/24ef2bf3-604f-4902-be53-fcb18d784fff)   
- The HToken System is used for prioritizing NPC actions with token-based logic. NPCs can take or give tokens to decide who performs an action, ensuring smooth and fair task execution.
- !!!! To receive a token from a target, both the target and the actor must have the HTokenSystem component
     - ### HToken System Component Functions
 
       ![functions](https://github.com/user-attachments/assets/f456656e-03a2-41f5-89c4-01bb8393fcba)   ![tokenc++](https://github.com/user-attachments/assets/cb45a7ce-bb78-4359-a582-c96b60da620e)
       
          - **1.Took Token from Target**: Request to take token from the target actor with the given amount of tokens and returns back whether the request was successful or not. This is used in the CanTookToken service.
            
          - **2.Give Token to Target**: Gives the token in the target actor entered in the entered amount. This is used in DoAction task if Token Tooked is true.
            
     - ### HToken System Component Varaibles
 
       ![varaible](https://github.com/user-attachments/assets/0519b55e-b7c2-4bea-83f9-d4faf7d54dea)
       
          - **1.Current Token**: The amount of tokens owned by the character who has this component
            
          - **2.Token Map**: Do not touch if not necessary!!!!. This is the TMap varibles that stores how many tokens these characters have received and from who.


![Ekran görüntüsü 2024-11-19 151958](https://github.com/user-attachments/assets/9aec9ff3-a641-4c8b-a138-bf87a6a5f47a)
![Ekran görüntüsü 2024-11-19 152520](https://github.com/user-attachments/assets/c697867e-8900-49b0-b660-fac3edc1655c)
  ## HAI Controller (with Crowd Following Component)
  - AI Controller manages NPC behavior with AI Perception for sight, hearing, and damage detection, while using Crowd Following for dynamic pathfinding and collision avoidance in crowded scenes. It also controls OnPossessState transitions for flexible behavior management.
  - You can adjust the values of the senses sight, hearing and damage in the HAI Base Component. And with it you can give different values to EVERY NPC created with the same class and the same aicontroller.


  ## Tasks:

![Ekran görüntüsü 2024-11-19 154736](https://github.com/user-attachments/assets/a2964214-900f-48ae-94e4-4765d30840f7)

   - **!!!!!!!! 1.DoAction**: The DoAction Task allows NPCs to perform specific actions dynamically using HAI Base Component's DoAction events. For token-based actions, the Token Tooked bool must be set to true, and the target actor (from whom the token will be taken) should be specified because, after the task is completed, this token will be returned to that target. Additionally, if the task depends on a blackboard bool value being true, it should be provided to ensure the task resets the bool to false upon completion.

   - **2.Set Focus**: Allows the NPC to focus on the given blackboard value, which can be either an actor or a vector.
   
   - **3.Clear Focus**: Clears the NPC's current focus and redirects its attention back to the game.
   
   - **4.Set Movement State**: Sets the NPC's speed to one of the provided movement states (Idle, Walking, Running, NormalFlying, FastFlying) based on the selected movement type (Walk or Fly).
   
   - **5.Find Rnadom Point On NavMesh**: Finds a random point within the specified radius on the NavMesh around the NPC and assigns it to the provided vector blackboard key as a location.
   
   - **6.Find Next Patrol Node**: Finds the next patrol location by retrieving the spline assigned to the NPC through the HAIBaseComponent and moving to the next node along the spline.
   
   - **7.Set State Passive**: Sets the NPC's OnPossessState to Passive after the specified duration provided in the task.

   - **8.Set State Investigate**: Sets the NPC's OnPossessState to Investigate after the specified duration provided in the task.

   - **9.Set State Active**: Sets the NPC's OnPossessState to Active after the specified duration provided in the task.
     

  ## Decorator & Service:

![Ekran görüntüsü 2024-11-19 161948](https://github.com/user-attachments/assets/af767b27-84e0-40e4-a4a4-ceebd6c4d73f)

   - **1.CanTookToken**: Checks if the specified token amount can be taken from the target actor, updating a boolean blackboard key. This value is inversely updated in the DoAction task.

   - **2.Has Patrol Route**: A decorator that verifies whether the NPC has a valid patrol route assigned through a spline. Ensures the NPC can follow a predefined path.
     
   - **3.Is In The Range**: Checks the distance between the NPC and the selected target actor or location. If the distance is within the specified range (e.g., 300 units), it allows the behavior tree to proceed with subsequent tasks or actions.
     
   - **4.Blackboard Value for "OnPossessState"**: Represents the current behavior state of the NPC (e.g., Passive, Active, Investigating). Guides task execution and decision-making processes in the behavior tree.
     
   - **5.Blackboard Value for "CanDoAction"**: Indicates whether the NPC is permitted to perform a specific action. This value must be true for the action to execute; otherwise, it is blocked.


  ## EQS:

![Ekran görüntüsü 2024-11-19 154930](https://github.com/user-attachments/assets/e48ed425-5a14-4ccf-ac2f-e448374f6cfb) ![Ekran görüntüsü 2024-11-19 155426](https://github.com/user-attachments/assets/b0a18cb1-44f2-449d-b25d-5a7537f0d395)

   - **HEnvQueryContext_TargetActor**: A custom EQS context that provides the target actor's location for queries, allowing the NPC (querier) to use this location as a reference in EQS evaluations.

   - **FindIdealRange_Example**: Finds the best position around the querier for optimal range based on visibility and distance to the target.

   - **Strafe_Example**: Generates positions around the target actor for strafing, ensuring effective and strategic movement.

  ## Behavior Tree & Blackboard:

**⚠️There will be 2 different behavior tree examples. One made for 3DPathfinding and one for default.⚠️**

 ![Image](https://github.com/user-attachments/assets/70ff6083-0975-455c-9842-91c35121473f)
![Image](https://github.com/user-attachments/assets/d9e61c52-06a6-4f46-8961-ca20d870f3aa)
![blackboard](https://github.com/user-attachments/assets/dcf9ed70-e6dc-401c-8f28-71a12e456339)
   - **targetActor**: Represents the target actor the NPC is focusing on or interacting with. This value is used to determine the NPC's target during specific tasks or actions.
   - **OnPossessState**: Represents the NPC's current behavior state, such as Passive, Active, or Investigating. Tasks are guided based on this state.
   - **pointOfInterest**: Represents the coordinates of a point the NPC is interested in or focusing on. This is typically the location of a target or an area to investigate.
   - **canDoAction**: Indicates whether the NPC is allowed to perform a specific action. If set to true, the NPC can execute the action; if false, the action is canceled or blocked.

