#pragma once
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class GROWWINGS_API PlayerDatar
{
private:
	PlayerData();
	static bool playerData_InstanceFlag;
	static PlayerDatar* playerData_Inst;

	//Coin
	unsigned long long wingsCoin;
	unsigned long long ballonCoin;

	//Player Info
	FString name;
	int outLine;
	int icon;

	//Player Skill
	unsigned long HP;
	unsigned int Mp;
	unsigned long power;
	double Critical;
	double Critical_Plus_Damage;

	//Lv
	unsigned int powerLv;
	unsigned int HPLv;
	unsigned int CriticalLv;
	unsigned int Critical_Plus_Damage_Lv;

public:
	UFUNCTION(BlueprintCallable, EditAnywhere)
		static PlayerData* GetPlayerData();

	virtual ~PlayerDatar() {
		playerData_InstanceFlag = false;
	};

};
