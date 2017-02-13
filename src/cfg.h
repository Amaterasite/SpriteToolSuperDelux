#ifndef CFG_H
#define CFG_H

#include <stdio.h>
#include "structs.h"

#define INIT_PTR 0x01817D	//snes address of default init pointers
#define MAIN_PTR 0x0185CC	//guess what?

typedef void (*linehandler)(const char*, sprite*, const void*);
//using linehandler = void(const char*, sprite*, void*);

/**
	Reads the content of a CFG file into a sprite and writes some debug info into
	output

	@param spr is the sprite which's data will be filled with the information from the cfg file
	@param content of the actual cfg file
	@param dir -ectory of the asm file
	@param output to write the debug information into, leave as nullptr for no output to be used
*/
void read_cfg_file(sprite* spr, const char* content, const char* dir, FILE* output);

#endif