// Fill out your copyright notice in the Description page of Project Settings.


#include "WebPage.h"


//TODO: add browser
// make it fill whole widget
// BindUObject(TEXT("UWebPageJSBindedObject"), UWebPageJSBindedObject, true);

UWebPage::UWebPage(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Display, TEXT("UWebPage::UWebPage"));

}


void UWebPage::NativeConstruct()
{
	UE_LOG(LogTemp, Display, TEXT("UWebPage::NativeConstruct"));
	Super::NativeConstruct();
}
