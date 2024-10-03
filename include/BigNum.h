#include <cstdint>

#ifndef BIGNUM_H
#define DIGNUM_H


void sayhi(void);

extern char zn;
extern char sp;

extern uint8_t width;
extern uint8_t height;
extern int nsize[];
extern char one[5][3];
extern char two[5][3];
extern char digits[10][5][3];
extern char space[];

enum nw{
  nzero,
  none,
  ntwo,
  nthree,
  nfour,
  nfive,
  nsix,
  nseven,
  neight,
  nnine
};



#endif




