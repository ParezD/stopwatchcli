#include "BigNum.h"
#include <iostream>
#include <chrono>
#include <thread>


using namespace std;
using namespace std::this_thread;
using namespace std::literals;

int main(int argc, char* argv[]){

uint8_t width = 4;
uint8_t height = 2;

//print_time(6, 9, 6, 9, width, height);


for(int i = 0; i < 100; ++i){
  print_time(i/10, i%10, i/10, i%10, width, height);
  sleep_for(500ms);
}

return EXIT_SUCCESS;
}
