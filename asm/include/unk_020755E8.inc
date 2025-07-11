#include <nitro/fs/overlay.h>
#pragma once
.public TextFlags_SetCanABSpeedUpPrint
.public TextFlags_SetCanTouchSpeedUpPrint
.public FontID_Alloc
.public FontID_Release
.public PaletteData_Init
.public PaletteData_Free
.public PaletteData_AllocBuffers
.public PaletteData_FreeBuffers
.public PaletteData_LoadNarc
.public PaletteData_BeginPaletteFade
.public PaletteData_PushTransparentBuffers
.public PaletteData_GetSelectedBuffersBitmask
.public PaletteData_SetAutoTransparent
.public sub_02005D10
.public StopBGM
.public PlaySE
.public GF_IsAnySEPlaying
.public PlayCry
.public IsCryFinished
.public PlayFanfare
.public IsFanfarePlaying
.public OverlayManager_New
.public OverlayManager_Delete
.public OverlayManager_Run
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadCharData
.public GfGfxLoader_LoadScrnData
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public PokepicManager_Create
.public PokepicManager_DrawAll
.public PokepicManager_Delete
.public Pokepic_StartAnim
.public Pokepic_SetAnimScript
.public Pokepic_IsAnimFinished
.public PokepicManager_CreatePokepic
.public Pokepic_SetAttr
.public Pokepic_GetAttr
.public Pokepic_AddAttr
.public Pokepic_StartPaletteFade
.public Pokepic_StartPaletteFadeAll
.public Pokepic_ScheduleReloadFromNarc
.public PokepicManager_HandleLoadImgAndOrPltt
.public NewMsgDataFromNarc
.public DestroyMsgData
.public NewString_ReadMsgData
.public ReadMsgData_ExpandPlaceholders
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferBoxMonSpeciesName
.public BufferBoxMonNickname
.public BufferMoveName
.public StringExpandPlaceholders
.public SpriteSystem_Alloc
.public SpriteManager_New
.public SpriteSystem_Init
.public SpriteSystem_InitSprites
.public SpriteSystem_DrawSprites
.public SpriteSystem_TransferOam
.public SpriteSystem_Free
.public SpriteSystem_InitManagerWithCapacities
.public SpriteSystem_LoadCharResObjFromOpenNarc
.public SpriteSystem_LoadPlttResObjFromOpenNarc
.public SpriteSystem_LoadCellResObjFromOpenNarc
.public SpriteSystem_LoadAnimResObjFromOpenNarc
.public SpriteSystem_NewSprite
.public SpriteSystem_FreeResourcesAndManager
.public Sprite_DeleteAndFreeResources
.public ManagedSprite_SetAnim
.public ManagedSprite_GetActiveAnim
.public ManagedSprite_SetAnimateFlag
.public ManagedSprite_IsAnimated
.public ManagedSprite_SetDrawFlag
.public ManagedSprite_SetPositionXY
.public SysTask_CreateOnMainQueue
.public SysTask_Destroy
.public sub_0200E398
.public sub_0200E3D8
.public sub_0200E640
.public DrawFrameAndWindow2
.public sub_0200EB80
.public SetMasterBrightnessNeutral
.public sub_0200FBF4
.public sub_020163E0
.public sub_0201649C
.public sub_020164C4
.public sub_02016EDC
.public sub_02016F2C
.public sub_02017068
.public Main_SetVBlankIntrCB
.public AllocFromHeap
.public Heap_Free
.public GF_ExpHeap_FndGetTotalFreeSize
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public ToggleBgLayer
.public BgClearTilemapBufferAndCommit
.public AllocWindows
.public AddWindowParameterized
.public RemoveWindow
.public WindowArray_Delete
.public CopyWindowToVram
.public FillWindowPixelBuffer
.public DoScheduledBgGpuUpdates
.public TextPrinterCheckActive
.public AddTextPrinterParameterized
.public AddTextPrinterParameterizedWithColor
.public GF_RunVramTransferTasks
.public GfGfx_SetBanks
.public GfGfx_DisableEngineAPlanes
.public GfGfx_EngineATogglePlanes
.public GfGfx_EngineBTogglePlanes
.public GfGfx_BothDispOn
.public GfGfx_SwapDisplay
.public TouchscreenHitbox_FindRectAtTouchNew
.public GF_AssertFail
.public String_New
.public String_Delete
.public RequestSwap3DBuffers
.public GetMainBgPlttAddr
.public sub_02026E8C
.public GetSubBgPlttAddr
.public sub_02026E9C
.public GF_3DVramMan_Delete
.public Pokedex_SetMonCaughtFlag
.public Options_GetTextFrameDelay
.public Options_GetFrame
.public Mail_New
.public GameStats_Inc
.public GameStats_AddScore
.public sub_0203A880
.public AllocMonZeroed
.public CalcMonLevelAndStats
.public GetMonData
.public SetMonData
.public GetPokemonSpriteCharAndPlttNarcIds
.public Mon_GetBoxMon
.public MonSetMoveInSlot
.public MonTryLearnMoveOnLevelUp
.public CopyPokemonToPokemon
.public UpdateMonAbility
.public NARC_ReadPokepicAnimScript
.public sub_0207294C
.public sub_020729A4
.public Party_AddMon
.public Party_GetMaxCount
.public Party_GetCount
.public sub_02075A7C
.public sub_02075D3C
.public sub_02075D4C
.public sub_020773AC
.public sub_020773D4
.public sub_02077400
.public sub_020774A0
.public sub_020774E0
.public sub_02077604
.public sub_02077634
.public sub_02077650
.public sub_02077664
.public Bag_TakeItem
.public Bag_GetQuantity
.public sub_02089D40
.public MIi_CpuClear16
.public MIi_CpuClear32
.public MIi_CpuClearFast
.public gOverlayTemplate_PokemonSummary
.public gSystem
.public OS_IRQTable
