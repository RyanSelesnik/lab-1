#include <chrono> // for delay 
#include <iostream>
#include <thread> // for delay 

#include "StopWatch.h"

using namespace std;
using namespace std::chrono_literals;

int main() {
    
    double time_elapsed = 0;

    StopWatch watch;

    watch.start();

    // Program goes here
    std::this_thread::sleep_for(3s); // Example program to demonstrate timer 
   
    time_elapsed = watch.stop();

    cout << "Your program took " << time_elapsed  << " seconds to execute" << endl;

    return 0;
}
