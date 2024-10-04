#include "BigNum.h"
#include <iostream>


//char zn = '#';
char zn = '@';
char sp = 0x20; //space

const uint8_t num_width = 3;   // number is 3 "pixels" wide"
const uint8_t num_height = 5;  // number is 5 "pixels" tall

char digits[printable_numbers][num_height][num_width] = {
{{zn,zn,zn},{zn,sp,zn},{zn,sp,zn},{zn,sp,zn},{zn,zn,zn}}, // 0
{{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn}}, // 1
{{zn,zn,zn},{sp,sp,zn},{zn,zn,zn},{zn,sp,sp},{zn,zn,zn}}, // 2
{{zn,zn,zn},{sp,sp,zn},{sp,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 3
{{zn,sp,zn},{zn,sp,zn},{zn,zn,zn},{sp,sp,zn},{sp,sp,zn}}, // 4
{{zn,zn,zn},{zn,sp,sp},{zn,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 5
{{zn,zn,zn},{zn,sp,sp},{zn,zn,zn},{zn,sp,zn},{zn,zn,zn}}, // 6
{{zn,zn,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn}}, // 7
{{zn,zn,zn},{zn,sp,zn},{zn,zn,zn},{zn,sp,zn},{zn,zn,zn}}, // 8
{{zn,zn,zn},{zn,sp,zn},{zn,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 9
{{sp,sp,sp},{sp,zn,sp},{sp,sp,sp},{sp,zn,sp},{sp,sp,sp}}  // :
};



void print_x_n_times(char x, uint8_t n){
  for(int i = 0; i < n; ++i)
    std::cout << x;
}

void space(uint8_t n){
  print_x_n_times(sp, n);
}

void pdigit(int num, int layer, uint8_t p_width, uint8_t p_height){
  uint8_t width = p_width*num_width;
  for(int i = 0; i < width; ++i)
    std::cout << digits[num][layer/p_height][i/p_width];
}

void print_time(int min10, int min1, int sec10, int sec1, uint8_t p_width, uint8_t p_height, uint8_t space_width){
  uint8_t width = p_width*num_width;
  uint8_t height = p_height*num_height;

  for(int layer = 0; layer < height; ++layer){
    space(space_width);

    pdigit(min10, layer, p_width, p_height); // min 10

    space(space_width);

    pdigit(min1, layer, p_width, p_height);  // min 1

    pdigit(ddot, layer, p_width, p_height);  // doubledot

    pdigit(sec10, layer, p_width, p_height); // sec 10

    space(space_width);

    pdigit(sec1, layer, p_width, p_height);  // sec 1

    space(space_width);

    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl; // double cuz fancy weeeeeee
}





