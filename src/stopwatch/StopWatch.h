#ifndef STOPWATCH_H
#define STOPWATCH_H

class StopWatch {
   public:
    // returns the amount of time in seconds that has passed since the process
    // (i.e. your program) started executing
    double getProcessTime();
    // Starts the counter 
    void start();
    // stops the counter and returns the time elapsed since start() was called
    double stop();

   private:
    double watch_time;
};

#endif
