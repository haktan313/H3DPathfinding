
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HTokenSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class H3DPATHAIPRO_API UHTokenSystemComponent : public UActorComponent
{
	GENERATED_BODY()
	
	bool TookToken(int amount);
	void GiveToken(int amount);

public:
	UFUNCTION(BlueprintCallable, Category = "HToken")
	bool TookTokenFromTarget(int amount, AActor* targetActor);
	UFUNCTION(BlueprintCallable, Category = "HToken")
	void GiveTokenToTarget(int amount, AActor* targetActor);
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HToken")
	int currentToken = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HToken")
	TMap<AActor*, int> TokenMap;
		
};
