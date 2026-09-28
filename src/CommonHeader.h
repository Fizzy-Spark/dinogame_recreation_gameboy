#ifndef INPUT_H
#define INPUT_H

#include <gb/gb.h>
#include <stdint.h>

// Function declaration
void GameSetup(void);
void GameLoop(void);

extern uint8_t x;
extern uint8_t y;

extern int8_t player_vy;
extern uint8_t is_grounded;

extern const metasprite_t dinosaur_idle[];
extern const metasprite_t dinosaur_lleg[];
extern const metasprite_t dinosaur_rleg[];

#endif
