#include <gb/gb.h>
#include <gb/metasprites.h>
#include <stdio.h>
#include "CommonHeader.h"

#define GRAVITY 1
#define JUMP_STRENGTH -9
#define GROUND_Y 89

void GameLoop(void)
{
	while(1)
	{
		        
		scroll_bkg(1,0);
		delay(50);

		if((joypad() & J_A) && is_grounded)
		{
			player_vy = JUMP_STRENGTH;
			is_grounded = 0;
		}

		if (!is_grounded)
		{
			player_vy += GRAVITY;
		}

		y += player_vy;

		if (y >= GROUND_Y)
		{
			y = GROUND_Y;
			player_vy = 0;
			is_grounded = 1;
		}

		move_metasprite_ex(dinosaur_idle,0,0,0,x,y);

		wait_vbl_done();
	}

}
