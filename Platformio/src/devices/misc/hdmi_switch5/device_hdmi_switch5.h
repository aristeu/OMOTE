#pragma once

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
extern uint16_t HDMI_SWITCH5_HDMI1;
extern uint16_t HDMI_SWITCH5_HDMI2;
extern uint16_t HDMI_SWITCH5_HDMI3;
extern uint16_t HDMI_SWITCH5_HDMI4;
extern uint16_t HDMI_SWITCH5_HDMI5;

void register_device_hdmi_switch5(void);
