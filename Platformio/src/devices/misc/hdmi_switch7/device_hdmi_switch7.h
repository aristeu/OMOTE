#pragma once

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
extern uint16_t HDMI_SWITCH7_HDMI1;
extern uint16_t HDMI_SWITCH7_HDMI2;
extern uint16_t HDMI_SWITCH7_HDMI3;
extern uint16_t HDMI_SWITCH7_HDMI4;
extern uint16_t HDMI_SWITCH7_HDMI5;
extern uint16_t HDMI_SWITCH7_HDMI6;
extern uint16_t HDMI_SWITCH7_HDMI7;

void register_device_hdmi_switch7(void);
