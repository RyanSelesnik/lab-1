#include "StopWatch.h"

#include <ctime>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e.
// your program) started executing
double StopWatch::getProcessTime() {
    clock_t time = clock();
    return static_cast<double>(time) / CLOCKS_PER_SEC;
}

void StopWatch::start() {watch_time = getProcessTime(); }

double StopWatch::stop() {
    watch_time = getProcessTime() - watch_time;
    return watch_time;
}