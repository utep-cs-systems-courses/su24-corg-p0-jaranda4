#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_8x12(char c)
{
  c -= 0x20;
  for (char col = 0; col < 12; col++) {
    for (char row = 0; row < 20; row++) {
      unsigned short rowBits = font_8x12[c][col];
      unsigned short colMask = 1 << (12 - row - 1); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
