#include "../../lib/stddef.h"
#include "../../lib/stdint.h"

static inline uint8_t vga_entry_color(int,int);
 
static inline uint16_t vga_entry(unsigned char uc, uint8_t color);
 
size_t strlen(const char* str);

void terminal_initialize(void);
void terminal_setcolor(uint8_t color);
void terminal_putentryat(char c, uint8_t color, size_t x, size_t y);
void terminal_putchar(char c);
void terminal_write(const char* data, size_t size);
void terminal_writestring(const char* data);