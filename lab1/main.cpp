#include <iostream>
#include "tracker.h"
using namespace std;

int main()
{
    Tracker a;
    Tracker b;
    cout << a.get_count()<<endl;
    cout << b.get_memory_size()<<endl;
    return 0;
}
