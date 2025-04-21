
#include "HTokenSystemComponent.h"
#include "GameFramework/Actor.h" 
#include "Engine/World.h"      

bool UHTokenSystemComponent::TookTokenFromTarget(int amount, AActor* targetActor)
{
	UHTokenSystemComponent* targetTokenSystem = targetActor->FindComponentByClass<UHTokenSystemComponent>();
	if(targetTokenSystem && targetTokenSystem->TookToken(amount))
	{
		currentToken += amount;
		TokenMap.Add(targetActor, amount);
		return true;
	}
	return false;
}

void UHTokenSystemComponent::GiveTokenToTarget(int amount, AActor* targetActor)
{
	UHTokenSystemComponent* targetTokenSystem = targetActor->FindComponentByClass<UHTokenSystemComponent>();
	if (targetTokenSystem)
	{
		targetTokenSystem->GiveToken(amount);
		currentToken -= amount;
		TokenMap.Remove(targetActor);
	}
}

bool UHTokenSystemComponent::TookToken(int amount)
{
	if(currentToken >= amount)
	{
		currentToken -= amount;
		return true;
	}
	return false;
}

void UHTokenSystemComponent::GiveToken(int amount)
{
	currentToken += amount;
}
