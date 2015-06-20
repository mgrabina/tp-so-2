#include <kernel.h>

unsigned char cross[20 * 20] = {BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK};

int
paint_main(int argc, char *argv[]) {
	int x, y;
	int acum_x=0,acum_y=0, prev_x = 0, prev_y = 0;
	bool cursor;
	bool exit=false;

	input_event_t event;

	// Alocar TLS
	//TLS = Malloc(sizeof(data));
	
	// Inicializar display
	mt_cons_clear();
	cursor = mt_cons_cursor(false);
	init_vga();
	fill_screen(0xE0);
	print_from(cross, 300);

	// Consumir eventos previos acumulados
	while ( mt_input_get_cond(&event) )
		;

	while ( !exit )
	{
		mt_input_get(&event);
		switch ( event.type )
		{
			case KBD_EVENT:
				if ( event.kbd.scan_codes[0] == 0x81 ) // break ESC
				{
					// Consumir teclas que no se han leído
					while ( getch_cond() != EOF )
						;					
					
					// Liberar buffer de pantalla
					//Free(screen_v.screen);

					// Reponer pantalla
					set_text_mode();
					mt_cons_clear();
					mt_cons_cursor(cursor);

					// Liberar TLS
					//Free(TLS);

					return 0;
				}
				break;
			case MOUSE_EVENT:
				x = event.mouse.x;
				if ( event.mouse.x_sign )
					x -= 256;
				y = event.mouse.y;
				if ( event.mouse.y_sign )
					y -= 256;
				prev_x = acum_x;
				prev_y = acum_y;
 				acum_x += (x);
				acum_y -= (y);
				if(acum_x>=WIDTH){
					acum_x=WIDTH-1;
				}
				if(acum_x<0){
					acum_x=0;
				}

				if(acum_y>=HEIGHT){
					acum_y=HEIGHT-1;
				}
				if(acum_y<0){
					acum_y=0;
				}
				
				print_mouse(acum_x, acum_y, prev_x, prev_y);
				exit = execute_task(acum_x,acum_y,event.mouse);
				break;
			default:
				break;
		}
	}

	// Liberar buffer de pantalla
	//Free(screen_v.screen);

	// Reponer pantalla
	set_text_mode();
	mt_cons_clear();
	mt_cons_cursor(cursor);

	// Liberar TLS
	//Free(TLS);

	return 0;
}

int
execute_task(int acum_x, int acum_y, mouse_event_t m_event) {
	int clicked = get_action(acum_x, acum_y);

	switch(clicked) {

		default:
			if(m_event.left_button)
				print_line(acum_x, acum_y);

	}
	return 0;
}

int
get_action(int acum_x, int acum_y) {
	return 0;
} 