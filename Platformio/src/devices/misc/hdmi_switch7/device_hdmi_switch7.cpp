#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_hdmi_switch7.h"

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
uint16_t HDMI_SWITCH7_HDMI1;
uint16_t HDMI_SWITCH7_HDMI2;
uint16_t HDMI_SWITCH7_HDMI3;
uint16_t HDMI_SWITCH7_HDMI4;
uint16_t HDMI_SWITCH7_HDMI5;
uint16_t HDMI_SWITCH7_HDMI6;
uint16_t HDMI_SWITCH7_HDMI7;

void register_device_hdmi_switch7() {
	register_command(&HDMI_SWITCH7_HDMI1, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FE40BF"}));
	register_command(&HDMI_SWITCH7_HDMI2, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FE20DF"}));
	register_command(&HDMI_SWITCH7_HDMI3, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FE609F"}));
	register_command(&HDMI_SWITCH7_HDMI4, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FEE01F"}));
	register_command(&HDMI_SWITCH7_HDMI5, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FE906F"}));
	register_command(&HDMI_SWITCH7_HDMI6, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FE50AF"}));
	register_command(&HDMI_SWITCH7_HDMI7, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1FEF807"}));
}
