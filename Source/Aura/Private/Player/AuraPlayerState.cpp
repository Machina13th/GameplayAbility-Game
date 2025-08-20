// copyright these nuts


#include "Player/AuraPlayerState.h"

#include "AttributeSet.h"
#include "NavigationSystemTypes.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"

AAuraPlayerState::AAuraPlayerState()
{
	SetNetUpdateFrequency(100.f);
	
	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");

	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
