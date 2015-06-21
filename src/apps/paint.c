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

unsigned char circle[20 * 20] = {BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,
								BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,
								BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,
								BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,
								BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,
								BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK};

unsigned char rectangle[20 * 20] = {BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK};

unsigned char line[20 * 20] =  {BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK};

unsigned char rubber[20*20] = {BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,WHITE,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,WHITE,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,BLACK,
								BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK}



int selected_action, selected_color;


int
paint_main(int argc, char *argv[]) {
	int x, y;
	int acum_x=0,acum_y=0, prev_x = 0, prev_y = 0;
	bool cursor;
	bool exit=false;
	selected_action = LINE;
	selected_color = BLACK;
	input_event_t event;

	// Alocar TLS
	//TLS = Malloc(sizeof(data));
	
	// Inicializar display
	mt_cons_clear();
	cursor = mt_cons_cursor(false);
	init_vga();
	fill_screen(WHITE);
	print_menu();

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

	int clicked = get_action(acum_x, acum_y, m_event);

	if (clicked == EXIT)
		return 1;

	if(!((acum_x >= 0 && acum_x <= 20) || 
				(acum_y >= 180 && acum_y <= 200))) {
		
		switch(clicked) {

			case LINE:
					if (m_event.left_button)
						print_px(acum_x, acum_y, selected_color);
				break;
			case CIRCLE:
					print_circle(acum_x, acum_y, selected_color, m_event);
				break;
			case SQUARE:
					print_square(acum_x, acum_y, selected_color, m_event);
				break;
			case ERRASE:
					if(m_event.left_button)
						print_px(acum_x, acum_y, WHITE);
				break;			
		}
	}

	return 0;
}

int
get_action(int acum_x, int acum_y, mouse_event_t m_event) {
	
	if (m_event.left_button && acum_x >= 300 && acum_x <= 320 //Checks if the user cliked on the exit button
		&& acum_y >= 0 && acum_y <= 20)
		selected_action = EXIT;
	else if(m_event.left_button && ((acum_x >= 0 && acum_x <= 20) ||  //Checks if the user cliked in the menu
		(acum_y >= 180 && acum_y <= 200))) {

		if (acum_y >= 0 && acum_y <= 180){

			if (acum_y >= 0 && acum_y <= 20)
				selected_action = LINE;
			else if (acum_y >= 24 && acum_y <= 44)
				selected_action = CIRCLE;
			else if (acum_y >= 48 && acum_y <= 68)
				selected_action = SQUARE;
			else if (acum_y >= 72 && acum_y <= 92)
				selected_action = ERRASE;

		} else {

			if (acum_x >= 0  && acum_x <= 20)
				selected_color = 30;
			else if (acum_x >= 21  && acum_x <= 40)
				selected_color = BLACK;
			else if (acum_x >= 41  && acum_x <= 60)
				selected_color = 32;
			else if (acum_x >= 61  && acum_x <= 80)
				selected_color = 33;
			else if (acum_x >= 81  && acum_x <= 100)
				selected_color = 34;
			else if (acum_x >= 101  && acum_x <= 120)
				selected_color = 35;
			else if (acum_x >= 121  && acum_x <= 140)
				selected_color = 36;
			else if (acum_x >= 141  && acum_x <= 160)
				selected_color = 37;
			else if (acum_x >= 161  && acum_x <= 180)
				selected_color = 38;
			else if (acum_x >= 181  && acum_x <= 200)
				selected_color = 39;
			else if (acum_x >= 201  && acum_x <= 220)
				selected_color = 40;
			else if (acum_x >= 221  && acum_x <= 240)
				selected_color = 41;
			else if (acum_x >= 241  && acum_x <= 260)
				selected_color = 42;
			else if (acum_x >= 261  && acum_x <= 280)
				selected_color = 43;
			else if (acum_x >= 281  && acum_x <= 300)
				selected_color = 44;
			else
				selected_color = 45;

			print_current_color(selected_color);

		}
	}

	return selected_action;
} 

void
print_menu() {
	print_colors_menu();
	print_from(line, 0);
	print_from(rectangle, 48*WIDTH);
	print_from(circle, 24*WIDTH);
	print_from(cross, 300);
	print_from(rubber, 72*WIDTH);
	print_current_color(selected_color);
}

void
print_colors_menu(){
	int i,j;
	for(i=30,j=0;j<=300;i++){
		if(i == 31){
			print_color(BLACK,20);
		}
		else{
			print_color(i,j);
		}
		j+=20;
	}
}
