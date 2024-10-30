#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_lg_mr23ga.h"

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
uint16_t LG_MR23GA_POWER_TOGGLE;
// uint16_t LG_MR23GA_1;
// uint16_t LG_MR23GA_2;
// uint16_t LG_MR23GA_3;
// uint16_t LG_MR23GA_4;
// uint16_t LG_MR23GA_5;
// uint16_t LG_MR23GA_6;
// uint16_t LG_MR23GA_7;
// uint16_t LG_MR23GA_8;
// uint16_t LG_MR23GA_9;
// uint16_t LG_MR23GA_DASH;
// uint16_t LG_MR23GA_0;
uint16_t LG_MR23GA_VOL_UP;
uint16_t LG_MR23GA_VOL_DOWN;
uint16_t LG_MR23GA_MUTE;
uint16_t LG_MR23GA_CHANNEL_UP;
uint16_t LG_MR23GA_CHANNEL_DOWN;
// uint16_t LG_MR23GA_HOME;
uint16_t LG_MR23GA_INPUT;
uint16_t LG_MR23GA_UP;
uint16_t LG_MR23GA_LEFT;
uint16_t LG_MR23GA_RIGHT;
uint16_t LG_MR23GA_DOWN;
// uint16_t LG_MR23GA_SCROLL;
uint16_t LG_MR23GA_BACK;
uint16_t LG_MR23GA_CONFIG;
// uint16_t LG_MR23GA_RED;
// uint16_t LG_MR23GA_GREEN;
// uint16_t LG_MR23GA_YELLOW;
// uint16_t LG_MR23GA_BLUE;
uint16_t LG_MR23GA_HDMI1;
uint16_t LG_MR23GA_HDMI2;
uint16_t LG_MR23GA_HDMI3;
uint16_t LG_MR23GA_HDMI4;
uint16_t LG_MR23GA_POWER_OFF;
uint16_t LG_MR23GA_POWER_ON;

void register_device_lg_mr23ga() {
	register_command(&LG_MR23GA_POWER_TOGGLE	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF10EF"}));
// 	register_command(&LG_MR23GA_1	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF8877"}));
// 	register_command(&LG_MR23GA_2	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF48B7"}));
// 	register_command(&LG_MR23GA_3	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFC837"}));
// 	register_command(&LG_MR23GA_4	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF28D7"}));
// 	register_command(&LG_MR23GA_5	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFA857"}));
// 	register_command(&LG_MR23GA_6	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF6897"}));
// 	register_command(&LG_MR23GA_7	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFE817"}));
// 	register_command(&LG_MR23GA_8	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF18E7"}));
// 	register_command(&LG_MR23GA_9	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF9867"}));
// 	register_command(&LG_MR23GA_DASH	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFD52A"}));
// 	register_command(&LG_MR23GA_0	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF08F7"}));
	register_command(&LG_MR23GA_VOL_UP	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF40BF"}));
	register_command(&LG_MR23GA_VOL_DOWN	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFC03F"}));
	register_command(&LG_MR23GA_MUTE	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF906F"}));
	register_command(&LG_MR23GA_CHANNEL_UP	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF00FF"}));
	register_command(&LG_MR23GA_CHANNEL_DOWN	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF807F"}));
// 	register_command(&LG_MR23GA_HOME	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF3EC1"}));
	register_command(&LG_MR23GA_INPUT	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFD02F"}));
	register_command(&LG_MR23GA_UP	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF02FD"}));
	register_command(&LG_MR23GA_LEFT	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFE01F"}));
	register_command(&LG_MR23GA_RIGHT	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF609F"}));
	register_command(&LG_MR23GA_DOWN	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF827D"}));
// 	register_command(&LG_MR23GA_SCROLL	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF22DD"}));
	register_command(&LG_MR23GA_BACK	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF14EB"}));
	register_command(&LG_MR23GA_CONFIG	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFC23D"}));
// 	register_command(&LG_MR23GA_RED	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF4EB1"}));
// 	register_command(&LG_MR23GA_GREEN	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF8E71"}));
// 	register_command(&LG_MR23GA_YELLOW	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFC639"}));
// 	register_command(&LG_MR23GA_BLUE	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF8679"}));
	register_command(&LG_MR23GA_HDMI1	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF738C"}));
	register_command(&LG_MR23GA_HDMI2	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF33CC"}));
	register_command(&LG_MR23GA_HDMI3	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF9768"}));
	register_command(&LG_MR23GA_HDMI4	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF5BA4"}));
	register_command(&LG_MR23GA_POWER_OFF	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DFA35C"}));
	register_command(&LG_MR23GA_POWER_ON	, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x20DF23DC"}));
}
