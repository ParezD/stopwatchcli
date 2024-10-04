#include <cstdint>

#ifndef BIGNUM_H
#define DIGNUM_H

void pdigit(int num, int layer, uint8_t p_width, uint8_t p_height);
void print_x_n_times(char x, uint8_t n);
void space(uint8_t n);
void print_time(int min10, int min1, int sec10, int sec1, uint8_t p_width = 4, uint8_t p_height = 2, uint8_t space_width = 2);

extern char zn;
extern char sp;

extern const uint8_t num_width;
extern const uint8_t num_height;

extern char digits[11][5][3];

enum numbers{
  zero,
  one,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine,
  ddot,

  printable_numbers
};

#endif




