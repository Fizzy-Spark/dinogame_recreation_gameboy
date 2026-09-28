#include <gb/gb.h>
#include <gb/metasprites.h>
#include "CommonHeader.h"

uint8_t x = 40;
uint8_t y = 89;

int8_t player_vy = 0;
uint8_t is_grounded = 1;

void main(void)
{
	GameSetup();
	GameLoop();
}
