#pragma once

// Only activate the commands that are used. Every command takes 100 bytes, wether used or not.
//extern uint16_t ONKYO_RC911R_POWER_TOGGLE;
extern uint16_t ONKYO_RC911R_POWER_ON;
extern uint16_t ONKYO_RC911R_POWER_OFF;
extern uint16_t ONKYO_RC911R_BD_DVD;
extern uint16_t ONKYO_RC911R_CBL_SAT;
extern uint16_t ONKYO_RC911R_GAME;
extern uint16_t ONKYO_RC911R_STRMBOX;
extern uint16_t ONKYO_RC911R_PC;
extern uint16_t ONKYO_RC911R_AUX;
extern uint16_t ONKYO_RC911R_CD;
extern uint16_t ONKYO_RC911R_TV;
extern uint16_t ONKYO_RC911R_PHONO;
extern uint16_t ONKYO_RC911R_TUNER;
extern uint16_t ONKYO_RC911R_NET;
extern uint16_t ONKYO_RC911R_BLUETOOTH;
// extern uint16_t ONKYO_RC911R_QUICK_MENU;
extern uint16_t ONKYO_RC911R_INFO;
extern uint16_t ONKYO_RC911R_UP;
extern uint16_t ONKYO_RC911R_LEFT;
extern uint16_t ONKYO_RC911R_RIGHT;
extern uint16_t ONKYO_RC911R_DOWN;
extern uint16_t ONKYO_RC911R_ENTER;
extern uint16_t ONKYO_RC911R_SETUP;
extern uint16_t ONKYO_RC911R_RETURN;
extern uint16_t ONKYO_RC911R_VOL_UP;
extern uint16_t ONKYO_RC911R_VOL_DOWN;
extern uint16_t ONKYO_RC911R_MUTE;
// extern uint16_t ONKYO_RC911R_AUDIO_MOVIE_TV;
// extern uint16_t ONKYO_RC911R_AUDIO_MUSIC;
// extern uint16_t ONKYO_RC911R_AUDIO_GAME;
// extern uint16_t ONKYO_RC911R_PREV;
// extern uint16_t ONKYO_RC911R_PLAY_PAUSE;
// extern uint16_t ONKYO_RC911R_NEXT;
// extern uint16_t ONKYO_RC911R_REPEAT_SHUFFLE;
// extern uint16_t ONKYO_RC911R_MEMORY;
// extern uint16_t ONKYO_RC911R_MODE;

void register_device_onkyo_rc911r(void);
