//
// Auto-generated file from extract_vmcall_handler_table.py
//
typedef struct { const CHAR *name; UINT16 callcode; UINT16 isRep; UINT16 inputSize; UINT16 outputSize; } HYPERCALL_ENTRY;

HYPERCALL_ENTRY HypercallEntries[] = {
{"HvCallUnmapDevicePages"                , 0x0, 0, 0x0, 0x0},
{"HvSwitchVirtualAddressSpace"           , 0x1, 0, 0x8, 0x0},
{"HvFlushVirtualAddressSpace"            , 0x2, 0, 0x18, 0x0},
{"HvFlushVirtualAddressList"             , 0x3, 1, 0x18, 0x0},
{"HvGetLogicalProcessorRunTime"          , 0x4, 0, 0x8, 0x20},
{"HvCallUnmapDevicePages"                , 0x5, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x6, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x7, 0, 0x0, 0x0},
{"HvNotifyLongSpinWait"                  , 0x8, 0, 0x8, 0x0},
{"sub_FFFFF800002BD6A0"                  , 0x9, 0, 0x8, 0x0},
{"sub_FFFFF800002BDB10"                  , 0xa, 0, 0x10, 0x0},
{"HvCallSendSyntheticClusterIpi"         , 0xb, 0, 0x10, 0x0},
{"HvCallModifyVtlProtectionMask"         , 0xc, 1, 0x10, 0x0},
{"HvCallEnablePartitionVtl"              , 0xd, 0, 0x10, 0x0},
{"HvCallDisablePartitionVtl"             , 0xe, 0, 0x10, 0x0},
{"HvCallEnableVpVtl"                     , 0xf, 0, 0xf0, 0x0},
{"HvCallDisableVpVtl"                    , 0x10, 0, 0x10, 0x0},
{"HvCallVtlCall"                         , 0x11, 4, 0x0, 0x0},
{"HvCallVtlReturn"                       , 0x12, 4, 0x0, 0x0},
{"HvCallFlushVirtualAddressSpaceEx"      , 0x13, 2, 0x20, 0x0},
{"HvCallFlushVirtualAddressListEx"       , 0x14, 3, 0x20, 0x0},
{"HvCallSendSyntheticClusterIpiEx"       , 0x15, 2, 0x18, 0x0},
{"HvCallUnmapDevicePages"                , 0x16, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x17, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x18, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x19, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1a, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1b, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1c, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1d, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1e, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x1f, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x20, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x21, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x22, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x23, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x24, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x25, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x26, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x27, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x28, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x29, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2a, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2b, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2c, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2d, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2e, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x2f, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x30, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x31, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x32, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x33, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x34, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x35, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x36, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x37, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x38, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x39, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3a, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3b, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3c, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3d, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3e, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x3f, 0, 0x0, 0x0},
{"HvCreatePartition"                     , 0x40, 0, 0x28, 0x8},
{"HvInitializePartition"                 , 0x41, 0, 0x8, 0x0},
{"HvFinalizePartition"                   , 0x42, 0, 0x8, 0x0},
{"HvDeletePartition"                     , 0x43, 0, 0x8, 0x0},
{"HvGetPartitionProperty"                , 0x44, 0, 0x10, 0x8},
{"HvSetPartitionProperty"                , 0x45, 0, 0x18, 0x0},
{"HvGetPartitionId"                      , 0x46, 0, 0x0, 0x8},
{"HvGetNextChildPartition"               , 0x47, 0, 0x10, 0x8},
{"HvDepositMemory"                       , 0x48, 1, 0x8, 0x0},
{"HvWithdrawMemory"                      , 0x49, 1, 0x10, 0x0},
{"HvGetMemoryBalance"                    , 0x4a, 0, 0x10, 0x10},
{"HvMapGpaPages"                         , 0x4b, 1, 0x18, 0x0},
{"HvUnmapGpaPages"                       , 0x4c, 1, 0x10, 0x0},
{"HvInstallIntercept"                    , 0x4d, 0, 0x18, 0x0},
{"HvCreateVp"                            , 0x4e, 0, 0x20, 0x0},
{"HvDeleteVp"                            , 0x4f, 0, 0x10, 0x0},
{"HvGetVpRegisters"                      , 0x50, 1, 0x10, 0x0},
{"HvSetVpRegisters"                      , 0x51, 1, 0x10, 0x0},
{"HvTranslateVirtualAddress"             , 0x52, 0, 0x20, 0x10},
{"HvReadGpa"                             , 0x53, 0, 0x20, 0x18},
{"HvWriteGpa"                            , 0x54, 0, 0x30, 0x8},
{"Deprecated"                            , 0x55, 0, 0x20, 0x0},
{"HvClearVirtualInterrupt"               , 0x56, 0, 0x8, 0x0},
{"sub_FFFFF800002BE0C0"                  , 0x57, 0, 0x38, 0x0},
{"HvDeletePort"                          , 0x58, 0, 0x10, 0x0},
{"HvConnectPort"                         , 0x59, 0, 0x38, 0x0},
{"HvGetPortProperty"                     , 0x5a, 0, 0x18, 0x8},
{"HvDisconnectPort"                      , 0x5b, 0, 0x10, 0x0},
{"HvPostMessage"                         , 0x5c, 0, 0x100, 0x0},
{"HvSignalEvent"                         , 0x5d, 0, 0x8, 0x0},
{"HvSavePartitionState"                  , 0x5e, 0, 0x10, 0xff8},
{"HvRestorePartitionState"               , 0x5f, 0, 0x1000, 0x8},
{"HvInitializeEventLogBufferGroup"       , 0x60, 0, 0x20, 0x0},
{"HvFinalizeEventLogBufferGroup"         , 0x61, 0, 0x8, 0x0},
{"HvCreateEventLogBuffer"                , 0x62, 0, 0x10, 0x0},
{"HvDeleteEventLogBuffer"                , 0x63, 0, 0x8, 0x0},
{"HvMapEventLogBuffer"                   , 0x64, 0, 0x8, 0x1000},
{"HvUnmapEventLogBuffer"                 , 0x65, 0, 0x8, 0x0},
{"HvSetEventLogGroupSources"             , 0x66, 0, 0x220, 0x0},
{"HvReleaseEventLogBuffer"               , 0x67, 0, 0x8, 0x0},
{"HvFlushEventLogBuffer"                 , 0x68, 0, 0x8, 0x0},
{"HvPostDebugData"                       , 0x69, 0, 0x1000, 0x8},
{"HvRetrieveDebugData"                   , 0x6a, 0, 0x10, 0x1000},
{"HvResetDebugSession"                   , 0x6b, 0, 0x8, 0x18},
{"HvMapStatsPage"                        , 0x6c, 0, 0x18, 0x8},
{"HvUnmapStatsPage"                      , 0x6d, 0, 0x18, 0x0},
{"HvCallMapSparseGpaPages"               , 0x6e, 1, 0x10, 0x0},
{"HvCallSetSystemProperty"               , 0x6f, 0, 0x28, 0x0},
{"HvCallSetPortProperty"                 , 0x70, 0, 0x20, 0x0},
{"HvCallUnmapDevicePages"                , 0x71, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x72, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x73, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x74, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x75, 0, 0x0, 0x0},
{"HvCallAddLogicalProcessor"             , 0x76, 0, 0x18, 0x38},
{"HvCallRemoveLogicalProcessor"          , 0x77, 0, 0x10, 0x0},
{"HvCallQueryNumaDistance"               , 0x78, 0, 0x8, 0x8},
{"HvCallSetLogicalProcessorProperty"     , 0x79, 0, 0xcc0, 0x0},
{"HvCallGetLogicalProcessorProperty"     , 0x7a, 0, 0x8, 0xcb8},
{"HvCallGetSystemProperty"               , 0x7b, 0, 0x8, 0x408},
{"HvCallMapDeviceInterrupt"              , 0x7c, 2, 0x38, 0x38},
{"HvCallUnmapDeviceInterrupt"            , 0x7d, 0, 0x20, 0x0},
{"HvCallRetargetDeviceInterrupt"         , 0x7e, 2, 0x38, 0x0},
{"Reserved0x7f"                          , 0x7f, 2, 0x38, 0x10},
{"HvCallUnmapDevicePages"                , 0x80, 0, 0x0, 0x0},
{"HvCallUnmapDevicePages"                , 0x81, 0, 0x0, 0x0},
{"HvCallAttachDevice"                    , 0x82, 0, 0x20, 0x0},
{"HvCallDetachDevice"                    , 0x83, 0, 0x10, 0x0},
{"HvCallNotifyStandbyTransition"         , 0x84, 0, 0x8, 0x0},
{"HvCallPrepareForSleep"                 , 0x85, 0, 0x8, 0x0},
{"HvCallPrepareForHibernate"             , 0x86, 0, 0x58, 0x20},
{"HvCallNotifyPartitionEvent"            , 0x87, 0, 0x8, 0x0},
{"HvCallGetLogicalProcessorRegisters"    , 0x88, 1, 0x0, 0x0},
{"HvCallSetLogicalProcessorRegisters"    , 0x89, 1, 0x0, 0x0},
{"HvCallQueryAssociatedLpsforMca"        , 0x8a, 0, 0x8, 0x808},
{"HvCallNotifyRingEmpty"                 , 0x8b, 0, 0x8, 0x0},
{"HvCallInjectSyntheticMachineCheck"     , 0x8c, 0, 0x30, 0x0},
{"HvCallScrubPartition"                  , 0x8d, 0, 0x8, 0x0},
{"HvCallCollectLivedump"                 , 0x8e, 0, 0x20, 0x10},
{"HvCallDisableHypervisor"               , 0x8f, 0, 0x18, 0x0},
{"HvCallModifySparseGpaPages"            , 0x90, 1, 0x10, 0x0},
{"HvCallRegisterInterceptResult"         , 0x91, 0, 0x40, 0x0},
{"HvCallUnregisterInterceptResult"       , 0x92, 0, 0x20, 0x0},
{"HvCallUnmapDevicePages"                , 0x93, 0, 0x0, 0x0},
{"HvCallAssertVirtualInterrupt"          , 0x94, 0, 0x20, 0x0},
{"HvCallCreatePort"                      , 0x95, 0, 0x38, 0x0},
{"HvCallConnectPort"                     , 0x96, 0, 0x38, 0x0},
{"HvCallGetSpaPageList"                  , 0x97, 0, 0x18, 0x1000},
{"HvCallUnmapDevicePages"                , 0x98, 0, 0x0, 0x0},
{"HvCallStartVirtualProcessor"           , 0x99, 0, 0xf0, 0x0},
{"HvCallGetVpIndexFromApicId"            , 0x9a, 1, 0x10, 0x0},
{"sub_FFFFF800002C0440"                  , 0x9b, 0, 0x8, 0x188},
{"sub_FFFFF800002C0840"                  , 0x9c, 0, 0x198, 0x0},
{"sub_FFFFF800002C1680"                  , 0x9d, 0, 0x8, 0x0},
{"sub_FFFFF800002C1720"                  , 0x9e, 0, 0x8, 0x0},
{"sub_FFFFF800002C1C30"                  , 0x9f, 0, 0x10, 0x0},
{"sub_FFFFF800002C1950"                  , 0xa0, 0, 0x10, 0x0},
{"sub_FFFFF800002C18D0"                  , 0xa1, 1, 0x10, 0x0},
{"sub_FFFFF800002C15B0"                  , 0xa2, 0, 0x10, 0x0},
{"sub_FFFFF800002C17E0"                  , 0xa3, 0, 0x8, 0x0},
{"sub_FFFFF800002C1880"                  , 0xa4, 0, 0x8, 0x0},
{"sub_FFFFF800002C1830"                  , 0xa5, 0, 0x8, 0x0},
{"sub_FFFFF800002C1370"                  , 0xa6, 1, 0x0, 0x0},
{"sub_FFFFF800002C1610"                  , 0xa7, 0, 0x20, 0x0},
{"sub_FFFFF800002C16D0"                  , 0xa8, 0, 0x8, 0x0},
{"sub_FFFFF800002C1B90"                  , 0xa9, 2, 0x8, 0x0},
{"sub_FFFFF800002C19B0"                  , 0xaa, 0, 0x10, 0x10},
{"sub_FFFFF800002C1C80"                  , 0xab, 2, 0x10, 0x0},
{"sub_FFFFF800002236E0"                  , 0xac, 0, 0x20, 0x40},
{"sub_FFFFF800002BF050"                  , 0xad, 0, 0x18, 0x8},
{"sub_FFFFF800002BCE10"                  , 0xae, 1, 0x10, 0x0},
{"HvCallFlushGuestPhysicalAddressSpace"  , 0xaf, 0, 0x10, 0x0},
{"HvCallFlushGuestPhysicalAddressList"   , 0xb0, 1, 0x10, 0x0},
{"sub_FFFFF800002BC4E0"                  , 0xb1, 0, 0x10, 0x0},
{"sub_FFFFF800002C14A0"                  , 0xb2, 0, 0x18, 0x0},
{"sub_FFFFF800002BC760"                  , 0xb3, 1, 0x20, 0x0},
{"sub_FFFFF800002BD050"                  , 0xb4, 1, 0x18, 0x0},
{"sub_FFFFF800002BD3A0"                  , 0xb5, 0, 0x40, 0x8},
{"sub_FFFFF800002BD3E0"                  , 0xb6, 0, 0x8, 0x0},
{"sub_FFFFF800002BD490"                  , 0xb7, 0, 0x10, 0x8},
{"sub_FFFFF800002BD7C0"                  , 0xb8, 0, 0x18, 0x0},
{"sub_FFFFF800002BD450"                  , 0xb9, 0, 0x8, 0x48},
{"sub_FFFFF800002BD5A0"                  , 0xba, 0, 0x8, 0x8},
{"sub_FFFFF800002BD5E0"                  , 0xbb, 0, 0x10, 0x8},
{"sub_FFFFF800002BC480"                  , 0xbc, 0, 0x10, 0x8}
};
