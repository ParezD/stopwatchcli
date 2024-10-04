#include "BigNum.h"
#include <iostream>


//char zn = '#';
char zn = '@';
char sp = 0x20; //space

uint8_t num_width = 3;   // number is 3 "pixels" wide"
uint8_t num_height = 5;  // number is 5 "pixels" tall

char digits[11][5][3] = {{{zn,zn,zn},{zn,sp,zn},{zn,sp,zn},{zn,sp,zn},{zn,zn,zn}}, // 0
{{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn},{sp,sp,zn}}, // 1
{{zn,zn,zn},{sp,sp,zn},{zn,zn,zn},{zn,sp,sp},{zn,zn,zn}}, // 2
{{zn,zn,zn},{sp,sp,zn},{sp,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 3
{{zn,sp,zn},{zn,sp,zn},{zn,zn,zn},{sp,sp,zn},{sp,sp,zn}}, // 4
{{zn,zn,zn},{zn,sp,sp},{zn,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 5
{{zn,zn,zn},{zn,sp,sp},{zn,zn,zn},{zn,sp,zn},{zn,zn,zn}}, // 6
{{zn,zn,zn},{sp,sp,zn},{sp,zn,zn},{sp,sp,zn},{sp,sp,zn}}, // 7
{{zn,zn,zn},{zn,sp,zn},{zn,zn,zn},{zn,sp,zn},{zn,zn,zn}}, // 8
{{zn,zn,zn},{zn,sp,zn},{zn,zn,zn},{sp,sp,zn},{zn,zn,zn}}, // 9
{{sp,sp,sp},{sp,zn,sp},{sp,sp,sp},{sp,zn,sp},{sp,sp,sp}} // :
};

void print_x_n_times(char x, uint8_t n){
  for(int i = 0; i < n; ++i)
    std::cout << x;
}

void print_time(int min10, int min1, int sec10, int sec1, uint8_t p_width, uint8_t p_height){
  uint8_t width = p_width*num_width;
  uint8_t height = p_height*num_height;
  uint8_t space_width = 2;

  for(int i = 0; i < height; ++i){
    print_x_n_times(sp,space_width);    // small space before first digit

    for(int j = 0; j < width; ++j)      // mins 10
      std::cout << digits[min10][i/p_height][j/p_width];

    print_x_n_times(sp,space_width);    //space between numbers

    for(int j = 0; j < width; ++j)      // mins 1
      std::cout << digits[min1][i/p_height][j/p_width];

    //print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j)      // doubledot (11th number)
      std::cout << digits[ddot][i/p_height][j/p_width];
    //print_x_n_times(sp,space_width);

    for(int j = 0; j < width; ++j)      // secs 10
      std::cout << digits[sec10][i/p_height][j/p_width];

    print_x_n_times(sp,space_width);    // space between numbers

    for(int j = 0; j < width; ++j)      // secs 1
      std::cout << digits[sec1][i/p_height][j/p_width];

    print_x_n_times(sp,space_width);    // small space at the end

    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl; // double cuz fancy weeeeeee
}





