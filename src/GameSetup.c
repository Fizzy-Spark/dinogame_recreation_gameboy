#include <gb/gb.h>
#include "dinosaur_map_tiles.h"
#include "dinosaur_map1.h"
#include "dinosaur_sprites.h"
#include <gb/metasprites.h>
#include <stdint.h>
#include "CommonHeader.h"

void GameSetup()
{
		    
	set_sprite_data(0,36, dinosaur_tiles);
	set_bkg_data( 0, 24, dinosaur_map_tiles);
	set_bkg_tiles (0, 0, 32, 18,dinosaur_map1);
	
	move_metasprite_ex(dinosaur_idle, 0, 0, 0, x, y);
	move_win(7,104);
	
	DISPLAY_ON;
    SHOW_BKG;
    SHOW_SPRITES;
	SHOW_WIN;
	
    while (!(joypad() & J_A)) {
         wait_vbl_done();
     }
    
     while (joypad() & J_A) {
         wait_vbl_done();
     }

}
