/* Copyright (C) 2014-2018 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2019-07-21
// KLL Emitter:        kiibohd
// KLL Version:        BETA 0.5c.f42eca6a53c84bcd093a0e12149789db4f14f98c - 2018-04-08 20:48:41 -0700
// KLL Git Changes:    None
// Compiler arguments:
//      /srv/KiiConf/controller/kll/kll
//    --kiibohd-debug
//    --config
//      /srv/KiiConf/controller/Scan/Devices/ISSILed/capabilities.kll
//      /srv/KiiConf/controller/Scan/Devices/MatrixARMPeriodic/capabilities.kll
//      /srv/KiiConf/controller/Macro/PartialMap/capabilities.kll
//      /srv/KiiConf/controller/Macro/PixelMap/capabilities.kll
//      /srv/KiiConf/controller/Output/HID-IO/capabilities.kll
//      /srv/KiiConf/controller/Output/USB/capabilities.kll
//      /srv/KiiConf/controller/Debug/latency/capabilities.kll
//    --base
//      /srv/KiiConf/controller/Scan/WhiteFox/scancode_map.kll
//      /srv/KiiConf/controller/Scan/WhiteFox/scancode_map.truefox.kll
//    --default
//      /srv/KiiConf/controller/kll/layouts/stdFuncMap.kll
//      WhiteFox-TrueFox-0.kll
//    --partial
//      /srv/KiiConf/controller/kll/layouts/stdFuncMap.kll
//      WhiteFox-TrueFox-1.kll
//    --emitter
//      kiibohd
//    --def-template
//      /srv/KiiConf/controller/kll/templates/kiibohdDefs.h
//    --map-template
//      /srv/KiiConf/controller/kll/templates/kiibohdKeymap.h
//    --pixel-template
//      /srv/KiiConf/controller/kll/templates/kiibohdPixelmap.c
//    --def-output
//      kll_defs.h
//    --map-output
//      generatedKeymap.h
//    --pixel-output
//      generatedPixelmap.c
//    --preprocessor-tmp-path
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll
//
// - Configuration File -
//    ISSILedCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Scan_Devices_ISSILed@['capabilities']_processed.kll
//    MatrixARMPeriodicCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll
//    PartialMapCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Macro_PartialMap@['capabilities']_processed.kll
//    PixelMapCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Macro_PixelMap@['capabilities']_processed.kll
//    HID-IOCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Output_HID-IO@['capabilities']_processed.kll
//    USBCapabilities
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Output_USB@['capabilities']_processed.kll
//    latency
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Debug_latency@['capabilities']_processed.kll
// - Generic Files -
// - Base Layer -
//    WhiteFox
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Scan_WhiteFox@['scancode_map']_processed.kll
//    TrueFox
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_Scan_WhiteFox@['scancode_map', 'truefox']_processed.kll
// - Default Layer -
//    stdFuncMap
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_kll_layouts@['stdFuncMap']_processed.kll
//    WhiteFox
//      /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/@['WhiteFox-TrueFox-0']_processed.kll
// - Partial Layers -
//    Layer 1
//     stdFuncMap
//       /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/_srv_KiiConf_controller_kll_layouts@['stdFuncMap']_processed.kll
//     WhiteFox
//       /srv/KiiConf/tmp/baa62272826bd0901a765b78d825285e15d34f3aeea52a/tmp_kll/@['WhiteFox-TrueFox-1']_processed.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	LED_control_capability_index,
	Layer_layerLatch_capability_index,
	Layer_layerLock_capability_index,
	Layer_layerRotate_capability_index,
	Layer_layerShift_capability_index,
	Layer_layerState_capability_index,
	Macro_testThreadSafe_capability_index,
	Macro_testThreadUnsafe_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouseWheel_capability_index,
	Output_usbMouse_capability_index,
	Pixel_AnimationControl_capability_index,
	Pixel_AnimationIndex_capability_index,
	Pixel_Animation_capability_index,
	Pixel_Pixel_capability_index,
} CapabilityIndex;



// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x2


// -- Capability / KLL Defines --

#define ResultCapabilityStackSize_define 10
#define ISSILedMask1_define  \
	0xFF, 0x00, /* C1-1 -> C1-16 */ \
	0xFF, 0x00, /* C2-1 -> C2-16 */ \
	0xFF, 0x00, /* C3-1 -> C3-16 */ \
	0xFF, 0x00, /* C4-1 -> C4-16 */ \
	0xFF, 0x00, /* C5-1 -> C5-16 */ \
	0xFF, 0x00, /* C6-1 -> C6-16 */ \
	0xFF, 0x00, /* C7-1 -> C7-16 */ \
	0xFF, 0x00, /* C8-1 -> C8-16 */ \
	0xFF, 0x00, /* C9-1 -> C9-16 */ \

#define ISSILedMask2_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSILedMask3_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSILedMask4_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSI_Chip_31FL3731_define 1
#define ISSI_Chip_31FL3732_define 0
#define ISSI_Chip_31FL3733_define 0
#define ISSI_Chips_define 1
#define ISSI_Enable_define 1
#define ISSI_FrameRate_ms_define 10
#define ISSI_Global_Brightness_define 255
#define ISSI_I2C_Buses_define 1
#define LED_MapCh1_Addr_define ISSI_Ch1
#define LED_MapCh1_Bus_define 0
#define LED_MapCh2_Addr_define ISSI_Ch2
#define LED_MapCh2_Bus_define 0
#define LED_MapCh3_Addr_define ISSI_Ch3
#define LED_MapCh3_Bus_define 0
#define LED_MapCh4_Addr_define ISSI_Ch4
#define LED_MapCh4_Bus_define 0
#define MinDebounceTime_define 6
#define Output_HIDIOEnabled_define 1
#define Output_USBEnabled_define 1
#define PeriodicCycles_define 1000
#define Pixel_AnimationStackSize_define 20
#define Pixel_HardCode_ChanWidth_define 8
#define Pixel_HardCode_Channels_define 1
#define Pixel_MapEnabled_define 1
#define Pixel_Test_Mode_define PixelTest_Off
#define PressReleaseCache_define 1
#define ResultMacroBufferSize_define 50
#define StrobeDelay_define 0
#define enableDeviceRestartOnUSBTimeout_define 0
#define enableJoystick_define 0
#define enableKeyboard_define 1
#define enableMouse_define 1
#define enableRawIO_define 1
#define enableUSBLowPowerNegotiation_define 0
#define enableUSBResume_define 1
#define enableUSBSuspend_define 1
#define enableVirtualSerialPort_define 1
#define flashModeEnabled_define 0
#define IndexWordSize_define 16
#define KeyboardLocale_define 0
#define LatencyMeasurementCount_define 10
#define SecureBootloader_define 0
#define StateWordSize_define 16
#define USBIdle_define 0
#define USBIdle_force_define 1
#define USBProtocol_define 1

// -- Animation Defines --

#define Animation__all_on 0

// -- Built-in Defines --
#define CapabilitiesNum_KLL 22
#define LayerNum_KLL 2
#define ResultMacroNum_KLL 96
#define TriggerMacroNum_KLL 102
#define MaxScanCode_KLL 71
#define Pixel_BuffersLen_KLL 1
#define Pixel_TotalChannels_KLL 144 + 0
#define Pixel_TotalPixels_KLL 71
#define Pixel_DisplayMapping_Cols_KLL 31
#define Pixel_DisplayMapping_Rows_KLL 5
#define Pixel_AnimationSettingsNum_KLL 1
#define AnimationNum_KLL 1


