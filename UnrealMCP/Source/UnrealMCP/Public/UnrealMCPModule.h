#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class UUnrealMCPBridge;

class FUnrealMCPModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static inline FUnrealMCPModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FUnrealMCPModule>("UnrealMCP");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("UnrealMCP");
	}

private:
	UPROPERTY()
	UUnrealMCPBridge* MCPBridge;
};