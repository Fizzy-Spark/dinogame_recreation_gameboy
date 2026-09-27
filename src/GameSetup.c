#include <gb/gb.h>
#include "dinosaur_map_tiles.h"
#include "dinosaur_map1.h"

void GameSetup()
{
	
	set_bkg_data(0,24,dinosaur_map_tiles);
	
	set_bkg_tiles(0,0, 32, 18,dinosaur_map1);

	DISPLAY_ON;
    SHOW_BKG;

    while(1){
    	scroll_bkg(1,0);
    	delay(50);
    }
}
