// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerData.h"

bool PlayerData::playerData_InstanceFlag = false;
PlayerData* PlayerData::playerData_Inst = NULL;

PlayerData::PlayerData()
{
}

PlayerData* PlayerData::GetPlayerData() {
	if (!playerData_Inst) {
		playerData_Inst = new PlayerData();
		playerData_InstanceFlag = true;
	}
	return playerData_Inst;
}
