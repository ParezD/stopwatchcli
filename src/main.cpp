#include "BigNum.h"
#include <iostream>
#include <chrono>
#include <thread>

#define WIDTH 8     // default = 4
#define HEIGHT 4    // default = 2

using namespace std;
using namespace std::this_thread;
using namespace std::literals;

int main(int argc, char* argv[]){

//print_time(6, 9, 6, 9, width, height);

long sec = 0;

for(;;){
  //print_time((sec/60)/10, (sec/60)%10, (sec%60)/10, sec%10, WIDTH, HEIGHT);
  print_time((sec/60)/10, (sec/60)%10, (sec%60)/10, sec%10);
  ++sec;
  sleep_for(1s);
}

return EXIT_SUCCESS;
}
