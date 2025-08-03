#include "UnrealMCPModule.h"
#include "UnrealMCPBridge.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FUnrealMCPModule"

void FUnrealMCPModule::StartupModule()
{
	UE_LOG(LogTemp, Display, TEXT("Unreal MCP Module has started"));

	MCPBridge = NewObject<UUnrealMCPBridge>();
	MCPBridge->AddToRoot(); // Prevent garbage collection
	MCPBridge->StartServer();
}

void FUnrealMCPModule::ShutdownModule()
{
	UE_LOG(LogTemp, Display, TEXT("Unreal MCP Module has shut down"));

	if (MCPBridge)
	{
		MCPBridge->StopServer();
		MCPBridge->RemoveFromRoot();
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUnrealMCPModule, UnrealMCP)