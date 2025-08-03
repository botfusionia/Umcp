using UnrealBuildTool;

public class UnrealMCP : ModuleRules
{
    public UnrealMCP(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd", "PythonScriptPlugin" });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Projects",
                "InputCore",
                "ToolMenus",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Json",
                "JsonUtilities",
                "AssetTools",
                "EditorScriptingUtilities",
                "UMG",
                "UMGEditor",
                "Sockets",
                "Networking",
                "BlueprintGraph",
                "KismetCompiler",
                "GraphEditor",
                "PropertyEditor"
            }
        );
    }
}