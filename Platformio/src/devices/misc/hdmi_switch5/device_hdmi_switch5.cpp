#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_hdmi_switch5.h"

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
uint16_t HDMI_SWITCH5_HDMI1;
uint16_t HDMI_SWITCH5_HDMI2;
uint16_t HDMI_SWITCH5_HDMI3;
uint16_t HDMI_SWITCH5_HDMI4;
uint16_t HDMI_SWITCH5_HDMI5;

void register_device_hdmi_switch5() {
	register_command(&HDMI_SWITCH5_HDMI1, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x807FD827"}));
	register_command(&HDMI_SWITCH5_HDMI2, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x807F7887"}));
	register_command(&HDMI_SWITCH5_HDMI3, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x807FB04F"}));
	register_command(&HDMI_SWITCH5_HDMI4, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x807F48B7"}));
	register_command(&HDMI_SWITCH5_HDMI5, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x807F08F7"}));
}
