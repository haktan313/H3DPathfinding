// Copyright Epic Games, Inc. All Rights Reserved.

#include "H3DPathfinding.h"

#define LOCTEXT_NAMESPACE "FH3DPathfindingModule"

void FH3DPathfindingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FH3DPathfindingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FH3DPathfindingModule, H3DPathfinding)