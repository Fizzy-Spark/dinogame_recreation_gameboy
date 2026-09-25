#include <gb/gb.h>
#include <gb/metasprites.h>
#include "dinosaur_sprites.h"

void main() {

    set_sprite_data(0, 16, dinosaur_tiles);
    SHOW_SPRITES;
    DISPLAY_ON;
    while(1)
    {
    	move_metasprite(dinosaur_lleg, 0, 0, 80, 76);
    	delay(1000);
    	move_metasprite(dinosaur_rleg, 0, 0, 80, 76);
    	delay(1000);
        wait_vbl_done();
    }

}
