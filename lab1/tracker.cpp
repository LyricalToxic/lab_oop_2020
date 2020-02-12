#include "tracker.h"
#include <iostream>

using namespace std;
Tracker::Tracker()
{
    count++;
}
Tracker::~Tracker()
{
    count--;
}


int Tracker::count = 0;


int Tracker::get_count(){
   return count;
}


int Tracker::get_memory_size(){
   return count * sizeof (Tracker);
}
