// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NGX_Unreal : ModuleRules
{
	public NGX_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
