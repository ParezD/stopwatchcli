#include "BigNum.h"
#include <iostream>


void sayhi(void){
  std::cout << "Hello big bby!" << std::endl;
}

char zn = '#';
char sp = 0x20; //space


//smazat?!
//uint8_t width = 4;
//uint8_t height = 2;
//int nsize[2] = {5*height, 3*width};
//char space[3] = {sp,sp,sp};

uint8_t num_width = 3;
uint8_t num_height = 5;

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
    print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j) // Mins
      std::cout << digits[min10][i/p_height][j/p_width];
    print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j)
      std::cout << digits[min1][i/p_height][j/p_width];
    //print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j)// dd
      std::cout << digits[ddot][i/p_height][j/p_width];
    //print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j) // secs
      std::cout << digits[sec10][i/p_height][j/p_width];
    print_x_n_times(sp,space_width);
    for(int j = 0; j < width; ++j)
      std::cout << digits[sec1][i/p_height][j/p_width];
    print_x_n_times(sp,space_width);
    
    std::cout << std::endl;
  }
  std::cout << std::endl;
}





