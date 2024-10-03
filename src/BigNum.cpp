#include "BigNum.h"
#include <iostream>


void sayhi(void){
  std::cout << "Hello big bby!" << std::endl;
}

char zn = '#';
char sp = 0x20; //space

uint8_t width = 4;
uint8_t height = 2;
int nsize[2] = {5*height, 3*width};

char one[5][3] = {{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn}};
char two[5][3] = {{zn,zn,zn},{sp,sp,zn},{zn,zn,zn},{zn,sp,sp},{zn,zn,zn}};
char space[3] = {sp,sp,sp};


