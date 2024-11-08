#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_onkyo_rc911r.h"

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
//uint16_t ONKYO_RC911R_POWER_TOGGLE;
uint16_t ONKYO_RC911R_POWER_OFF;
uint16_t ONKYO_RC911R_POWER_ON;
uint16_t ONKYO_RC911R_BD_DVD;
uint16_t ONKYO_RC911R_CBL_SAT;
uint16_t ONKYO_RC911R_GAME;
uint16_t ONKYO_RC911R_STRMBOX;
uint16_t ONKYO_RC911R_PC;
uint16_t ONKYO_RC911R_AUX;
uint16_t ONKYO_RC911R_CD;
uint16_t ONKYO_RC911R_TV;
uint16_t ONKYO_RC911R_PHONO;
uint16_t ONKYO_RC911R_TUNER;
uint16_t ONKYO_RC911R_NET;
uint16_t ONKYO_RC911R_BLUETOOTH;
// uint16_t ONKYO_RC911R_QUICK_MENU;
uint16_t ONKYO_RC911R_INFO;
uint16_t ONKYO_RC911R_UP;
uint16_t ONKYO_RC911R_LEFT;
uint16_t ONKYO_RC911R_RIGHT;
uint16_t ONKYO_RC911R_DOWN;
uint16_t ONKYO_RC911R_ENTER;
uint16_t ONKYO_RC911R_SETUP;
uint16_t ONKYO_RC911R_RETURN;
uint16_t ONKYO_RC911R_VOL_UP;
uint16_t ONKYO_RC911R_VOL_DOWN;
uint16_t ONKYO_RC911R_MUTE;
// uint16_t ONKYO_RC911R_AUDIO_MOVIE_TV;
// uint16_t ONKYO_RC911R_AUDIO_MUSIC;
// uint16_t ONKYO_RC911R_AUDIO_GAME;
// uint16_t ONKYO_RC911R_PREV;
// uint16_t ONKYO_RC911R_PLAY_PAUSE;
// uint16_t ONKYO_RC911R_NEXT;
// uint16_t ONKYO_RC911R_REPEAT_SHUFFLE;
// uint16_t ONKYO_RC911R_MEMORY;
// uint16_t ONKYO_RC911R_MODE;

void register_device_onkyo_rc911r() {
//	register_command(&ONKYO_RC911R_POWER_TOGGLE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B36D32C"}));
	register_command(&ONKYO_RC911R_POWER_ON, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB620DF"}));
	register_command(&ONKYO_RC911R_POWER_OFF, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B36E21D"}));
	register_command(&ONKYO_RC911R_BD_DVD, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B3631CE"}));
	register_command(&ONKYO_RC911R_CBL_SAT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6708F"}));
	register_command(&ONKYO_RC911R_GAME, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6B04F"}));
	register_command(&ONKYO_RC911R_STRMBOX, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB630CF"}));
	register_command(&ONKYO_RC911R_PC, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB639C6"}));
	register_command(&ONKYO_RC911R_AUX, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6F906"}));
	register_command(&ONKYO_RC911R_CD, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6906F"}));
	register_command(&ONKYO_RC911R_TV, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB612ED"}));
	register_command(&ONKYO_RC911R_PHONO, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB650AF"}));
	register_command(&ONKYO_RC911R_TUNER, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6D02F"}));
	register_command(&ONKYO_RC911R_NET, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B40E11E"}));
	register_command(&ONKYO_RC911R_BLUETOOTH, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B780A70"}));
// 	register_command(&ONKYO_RC911R_QUICK_MENU, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B36CA35"}));
	register_command(&ONKYO_RC911R_INFO, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B36AA55"}));
	register_command(&ONKYO_RC911R_UP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_EPSON), "0x4BB641BE"}));
	register_command(&ONKYO_RC911R_LEFT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_EPSON), "0x4BB621DE"}));
	register_command(&ONKYO_RC911R_RIGHT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_EPSON), "0x4BB6A15E"}));
	register_command(&ONKYO_RC911R_DOWN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6C13E"}));
	register_command(&ONKYO_RC911R_ENTER, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6E916"}));
	register_command(&ONKYO_RC911R_SETUP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B36DB24"}));
	register_command(&ONKYO_RC911R_RETURN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B362AD5"}));
	register_command(&ONKYO_RC911R_VOL_UP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_EPSON), "0x4BB640BF"}));
	register_command(&ONKYO_RC911R_VOL_DOWN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_EPSON), "0x4BB6C03F"}));
	register_command(&ONKYO_RC911R_MUTE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4BB6A05F"}));
// 	register_command(&ONKYO_RC911R_AUDIO_MOVIE_TV, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B350BF4"}));
// 	register_command(&ONKYO_RC911R_AUDIO_MUSIC, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B358B74"}));
// 	register_command(&ONKYO_RC911R_AUDIO_GAME, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B354BB4"}));
// 	register_command(&ONKYO_RC911R_PREV, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B4009F6"}));
// 	register_command(&ONKYO_RC911R_PLAY_PAUSE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B983AC5"}));
// 	register_command(&ONKYO_RC911R_NEXT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B40F10E"}));
// 	register_command(&ONKYO_RC911R_REPEAT_SHUFFLE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B98FA05"}));
// 	register_command(&ONKYO_RC911R_MEMORY, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B404BB4"}));
// 	register_command(&ONKYO_RC911R_MODE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x4B40CB34"}));
}
