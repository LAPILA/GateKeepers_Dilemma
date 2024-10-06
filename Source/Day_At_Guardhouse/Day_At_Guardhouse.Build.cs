// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Day_At_Guardhouse : ModuleRules
{
	public Day_At_Guardhouse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
	}
}
