#include <cstdint>

#ifndef BIGNUM_H
#define DIGNUM_H


void sayhi(void);
void print_x_n_times(char x, uint8_t n);
void print_time(int min10, int min1, int sec10, int sec1, uint8_t p_width, uint8_t p_height);

extern char zn;
extern char sp;

//extern uint8_t width;
//extern uint8_t height;
//extern int nsize[];

extern uint8_t num_width;
extern uint8_t num_height;

extern char digits[11][5][3];
//extern char space[];

enum nw{
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
  ddot
};



#endif




