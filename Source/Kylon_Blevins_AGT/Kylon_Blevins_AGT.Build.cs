// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Kylon_Blevins_AGT : ModuleRules
{
	public Kylon_Blevins_AGT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
