#ifndef POKEHEARTGOLD_BATTLE_COMMAND_H
#define POKEHEARTGOLD_BATTLE_COMMAND_H

#include "battle/battle.h"
#include "battle/battle_system.h"

// Realistically these should all be static in battle_command.c, but there's an array in battle_command_data.s that needs these functions so we have to keep them public until that can be decompiled, and at the same time we don't want the compiler to allow for functions without declarations, hence the existance of this header file

BOOL RunBattleScript(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayEncounterAnimation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetPokemonEncounter(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PokemonSlideIn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PokemonSendOut(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RecallPokemon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_DeletePokemon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetTrainerEncounter(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ThrowPokeball(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrainerSlideOut(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrainerSlideIn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_BackgroundSlideIn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_HealthbarSlideIn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_HealthbarSlideInDelay(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_HealthbarSlideOut(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Wait(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcDamage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcDamageRaw(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintAttackMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintGlobalMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintBufferedMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_BufferMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_BufferLocalMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayMoveAnimation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayMoveAnimationOnMons(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_FlickerMon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateHealthbarValue(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateHealthbar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryFaintMon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayFaintAnimation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitButtonABTime(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlaySound(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CompareVarToValue(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CompareMonDataToValue(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_FadeOutBattle(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GoToSubscript(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GoToEffectScript(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GoToMoveScript(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcCrit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcExpGain(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_StartGetExpTask(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitGetExpTask(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitGetExpTaskLoop(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ShowParty(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitMonSelection(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SwitchAndUpdateMon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GoToIfAnySwitches(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_StartCatchMonTask(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitCatchMonTask(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetMultiHit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ChangeStatStage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateMonData(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ClearVolatileStatus(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ToggleVanish(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckAbility(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Random(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateVar2(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UpdateMonDataFromVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Goto(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Call(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CallFromVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetMirrorMove(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ResetAllStatChanges(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_LockMoveChoice(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UnlockMoveChoice(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetHealthbarStatus(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintTrainerMessage(BattleSystem *bsys, BattleContext *ctx);
u32 CalcPrizeMoney(BattleSystem *bsys, BattleContext *ctx, int trainerIndex);
BOOL BtlCmd_PayPrizeMoney(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayBattleAnimation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayBattleAnimationOnMons(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayBattleAnimationFromVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintRecallMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintSendOutMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintEncounterMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintFirstSendOutMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintBufferedTrainerMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryConversion(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CompareVarToVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CompareMonDataToVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_AddPayDayMoney(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryLightScreen(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryReflect(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryMist(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryOHKOMove(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_DivideVarByValue(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_DivideVarByVar(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryMimic(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Metronome(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryDisable(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Counter(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_MirrorCoat(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryEncore(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryConversion2(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySketch(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySleepTalk(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcFlailPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySpite(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryPartyStatusRefresh(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryStealItem(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryProtection(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySubstitute(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryWhirlwind(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Transform(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySpikes(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckSpikes(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryPerishSong(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetTurnOrderBySpeed(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GoToIfValidMon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_EndOfTurnWeatherEffect(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcRolloutPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcFuryCutterPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryAttract(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySafeguard(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_Present(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcMagnitudePower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryReplaceFaintedMon(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RapidSpin(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WeatherHPRecovery(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcHiddenPowerParams(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CopyStatStages(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryFutureSight(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckMoveHit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryTeleport(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_BeatUp(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_FollowMe(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryHelpingHand(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySwapItems(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryWish(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryAssist(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySetMagicCoat(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_MagicCoat(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcRevengeDamageMul(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryBreakScreens(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryYawn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryKnockOff(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcHPFalloffPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryImprison(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryGrudge(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySnatch(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcWeightBasedPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcWeatherBallParams(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryPursuit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ApplyTypeEffectiveness(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_IfTurnFlag(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetTurnFlag(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcGyroBallPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryMetalBurst(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcPaybackPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcTrumpCardPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcWringOutPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryMeFirst(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryCopycat(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcPunishmentPower(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrySuckerPunch(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckSideCondition(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryFeint(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryPyschoShift(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryLastResort(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryToxicSpikes(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckToxicSpikes(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckIgnorableAbility(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_IfSameSide(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GenerateEndOfBattleItem(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TrickRoom(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_IfMovedThisTurn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckItemHoldEffect(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetItemHoldEffect(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetItemEffectParam(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryCamouflage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetTerrainMove(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetTerrainSecondaryEffect(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CalcNaturalGiftParams(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryPluck(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryFling(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_YesNoMenu(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitYesNoResult(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ChoosePokemonMenu(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitPokemonMenuResult(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetLinkBattleResult(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckStealthRock(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckEffectActivation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckChatterActivation(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_GetCurrentMoveData(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetMosaic(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ChangeForm(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetBattleBackground(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_UseBagItem(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryEscape(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ShowBattleStartPartyGauge(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_HideBattleStartPartyGauge(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_ShowPartyGauge(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_HidePartyGauge(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_LoadPartyGaugeGraphics(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_FreePartyGaugeGraphics(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_IncrementGameStat(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RestoreSprite(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TriggerAbilityOnHit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SpriteToOAM(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_OAMToSprite(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckWhiteout(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_BoostRandomStatBy2(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RemoveItem(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryRecycle(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckItemHoldEffectOnHit(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintBattleResultMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintEscapeMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PrintForfeitMessage(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckHoldOnWith1HP(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_TryRestoreStatusOnSwitch(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckSubstitute(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckIgnoreWeather(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_SetRandomTarget(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckItemHoldEffectOnUTurn(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RefreshSprite(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayMoveHitSound(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_PlayBGM(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckSafariGameDone(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_WaitTime(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_CheckCurMoveIsType(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_LoadArchivedMonData(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_RefreshMonData(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_222(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_223(BattleSystem *bsys, BattleContext *ctx);
BOOL BtlCmd_EndScript(BattleSystem *bsys, BattleContext *ctx);
int BattleScriptReadWord(BattleContext *ctx);
void InitBattleMsgData(BattleContext *ctx, BattleMessageData *msgdata);
void InitBattleMsg(BattleSystem *bsys, BattleContext *ctx, BattleMessageData *msgdata, BattleMessage *msg);
void UpdateFrienshipFainted(BattleSystem *bsys, BattleContext *ctx, int battlerId);
int GetMoveMessageNo(BattleContext *ctx, int move);
void BattleScript_CalcEffortValues(Party *party, int slot, u32 species, u32 form);
void ov12_02248228(BattleSystem *bsys, GetterWork *data, Pokemon *mon);
void ov12_022484D4(BattleSystem *bsys, GetterWork *data);

#endif
