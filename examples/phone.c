#include "ugui.h"
#define D_FONT FONT_10X16
#define MAX_OBJECTS 10


UG_WINDOW window1;
UG_TEXTBOX textbox1;
UG_BUTTON numpad[12];
static char *glyphs[12] = {"1", "2", "3",
													 "4", "5", "6",
													 "7", "8", "9",
													 "X", "0", "C"};
UG_OBJECT objs[MAX_OBJECTS];
static char number[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int np;

void window1_callback(UG_MESSAGE *msg){
}

void ui_setup(){

	UG_FontSelect(&D_FONT);
	UG_WindowCreate(&window1, objs, MAX_OBJECTS, window1_callback);


	UG_WindowShow(&window1);
}

void ui_loop(){

}
